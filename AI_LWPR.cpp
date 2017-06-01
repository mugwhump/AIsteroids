#include "AI_LWPR.h"

#include "Action.h"
#include "Controller.h"
#include "globals.h" //baleet?
#include "GraphicsUtil.h"
#include "MyError.h"
#include "RGBA.h"
#include "PlayData.h"
#include "SimpleState.h"
#include "StateAction.h"
#include "StringUtil.h"
#include "XYObj.h"

#include <lwpr.hh>
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "boost\foreach.hpp"
#include <algorithm>
#include "Game.h"




struct Params{
	double score; //default -1 if need to re-evaluate
//	double D;
	std::vector<double> DVec; //works as diagonal or full matrix (but gotta make positive definite...)
	bool updateD;
	double alpha;
	bool meta;
	double wGen;
	double penalty;
	double cutoff;

	//Randomly initialize
	Params(){
		score = defaultScore();
		DVec.resize( SimpleState::getNumAttributes(), 0.0 );
	}

	Params makeBaby( const Params& other ) const {
		if( this == &other ) return other; //can't have self-babies

		Params baby;
		//Randomly crossover Ds
		for( int i = 0; i < DVec.size(); i++ ){
			baby.DVec[i] = ( randBool(.5f) ) ? DVec[i] : other.DVec[i];
		}
//		baby.D = ( randBool(.5f) ) ? D : other.D;
		baby.updateD = ( randBool(.5f) ) ? updateD : other.updateD;
		baby.alpha= ( randBool(.5f) ) ? alpha : other.alpha;
		baby.meta = ( randBool(.5f) ) ? meta : other.meta;
		baby.wGen = ( randBool(.5f) ) ? wGen : other.wGen;
		baby.penalty = ( randBool(.5f) ) ? penalty : other.penalty;
		baby.cutoff = ( randBool(.5f) ) ? cutoff : other.cutoff;

		return baby;
	}

	void mutateField( double& val ){
		mutateField( val, .3f, .1f );
	}

	void mutateField( double& val, double maxMutation, double mutationChance ){
		//Check if mutating at all
		if(! randBool(mutationChance) ) return;

		double change = randFloat(.001f, val * maxMutation);

		val += gaussianSample(0.0, change);
		if( val <= 0.0 ) val = change;
		//Mark that Params has mutated
		score = defaultScore();
	}

	void mutateField( bool& val ){
		//Check if mutating at all
		const float boolMutationChance = .05f; //odds of bool fields mutating
		if(! randBool(boolMutationChance) ) return;

		val = !val;
		//Mark that Params has mutated
		score = defaultScore();
	}

	void mutateField( std::vector<double> vec ){
		const float maxMutation = .6f; //less likely, but mutates more
		const float mutationChance = .05f;

		BOOST_FOREACH( double& dub, DVec ){
			mutateField(dub, maxMutation, mutationChance);
// 			if( randBool(mutationChance) ){
// 				dub = randomD();
// 				MSE = defaultMSE();
// 			}
		}
	}

	void mutate(){
		mutateField(DVec);
		//mutateField(updateD);
		//mutateField(alpha);
		//mutateField(meta);
		mutateField(wGen);
		mutateField(penalty);
		mutateField(cutoff);
	}

	double randomD(){
		static const double Ds[] = {.1, 1.00, 5.0};
		int Dint = randIntExcludingHigh(0, 3);
		return Ds[Dint];
	}

	void setRandom(){
		static const double alphas[] = {.1, 1.0, 10.0, 100.0, 1000.0};
		static const double wGens[] = {.01, .05, .1, .2};
		static const double penalties[] = {.01, .001, .0001, .00001, .000001};
		static const double cutoffs[] = {.2, .1, .01};


		BOOST_FOREACH( double& dub, DVec ){
			dub = randomD();
		}
//		D = randomD();
		updateD = false;//(randIntExcludingHigh(0,2)) ? true : false;
		alpha = alphas[ randIntExcludingHigh(0, 5) ];
		meta = false;//(randIntExcludingHigh(0,2)) ? true : false;
		wGen = wGens[ randIntExcludingHigh(0, 4) ];
		penalty = penalties[ randIntExcludingHigh(0, 5) ];
		cutoff = cutoffs[ randIntExcludingHigh(0, 3) ];
	}

