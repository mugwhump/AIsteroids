#include "AI_GP.h"

#include "Action.h"
#include "Controller.h"
#include "globals.h"
#include "GraphicsUtil.h"
#include "PlayData.h"
#include "RGBA.h"
#include "StateAction.h"
#include "StringUtil.h"
#include "XYObj.h"

#include "boost\foreach.hpp"
#include "boost\lexical_cast.hpp"


using namespace libgp;

AI_GP::AI_GP(void) {
}


AI_GP::AI_GP(Controller* controller, int nIn, int nOut )
: AI(controller, nIn, nOut) {
	init();
}

AI_GP::AI_GP(Controller* controller, int nIn, int nOut, const PlayData& data)
: AI(controller, nIn, nOut) {
	init();
	//Train on data
	train(data);
}

AI_GP::AI_GP(Controller* controller, int nIn, int nOut, const std::string& filename)
: AI(controller, nIn, nOut) {
	init();
	loadFrom( filename );
}

AI_GP::~AI_GP(void) {
	BOOST_FOREACH(GaussianProcess* gp, myGPs){
		delete gp;
	}
}

//TODO: Normalize inputs?? Log-hyperparameters?!
void AI_GP::init() {
	myType = GP;

	useVariance = false;
	skipActionRate = 0;
	fireThreshold = .5;

	//Create one GP per output dimension
	try {
		for( int i = 0; i < numOutputs; i++ ){
			myGPs.push_back( new GaussianProcess(numInputs, "CovSEard") ); //CovRBFCS suxxors
		}
		setHyperParams(false);
	}
	catch (std::exception& e) {
		std::cout << "-------Error caught creating GPs ----- \n" << e.what() << std::endl;
	}
}

//Set hyperparameters for covariance functions
void AI_GP::setHyperParams(bool useCustomHyperParams) {
	static const int numHyps = numInputs+1;

	if ( useCustomHyperParams ) {
		static double hyp1[] = {   -8.7972,-20.6243,-3.4369,-0.9896,1.8953,-9.4152,-3.8486,-14.1944,-4.5153,-6.3096,-1.5193,-14.1898,-8.0571,-13.4415,-5.2957,-11.9090,-6.4468,-12.4357,-4.0319,-13.1357,-3.6945,-11.0925,-3.9395,-10.4344,-3.3326, -14.2688, -3.6943, -1.7246};//, -19.2169};
		for( int i = 0; i < numInputs; i++ ) hyp1[i] /= -2.0;
		hyp1[numInputs] /= 2.0;
	
		static double hyp2[] = {-10.8214,  -5.8235,  -6.3434,  -5.1139,  -9.3464, -10.6420,  -0.7813, -10.4091 -8.8257, -11.5178,  -5.1740, -12.4302,  -3.0734, -10.8099,  -4.1575, -13.0870 -8.6623, -12.2563,  -7.8019, -18.0945,  -8.6526,  -9.9036,  -8.2263, -12.4208 -7.6929, -11.3626,  -7.7121,  -1.3290};//,  -1.8144};
		for( int i = 0; i < numInputs; i++ ) hyp2[i] /= -2.0;
		hyp2[numInputs] /= 2.0;
	
		static double hyp3[] = {-6.8186,  -5.8841,  -2.1169,  -1.0152,  -1.8744,  -8.3352,  -1.6104,  -8.7368, -1.4763,  -4.4781, 1.5295,  -7.7572,  -1.4816,  -8.0514,  -1.3243,  -8.0668,-1.3981,  -8.2368,  -1.5473,  -7.8666,  -1.2052,  -8.2823,  -1.4300,  -8.0955,-1.1934,  -8.1150,  -1.1132, -12.8060};//,  -4.2660};	
		for( int i = 0; i < numInputs; i++ ) hyp3[i] /= -2.0;
		hyp3[numInputs] /= 2.0;
	
		myGPs[0]->covf().set_loghyper(hyp1);
		myGPs[1]->covf().set_loghyper(hyp2);
		myGPs[2]->covf().set_loghyper(hyp3);

		std::cout << "Using hyperparams!" << std::endl;
	} 
	else {
		// Use default hyperparameters
		std::vector<double> lengthScales(numInputs, 0);
		lengthScales.push_back(1.0); //output variance?
		const double* params = &lengthScales[0];

		BOOST_FOREACH( GaussianProcess* gp, myGPs ){
			gp->covf().set_loghyper(params);
		}
		std::cout << "Not using hyperparams!" << std::endl;
	}
}


std::string AI_GP::getString() {
	return "Gaussian Process";
}

// Draw moving variance
void AI_GP::render() {
	if( !useVariance ) return;

	const float maxHeight = 80.f;
	const float width = 30.f;

	float meanHeight = static_cast<float>( getMovingMSE() )* maxHeight;
	float currentHeight = static_cast<float>( recentMSEs.front() ) * maxHeight;

	//Limit heights to not shoot off screen
	meanHeight = (meanHeight>maxHeight) ? maxHeight : meanHeight;
	currentHeight = (currentHeight>maxHeight) ? maxHeight : currentHeight;

	float xpos = (g_width / 4.f) * controller->getPlayerNum() + 10;
	Position bottomLeft( xpos, 20.f);
	Position topRight( xpos + width, 20.f + meanHeight );


	RGBA col = controller->getColor();
	col.setDrawColorTo();
	DrawSquare( bottomLeft, topRight ); //big square for moving average

	RGBA col2(1.f, 1.f, 1.f, 1.f);
	col2.setDrawColorTo();
	Position center = Position(xpos + (width/2.f), 20.f);//brighter square for current value
	DrawSquare(center, topRight);
}

/************************************************************************/
/* TRAINING AND PREDICTION                                                                     */
/************************************************************************/

