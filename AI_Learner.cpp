#include "AI_Learner.h"

#include "Action.h"
#include "Matlab.h"
#include "PlayData.h"
#include "SimpleState.h"
#include "StateAction.h"
#include <iostream>



AI_Learner::AI_Learner(Controller* controller, std::string _learnerName)
: AI(controller, SimpleState::getNumAttributes(), Action::getNumAttributes()) {
	//myType is briefly DEFAULT while in AI() constructor
	learnerName = _learnerName;
	init();
}

AI_Learner::AI_Learner( Controller* controller, std::string _learnerName, const PlayData& playData ) 
: AI(controller, SimpleState::getNumAttributes(), Action::getNumAttributes()) {
	learnerName = _learnerName;
	init();

	train( playData );
}

void AI_Learner::init() {
	myType = LINEAR;
}


AI_Learner::~AI_Learner(void) {
	// Delete MATLAB LinearLearner
//	Matlab::eval( "clear " + learnerName + ";");
//	std::cout << "Deleted " << learnerName << std::endl;
}


std::string AI_Learner::getString() {
	return learnerName;
}

/************************************************************************/
/* RENDER AND UPDATE                                                                     */
/************************************************************************/

void AI_Learner::render() {
}

/************************************************************************/
/* TRAINING                                                                     */
/************************************************************************/

void AI_Learner::train(const PlayData& playData) {
	std::vector<double> DataM = playData.getDoubleVec();
	std::string dataStr = "DataM";

	std::vector<double> MaximumsA = SimpleState::getAttributeMaximums();
	std::string maxStr = "MaximumsA";

	Matlab::setOutputToConsole(true);

	//Send data to matlab. Remember to destroy array
	Matlab::putVectorAsMxArray( DataM, dataStr, playData.getNumInstances() );
	Matlab::putVectorAsMxArray( MaximumsA, maxStr );
	std::cout << "Generating Linear Learner...";

	// Make the learner
	Matlab::eval( learnerName + " = LinearLearner(" + dataStr + ", " + maxStr + ");" );
	std::cout << " Done!" << std::endl;
}


/************************************************************************/
/* PREDICTION                                                                     */
/************************************************************************/

Action AI_Learner::getAction(const SimpleState& state) {
	return getFilteredAction( state );
}

Action AI_Learner::getRawAction(const SimpleState& state) {
	std::string instanceA = "InstanceA";
	std::vector<double> inputVector = state.getDoubleVec();

	Matlab::setOutputToConsole(true);

	//Send data to matlab. Remember to destroy array
	Matlab::putVectorAsMxArray(inputVector, instanceA);

	//Classify it with learner
	std::string outputA = "OutputA";
	Matlab::eval(outputA + " = " + learnerName + ".classifyInstanceNoLabels(" + instanceA + ");");


	//Get results back
	std::vector<double> results;
	Matlab::getMxArrayAsVector(outputA, results);

	//Action from results
	return Action( results );
}


Action AI_Learner::getRawActionAndUpdateVariance(const SimpleState& state) {
	lastVariance.assign( Action::getNumAttributes(), 0.0 );
	return getRawAction( state );
}


/************************************************************************/
/* MENU                                                                     */
/************************************************************************/


//CONVENTION: FILENAMES ARE USED AS MATLAB WORKSPACE NAMES FOR SAVING + LOADING
void AI_Learner::saveTo(const std::string& filename) {
	try {
		std::cout << "Saving " << getString() << " to " << filename << "..." ;
		Matlab::eval( filename + " = " + learnerName + ";" );
		Matlab::eval( "save( '" + filename + "', '" + filename + "' );" );
		std::cout << "Done!" << std::endl;
	}
	catch (MatlabError& e) {
		std::cout << "Error, could not save " << getString() << ". Error:\n" << e.what() << std::endl;
	}	
}


void AI_Learner::loadFrom(const std::string& filename) {
	try {
		std::cout << "Loading " << filename << " as " << filename << "...";
		Matlab::eval( "load( '" + filename + "', '" + filename + "' );" );
		learnerName = filename;
		std::cout << "Done!" << std::endl;
	}
	catch (MatlabError& e) {
		std::cout << "Error, could not load " << filename << ". Error:\n" << e.what() << std::endl;
	}	
}


MenuItem* AI_Learner::getNewMenuRoot() {
	MenuNode* node = new MenuNode( getString() + " options" );
	node->mergeAndDelete( getCommonMenuItems() );

// 	node->addChild( new MenuLeafStringArg<AI_Learner>("Save model", "Enter filename", this, &AI_Learner::saveTo) );
// 	node->addChild( new MenuLeafStringArg<AI_Learner>("Load model",  "Enter filename", this, &AI_Learner::loadFrom) );

	return node;
}