	bool needsUpdate(){
		return ( score == defaultScore() );
	}

	bool operator < ( const Params& second ) const {
		return score > second.score; //unintuitive, but that's how it works for sorting
	}

	std::string toString(){
		std::ostringstream stats;
		stats << "Mean Score: " << score << ", "
//			"D: " << D << ", "
//			"updateD: " << updateD << ", "
			//"alpha: " << alpha << ", "
			//"meta: " << meta << ", "
			"wGen: " << wGen << ", "
			"penalty: " << penalty << ", "
			"cutoff: " << cutoff << ", "
			"\nD: " << vecToStr(DVec);
		return stats.str();
	}

private:
	static int defaultScore() { return -1; }
};




/************************************************************************/
/* GENETIC ALG                                                                     */
/************************************************************************/

//Make buncha random params, run tests on them
void AI_LWPR::myTest(int numGens) {
	const int popSize = 25;
	const int maxDeaths = popSize / 2;
	const int numRands = popSize / 5;

	PlayData& trainingSet = PlayData("my10min");
	trainingSet.reduceToSizeUniformly(4000);
	
	Game* game = controller->getGame();
	const int numGames = 25;

	const int seedSeed = rand(); //Each set of tests uses the same levels

	std::ofstream myfile;
	myfile.open("params_" + currentTimeAsString() + ".txt"); //writes from beginning of file

	if(!myfile.is_open()){
		std::cout << "Could not write param info to file!" << std::endl;
	}

	//Initialize random population
	std::vector<Params> population(popSize);
	BOOST_FOREACH( Params& p, population ){
		p.setRandom();
	}

	// MAIN LOOP
	for( int i = 0; i < numGens; i++ ){

		//evaluate population
		BOOST_FOREACH( Params& p, population ){
			if( p.needsUpdate() ){
				try {
					AI_LWPR lwpr( this->controller, SimpleState::getNumAttributes(), Action::getNumAttributes(), p );
					//p.score = lwpr.batchTest( trainingSet, testSet );
					lwpr.train(trainingSet);
					p.score = game->playTest((AI*)&lwpr, numGames, seedSeed);
				}
				catch( LWPR_Exception& e){
					std::cout << "Caught LWPR_Exception: " << e.getString() << std::endl;
				}
			}
		}

		//sort from strongest to weakest
		std::sort( population.begin(), population.end() );

		//If last generation, quit here
		if( i == numGens-1 ) break;

		//Print some info
		std::cout << "\n-----GENERATION " << i  << "-----" << std::endl << std::endl;
		myfile <<  "\n-----GENERATION " << i  << "-----" << std::endl << std::endl;
		BOOST_FOREACH( Params& p, population ){
			std::cout << p.toString() << std::endl << std::endl;
			myfile << p.toString() << std::endl << std::endl;
		}

		//kill weakest
		int deaths = 0;
		std::cout << "Killed: ";
		for( int d = population.size()-1; d > 0; d-- ){
			// chance of death is proportional to weakness
			if( randBool(d/static_cast<float>(popSize)) ){
				population.resize( population.size()-1 );
				deaths++;
				std::cout << "#" << d << ", ";
			}
			if( deaths >= maxDeaths ) break;
		}
		std::cout << std::endl;

		//make some randoms
		std::cout << std::endl << "Making " << numRands << " randoms." << std::endl;
		for( int r = 0; r < numRands; r++ ){
			Params randParam;
			randParam.setRandom();
			population.push_back( randParam );
		}

		//make babies
		int numParents = population.size();
		for( int b = 0; population.size() < popSize; b++ ){
			if( !randBool( (float)b / numParents ) ){
				int partner = randIntExcludingHigh(0, numParents);
				population.push_back( population[b].makeBaby( population[partner] ) );
				
				std::cout << b << " fucked " << partner << "! ";
			}
			if( b == numParents-1 ) b = 0; //begin the orgy once more
		}

		//do some mutations.
		for( int m = 0; m < popSize; m++ ){
			population[m].mutate();
		}
	}// end main loop


	std::cout << "\nBest LWPRs after " << numGens << " generations:" << std::endl;
	myfile << "\nBest LWPRs after " << numGens << " generations:" << std::endl;
	BOOST_FOREACH( Params& p, population ){
		std::cout << p.toString() << std::endl;
		myfile << p.toString() << std::endl;
	}

	myfile.close();
}