//Do filtering of stuff in AI
Action AI_GP::getAction(const SimpleState& state) {
	return getFilteredAction(state);
}


Action AI_GP::getRawAction(const SimpleState& state) {
	std::vector<double> outputs(3, 0.0);
	std::vector<double> inputVec = getInputs(state); //so its data isn't destroyed until end of function
	double* inputs = &inputVec[0];

	for( int i = 0; i < myGPs.size(); i++ ){
		outputs[i] = myGPs[i]->f(inputs);
	}

	return Action(outputs);
}

Action AI_GP::getRawActionAndUpdateVariance(const SimpleState& state) {
	std::vector<double> outputs(3, 0.0);
	std::vector<double> inputVec = getInputs(state); //so its data isn't destroyed until end of function
	double* inputs = &inputVec[0];
	std::vector<double> variance(3, 0.0);

	for( int i = 0; i < myGPs.size(); i++ ){
		outputs[i] = myGPs[i]->f(inputs);
		variance[i] = myGPs[i]->var(inputs);
	}

	lastVariance = variance;
	return Action(outputs);
}



// Just updates Variance. ONLY CALLED WHEN HUMAN CONTROLLING
void AI_GP::train(const StateAction& sa) {
	updateUserFireRate(sa.getAction());

	//Make sure model's already been trained
	if( myGPs[0]->get_sampleset_size() == 0) return;

	//Don't slow everything down if not using variance
	if( !useVariance ) return;

	std::vector<double> variance(3, 0.0);
	std::vector<double> inputVec = getInputs(sa); //so its data isn't destroyed until end of function
	const double* inputs = &inputVec[0];

	for( int i = 0; i < myGPs.size(); i++ ){
		variance[i] = myGPs[i]->var(inputs);
	}
	updateMovingMSE( getMeanVariance(variance) );
}


void AI_GP::train(const PlayData& data) {
	std::cout << "Generating GP with dataset of size " << data.getNumInstances() << "...";

	//give models each datapoint
	BOOST_FOREACH( const StateAction& sa, data.getStateActions() ){
		addData(sa);
		//update firing threshold
		updateUserFireRate(sa.getAction());
	}

	//Train models on the data
	for( int i = 0; i < myGPs.size(); i++ ){
		myGPs[i]->compute();
	}

	std::cout << "Done!" << std::endl;
}

void AI_GP::reTrain(const PlayData& data) {
	BOOST_FOREACH( GaussianProcess* gp, myGPs ){
		gp->clear_sampleset();
	}
	train(data);
}


//Adds data to models, but must recompute models manually
void AI_GP::addData(const StateAction &sa) {
	std::vector<double> outputs = sa.getAction().getDoubleVec();
	std::vector<double> inputVec = getInputs(sa); //so it's data isn't destroyed until end of function
	const double* inputs = &inputVec[0];

	for( int i = 0; i < myGPs.size(); i++ ){
		myGPs[i]->add_pattern( inputs, outputs[i] );
	}
}


/************************************************************************/
/* MENU                                                                     */
/************************************************************************/

//Save each GP to different files with suffixes ".part0", ".part1", etc
void AI_GP::saveTo(const std::string& filename) {
	for( int i = 0; i < myGPs.size(); i++ ){
		std::string filenameWithSuffix = filename + ".part" + boost::lexical_cast<std::string>(i);

		myGPs[i]->write(filenameWithSuffix.c_str());
	}
	std::cout << "Saved GP as " << filename << std::endl;
}

//Load all GPs from files. Filename has no suffix.
void AI_GP::loadFrom(const std::string& filename) {
	std::vector<GaussianProcess*> newGPs;
	try {
		std::cout << "Loading and Computing GPs...";
		for( int i = 0; i < numOutputs; i++ ){
			std::string filenameWithSuffix = filename + ".part" + boost::lexical_cast<std::string>(i);

			newGPs.push_back( new GaussianProcess(filenameWithSuffix.c_str()) );
			newGPs[i]->compute(); //MUST RECOMPUTE THEM, WTF
		}
		//Delete old GPs
		BOOST_FOREACH(GaussianProcess* gp, myGPs){
			delete gp;
		}
		myGPs = newGPs;
		std::cout << "Done!" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error, could not load GP from " << filename << ":" << std::endl;
		std::cout << e.what() << std::endl;
		//Delete whichever GPs were successfully loaded
		BOOST_FOREACH(GaussianProcess* gp, newGPs){
			delete gp;
		}
	}
}


// void AI_GP::promptSave() {
// 	saveTo( getStringFromConsole("Enter name to save GP as") );
// }
// 
// //TODO: move loading to controller menu
// void AI_GP::promptLoad() {
// 	loadFrom( getStringFromConsole("Enter name of GP to load") );
// }

MenuItem* AI_GP::getNewMenuRoot() {
	MenuNode* node = new MenuNode( getString() + " options" );
	node->mergeAndDelete( getCommonMenuItems() );

//  	node->addChild( new MenuLeaf<AI_GP>("Save model", this, &AI_GP::promptSave) );
//  	node->addChild( new MenuLeaf<AI_GP>("Load model", this, &AI_GP::promptLoad) );
// 	node->addChild( new MenuLeafIntArg<AI_GP>("Set action sampling rate", "Enter skip rate", 0, 10, this, &AI::setActionSkip) );
// 	node->addChild( new MenuLeaf<AI_GP>("Toggle variance in actions", this, &AI::toggleUseVariance) ); 

	return node;
}

//Get properly filtered/scaled inputs
std::vector<double> AI_GP::getInputs( const StateAction& sa) {
	return getInputs(sa.getConstState());
}

std::vector<double> AI_GP::getInputs(const SimpleState& state) {
	// scale inputs to [0, 1]
	return state.getNormalizedDoubleVec();
}