AI_LWPR::AI_LWPR(void){
	//hidden
}

AI_LWPR::AI_LWPR(Controller* controller, int nIn, int nOut )
: AI(controller, nIn, nOut) {
	init(true);
}

AI_LWPR::AI_LWPR(Controller* controller, int nIn, int nOut, Params p)
: AI(controller, nIn, nOut) {
	init(false);
	setParams(p);
}

AI_LWPR::AI_LWPR(Controller* controller, int nIn, int nOut, const PlayData& data)
: AI(controller, nIn, nOut) {
	init(true);
	train(data);
}

AI_LWPR::AI_LWPR(Controller* controller, int nIn, int nOut, const std::string& filename)
: AI(controller, nIn, nOut) {
	init(true);
	loadFrom(filename);
}


AI_LWPR::~AI_LWPR(void)
{
	delete myLWPR_Object;
}


void AI_LWPR::init(bool defaultParams) {
	myType = LWPR;
	recentMSEs.resize(numMSEs, 0.0);
	sumOfRecentMSE = 0.0;

	useVariance = false;
	skipActionRate = 0;
	fireThreshold = .03; //.055

	myLWPR_Object = new LWPR_Object(numInputs, numOutputs);
	//setParams( .5, true, 500, true, .4, .000001 );
// 	const double Ds[] = {0.13, 2.5, 6.5, 1.0, 9.5, 1.13, 3.8, 0.035, 6.0, 2.5, 0.1,
// 		0.075, 8.0, 0.045, 0.12, 0.17, 5.75, 3.9, 0.075, 0.1, 1, 
// 		1.15, 1, 0.1, 5, 0.45, 5};
// 	std::vector<double> DistanceM(Ds, Ds + SimpleState::getNumAttributes() );
	std::vector<double> DistanceM(numInputs, 8.0);
	setParams( DistanceM, true, 100, true, .10, .001, .0001 );
}


void AI_LWPR::clear() {
	delete myLWPR_Object;
	init( true );
}


std::string AI_LWPR::getString() {
	return "LWPR";
}

/************************************************************************/
/* RENDERAN                                                                     */
/************************************************************************/

//Draw moving MSE/Confidence
void AI_LWPR::render() {
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
/* PREDICTAN                                                                     */
/************************************************************************/

void AI_LWPR::setParams(double distance, bool updateD, double alpha, bool meta, double wGen, double penalty, double cutoff) {
	doubleVec distanceMetrics( SimpleState::getNumAttributes(), distance );
	setParams( distanceMetrics, updateD, alpha, meta, wGen, penalty, cutoff );
}
//Initialize parameters
void AI_LWPR::setParams(doubleVec distanceM, bool updateD, double alpha, bool meta, double wGen, double penalty, double cutoff) {

	try{

	/*Component-wise input normalization factors useful for making the inputs dimensionless. In
	general, it is dangerous to divide each dimension by its variance without considering the
	physical properties of the input values since some input dimensions may be actually moving
	very little relative to its range. Ideally, one should know the range of possible inputs in
	each dimension and try to normalize each input by that. ***Note also that distances between
	receptive ﬁelds and input data are calculated after the normalization***, that is, norm in and
	init D are closely connected tuning parameters.*/
// 	double inDevs[] =    {25.1542,   16.4812,    2.9488,    1.7926,    2.2866,   60.2259,    1.8034,   71.3382,    1.7212,         0,         0,   61.2443,    2.1424,
// 		50.0299,    2.0379,   52.0091,    1.7832,   59.7131,    1.9487,   53.2169,    1.8650,   59.6731,    2.1096,   59.3926,    1.9124,   57.5735, 1.9061 }  ;
// 	doubleVec inputRanges = std::vector<double>(inDevs, inDevs + SimpleState::getNumAttributes() );
		// ^^That is WRONG, makes too many RFs too narrow, no activations, sits there.
// 	doubleVec inputRanges = getInputMaximums();
// 	myLWPR_Object->normIn(inputRanges); // Set expected variation for each value

//	double outRanges[] = {2.0, 2.0, 1.0};
	double outRanges[] = {.2, .2, .1}; //need more XTREME values
	doubleVec outputRanges = std::vector<double>(outRanges, outRanges + 3 );
	myLWPR_Object->normOut(outputRanges);


	/*Initial distance metric (must be symmetric positive deﬁnite) assigned to newly created receptive ﬁelds.
	Too small value of D (large receptive ﬁelds) can lead to local minima and delay convergence
	Too large value of D (small receptive ﬁelds) can lead to allocation of too many receptive ﬁelds and overﬁtting.
	Hint: If you know that the target function is linear in a certain subset of the inputs, you
	can try keeping the corresponding diagonal elements of init D at very small values*/
	// /= 5.0  lotsa stillness
	// /= 15.0 beeg hueg curves, ~900 RFs
	// INPUTS ARE NORMALIZED TO SAME RANGE BEFORE THIS?!?!?! MAX RANGE ACTUALLY 1?!?!?!
	// .2 = wide curves, VERY few RFs (~100)
// 	doubleVec distanceMetrics = SimpleState::getNoLoopAttributeRanges();
// 	for( int i = 0; i < distanceMetrics.size(); i++ ){
// 		distanceMetrics[i] /= 5.0;
// 	}
	myLWPR_Object->setInitD(distanceM); // Set starting receptive field size for each value. Smaller=broader
	myLWPR_Object->diagOnly(distanceM.size() == numInputs);

	myLWPR_Object->updateD(updateD); //DO automatically update distance metric


	/*Initial learning rates for each above distance metric for gradient descent. If you see
	instability in convergence, you have too large a learning rate. If the MSE is decreasing but
	the convergence is slow, you might try increasing the learning rate. In theory, using meta
	learning meta=1 should alleviate the need to tune this parameter.*/
	//When 250 was slow curves w/ ~1000 RFs, 500 was more twitchy and still, ~2000RFs
	// 1000 better, ~2000 RFs
	myLWPR_Object->setInitAlpha(alpha); // Same rate for each

	myLWPR_Object->useMeta(meta); //slightly expensive


	/*Weight activation threshold. A new local model is generated if no existing model elicits
	response (activation) greater than w gen for a training sample. Default = .1 
	Closer to 1 means more overlap of RFs, so better results but higher costs.*/
	//Around .5 starts causing some slowdown
	myLWPR_Object->wGen(wGen);

	myLWPR_Object->wPrune(.8);

	/*Multiplication factor γ for the regularization penalty term in the optimization functional. 
	Larger values enforce smaller distance metrics, corresponding to wider receptive ﬁelds,
	which in turn implies smoother functions.*/
	//.01 = continuous smooth turning, very few RFs (~100).
	//.001 = slower more stationary turning? ~700 RFs
	//.0001 = frequent inactivity, ~1000 RFs
	myLWPR_Object->penalty(penalty);

	activationCutoff = cutoff;

	}
	catch( LWPR_Exception& e){
		std::cout << "Caught LWPR_Exception: " << e.getString() << std::endl;
	}
	catch( MyError& e){
		std::cout << "Caught MyError: " << e.what() << std::endl;
	}
}

void AI_LWPR::setParams(Params p) {
	setParams( p.DVec, p.updateD, p.alpha, p.meta, p.wGen, p.penalty, p.cutoff );
}


void AI_LWPR::train(const StateAction& sa) {
	//update firing threshold
	updateUserFireRate(sa.getAction());

	std::vector<double> inVec = getInputs(sa);
	std::vector<double> outVec = sa.getAction().getDoubleVec();
	try{
		doubleVec prediction = myLWPR_Object->update(inVec, outVec);
		updateMovingMSE( getMSE(prediction, outVec) );
	}
	catch( LWPR_Exception& e){
		std::cout << "Caught LWPR_Exception: " << e.getString() << std::endl;
	}
}


void AI_LWPR::train(const PlayData& data) {
	BOOST_FOREACH( const StateAction& sa, data.getStateActions() ){
		train( sa );
	}
}

//Clear old data first
void AI_LWPR::reTrain(const PlayData& data) {
	clear();
	train(data);
}



Action AI_LWPR::getAction(const SimpleState& state) {
	return getFilteredAction(state);
}


Action AI_LWPR::getRawAction(const SimpleState& state) {
	doubleVec inVec = getInputs(state);
	doubleVec outVec;

	try{
		outVec = myLWPR_Object->predict( inVec, activationCutoff ); //faster without confidence
	}
	catch( LWPR_Exception& e ){
		std::cout << "Caught LWPR_Exception: " << e.getString() << std::endl;
	}

	return Action( outVec );
}


Action AI_LWPR::getRawActionAndUpdateVariance(const SimpleState& state) {
	doubleVec inVec = getInputs(state);
	doubleVec outVec;
	doubleVec confidence;
	// 	doubleVec maxActivations;

	try{
		outVec = myLWPR_Object->predict( inVec, confidence, activationCutoff ); 
		lastVariance = confidence;
	}
	catch( LWPR_Exception& e ){
		std::cout << "Caught LWPR_Exception: " << e.getString() << std::endl;
	}

	return Action(outVec);
}


/************************************************************************/
/* MENU                                                                     */
/************************************************************************/

void AI_LWPR::printModelInfo() {
	std::cout << "------------LWPR STATS----------" << std::endl;

	std::cout << "Datapoints seen: " << myLWPR_Object->nData() << std::endl;

	std::cout << "Using distance updates: " << ( (myLWPR_Object->updateD()) ? "TRUE" : "FALSE" ) << std::endl;
	std::cout << "Using updates to distance updates: " << ( 
		(myLWPR_Object->useMeta()) ? 
		"TRUE (rate=" + boost::lexical_cast<std::string>(myLWPR_Object->metaRate()) + ")"
		: "FALSE"  )
		<< std::endl;

	std::cout << "Penalty (higher=wider RFs): " << myLWPR_Object->penalty() << std::endl;

	//These don't seem to work...
	std::cout << "Mean of each attribute: " << vecToStr( myLWPR_Object->meanX() ) << std::endl;
	std::cout << "Variance of each attribute: " << vecToStr( myLWPR_Object->varX() ) << std::endl;

	std::cout << "Input Normalization factors: \n" << vecToStr(myLWPR_Object->normIn()) << std::endl;
	std::cout << "Output Normalization factors: \n" << vecToStr(myLWPR_Object->normOut()) << std::endl;

	std::cout << "# receptive fields for each output: " << vecToStr( myLWPR_Object->numRFS() ) << std::endl;
	printRandomRF(0);
	printRandomRF(1);
	printRandomRF(2);
}

void AI_LWPR::printRandomRF(int outputIndex) {
	int numRFs = myLWPR_Object->numRFS(outputIndex);
	int RFIndex = randIntExcludingHigh(0, numRFs);

	std::cout << "\n----RF #" << RFIndex << " for output #" << outputIndex << "----" << std::endl;
	printRFInfo( myLWPR_Object->getRF(outputIndex, RFIndex) );
}


void AI_LWPR::printRFInfo(const LWPR_ReceptiveFieldObject& rf) {
	//std::cout << ": " <<  << std::endl;

	std::cout << "RF is " << ((rf.trustworthy()) ? "" : "NOT") << " trustworthy" << std::endl;
	std::cout << "# of datapoints seen: " << vecToStr( rf.numData() ) << std::endl;

	std::cout << "Weighted means of input data seen by RF:  \n" << vecToStr( rf.meanX() ) << std::endl;
	std::cout << "Variances of input data seen by RF:  \n" << vecToStr( rf.varX() ) << std::endl;
	std::cout << "Center vector of RF:  \n" << vecToStr( rf.center() ) << std::endl;
	std::cout << "Distance Metric of RF:  \n" << vecVecToStr( rf.D() ) << std::endl;

// 	std::cout << "# of PLS regression directions: " << rf.nReg() << std::endl;
// 	std::cout << "PLS regression directions: \n" << vecVecToStr( rf.U() ) << std::endl;
	//std::cout << "PLS projections: \n" << vecVecToStr( rf.P() ) << std::endl;

// 	std::cout << "Offset/Intercept of local model: " << rf.beta0() << std::endl;
// 	std::cout << "Slope of local model:  \n" << vecToStr( rf.slope() ) << std::endl;

}

//Save to binary file. Filename has no suffix.
void AI_LWPR::saveTo(const std::string& filename) {
	if( myLWPR_Object->writeBinary(filename.c_str()) ){
		std::cout << "Saved LWPR to " << filename << ".bin" << std::endl;
	}
	else{
		std::cout << "Error, could not save LWPR. Make sure filename is valid." << std::endl;
	}
}

//Load from binary file. Filename has no suffix.
void AI_LWPR::loadFrom(const std::string& filename) {
	LWPR_Object* newLWPR;
	try {
		newLWPR = new LWPR_Object(filename.c_str());
		delete myLWPR_Object;
		myLWPR_Object = newLWPR;
		std::cout << "Loaded LWPR from " << filename << ".bin" << std::endl;
	}
	catch (LWPR_Exception&) {
		std::cout << "Error, could not load LWPR from " << filename << ".bin" << std::endl;
	}
}


void AI_LWPR::setCutoff() {
	std::cout << "Current activation cutoff: " << activationCutoff << std::endl;
	int intCutoff = getIntFromConsole("Enter int between 1 and 10000 (will be divided by 1000)\n", 1, 1000);
	activationCutoff = intCutoff / 10000.0;
	std::cout << "New cutoff: " << activationCutoff << std::cout;
}

MenuItem* AI_LWPR::getNewMenuRoot() {
	MenuNode* node = new MenuNode( getString() + " options" );
	node->mergeAndDelete( getCommonMenuItems() );

// 	node->addChild( new MenuLeaf<AI_LWPR>("Save model", this, &AI_LWPR::promptSave) );
	// 	node->addChild( new MenuLeaf<AI_LWPR>("Load model", this, &AI_LWPR::promptLoad) );
	node->addChild( new MenuLeaf<AI_LWPR>("Set cutoff", this, &AI_LWPR::setCutoff) );
	node->addChild( new MenuLeaf<AI_LWPR>("Print model stats", this, &AI_LWPR::printModelInfo) );
	node->addChild( new MenuLeafIntArg<AI_LWPR>("Find optimal params","Enter # of generations: ", 2, 1000, this, &AI_LWPR::myTest) );
//	node->addChild( new MenuLeaf<AI_LWPR>("Toggle variance in actions", this, &AI::toggleUseVariance) );

	return node;
}


/************************************************************************/
/* TESTS                                                                     */
/************************************************************************/



#define SEED_RAND()     srand( static_cast<unsigned int>(time(NULL)) )
#define URAND()         (((double)rand())/ (double)RAND_MAX)


double cross(double x1,double x2) {
	double a = exp(-10*x1*x1);
	double b = exp(-50*x2*x2);
	double c = 1.25*exp(-5*(x1*x1 + x2*x2));

	if (a>b) {
		return (a>c) ? a:c;
	} else {
		return (b>c) ? b:c;
	}
}


void AI_LWPR::LWPR_Test() {

	doubleVec x(2);
	doubleVec y(1);

	double mse;
	unsigned int i,j,numTest;

	FILE *fp;
	LWPR_Object model(2,1);

	/* Set initial distance metric to 50*(identity matrix) */
	model.setInitD(50);

	/* Set init_alpha to 250 in all elements */
	model.setInitAlpha(250);

	/* Set w_gen to 0.2 */
	model.wGen(0.2);

	/* See above definition, we either use srand() on Windows or srand48 everywhere else */   
	SEED_RAND();

	doubleVec u(3);

	for (j=0;j<20;j++) {
		mse = 0.0;

		for (i=0;i<100;i++) {

			x[0] = 2.0*URAND()-1.0;
			x[1] = 2.0*URAND()-1.0;
			y[0] = cross(x[0],x[1]) + 0.1*URAND()-0.05;

			// Update the model with one sample

			doubleVec yp = model.update(x,y);

			mse+=(y[0]-yp[0])*(y[0]-yp[0]);

			if( j==0 ){
				std::cout << "T " << i << ": predicted y when trained on point (" << x[0] << ", " << x[1]
					<< ", " << y[0] << "): " << yp[0] << std::endl;
			}
		}
		mse/=500;
		printf("#Data = %d   #RFS = %d   MSE = %f\n",model.nData(), model.numRFS(0), mse);
	}

	fopen_s(&fp, "output.txt", "w");

	mse = 0.0; 
	numTest=0;  

	for (x[1]=-1.0; x[1]<=1.01; x[1]+=0.05) {   
		for (x[0]=-1.0; x[0]<=1.01; x[0]+=0.05) {
			y[0] = cross(x[0],x[1]);

			// Use the model for predicting an output
			doubleVec yp = model.predict(x);

			mse += (y[0]-yp[0])*(y[0]-yp[0]);
			numTest++;

			fprintf(fp,"%8.5f %8.5f %8.5f\n",x[0],x[1],yp[0]);
		}
		fprintf(fp,"\n\n");
	}
	fclose(fp);

	printf("MSE on test data (%d) = %f\n",numTest,mse/(double) numTest);


	// retrieve a wrapper object of the first receptive field 
	LWPR_ReceptiveFieldObject rf = model.getRF(0,0);

	printf("\nCholesky factors of RF(0,0) distance metric\n(printed in lower triangular form):\n");
	std::vector<doubleVec> M = rf.M();
	for (i=0;i<M.size();i++) {
		for (j=0;j<M[i].size();j++) {
			printf("%8.4f  ",M[i][j]);
		}
		printf("\n");
	}

	printf("\nCenter, offset and slope of that RF:\n");
	doubleVec center = rf.center();
	doubleVec slope  = rf.slope();
	printf("(%8.4f, %8.4f)  %8.4f  (%8.4f, %8.4f)\n",
		center[0],center[1],rf.beta0(),slope[0],slope[1]);

	printf("\nPLS coefficients 'beta' of that RF:\n");
	doubleVec beta = rf.beta();
	for (i=0;i<beta.size();i++) {
		printf("%8.4f  ",beta[i]);
	}
	printf("\n");

	model.writeXML("lwpr_cross_2d.xml");

	printf("\nTo view the output, start gnuplot, and type:\n");
	printf("   splot \"output.txt\"\n\n");
}

std::vector<double> AI_LWPR::getInputs(const StateAction& sa) {
	return getInputs(sa.getConstState());
}

std::vector<double> AI_LWPR::getInputs(const SimpleState& state) {
	// scale inputs to [0, 1]
	return state.getNormalizedDoubleVec();
}

std::vector<double> AI_LWPR::getInputMaximums() {
	return SimpleState::getAttributeMaximums();
}
