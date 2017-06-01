#include "AI.h"
#include "Asteroid.h"
#include "CompleteState.h"
#include "Controller.h"
#include "Game.h"
#include "globals.h"
#include "Laser.h"
#include "Matlab.h"
#include "MyError.h"
#include "PlayData.h"
#include "PowerUp.h"
#include "RelativeDirection.h"
#include "SimpleState.h"
#include "Ship.h"
#include "XYObj.h"

#include "windows.h" // for DebugBreak()
#include <boost/archive/text_iarchive.hpp>
#include <boost/foreach.hpp>
#include <boost/lexical_cast.hpp>


EnumParser<AI::AIType> getEnumParser() {
	EnumParser<AI::AIType> p = EnumParser<AI::AIType>();
	p.put("Default_AI", AI::DEFAULT); //0
	p.put("LINEAR_LEARNER", AI::LINEAR); 
	p.put("RBFN", AI::RBFN); 
	p.put("LWPR", AI::LWPR); 
	p.put("GP", AI::GP); 
	p.put("NN", AI::NN); 
	p.put("None", AI::None); 

	return p;
}

EnumParser<AI::AIType> AI::parser = getEnumParser();



AI::AI(void) {
	//hidden
}

AI::AI(Controller* _controller, int nIn, int nOut) {
	controller = _controller;
	myType = DEFAULT;
	numInputs = nIn;
	numOutputs = nOut;

	recentMSEs.resize( numMSEs, 0.0 );
	sumOfRecentMSE = 0.0;

	useVariance = false;
	lastVariance.resize( numOutputs, 0.0 );

	useThresholdAdaptation = true;
	numUserFires = 1;
	numUserNonFires = g_laser_recharge * 2; //initialize ratio sensibly
	numAIFires = numUserFires;
	numAINonFires = numUserNonFires;
	fireThreshold = .075;
	timeSinceLastFire = g_laser_recharge+1;
	timeSinceUpdate = 0;

	timeSinceNewAction = 0;
	skipActionRate = 0;

	humanInactiveFrames = 0;

	defaultNumGames = 300;
}


AI::~AI(void)
{
}


void AI::setShipTo(Ship* _ship) {
	ship = _ship;
}


std::string AI::getString() {
	return parser.enumToString(myType);
}


/************************************************************************/
/* RENDER AND UPDATE                                                                     */
/************************************************************************/
void AI::render() {
	//mySimpleState.render();
}


/************************************************************************/
/* TRAINING, PREDICTION                                                                     */
/************************************************************************/

void AI::updatePlayerAction(const StateAction& sa) {
	//check how long human has been inactive for
	if( sa.getAction().isInactive() ){
		humanInactiveFrames++;
		if( humanInactiveFrames > maxHumanInactiveFrames ){
			humanInactiveFrames = 0;
			controller->aiInterrupt();
			return; 
		}
	}
	train( sa );
}

void AI::train(const StateAction& sa) {
	//update firing threshold
	updateUserFireRate(sa.getAction()); //TODO: make it so i don't have to put this in every train()!
}

void AI::train(const PlayData& data) {
	std::cout << "Default AI is too dumb to train!" << std::endl;
}

//Default behaviour = forget nothing
void AI::reTrain(const PlayData& data) {
	train(data);
}

void AI::reTrain(const std::string& filename) {
	try {
		PlayData data(filename);
		reTrain(data);
	}
	catch (MyError& e) {
		std::cout << "-------Error caught in reTrain() ----- \n" << e.what() << std::endl;
	}
}


Action AI::getAction() {
	throw MyError( "AI requires state information to act", __LINE__);
}

Action AI::getAction( const SimpleState& state) {
	return scriptedAI(state);
}


/************************************************************************/
/* AI ROUTINES                                                                     */
/************************************************************************/
Action AI::scriptedAI(const SimpleState& state) const {
	//std::cout << "SCRIPTIN TIME BABY" << std::endl;
	Action action;
// 	std::vector<PowerUp>* powerups = levelState->getPowerUpsPointer();
// 
// 	if(powerups->size() > 0){
// 		Position relativeGoalPos = powerups->at(0).pos.getRelativeTo(ship->pos);
// 		moveToward(relativeGoalPos, action);
// 	}

	action.pressKeyDiscrete(eInput::FIRE); //YEEEEAAAAAAAAAAAAH

	return action;
}

void AI::moveToward(Position relativePos, Action &action) const {
	float directionToPos = screenCenter.directionTo(relativePos);
	float radsToTurnLeft = directionToPos - ship->rot; //Turn left this much to face the position
	const float minimumTurn = 0.1f; //to prevent jittering

	if (abs(radsToTurnLeft) > minimumTurn) {
		if(radsToTurnLeft > 0){ 
			if(radsToTurnLeft < M_PI){//Simple case left turn
				action.pressKeyDiscrete(eInput::LEFT);
			}
			else{//Turn right over boundary
				action.pressKeyDiscrete(eInput::RIGHT);
			}
		}
		else{
			if(-radsToTurnLeft < M_PI){//Simple case right turn
				action.pressKeyDiscrete(eInput::RIGHT);
			}
			else{//Turn left over boundary
				action.pressKeyDiscrete(eInput::LEFT);
			}
		}
	}

	action.pressKeyDiscrete(eInput::UP); //FULL SPEED BABY
}

/************************************************************************/
/* SAVING AND LOADING                                                                     */
/************************************************************************/

void AI::saveTo(const std::string& filename) {
	try{
		// create and open a character archive for output
		std::ofstream ofs(filename);
		boost::archive::text_oarchive oa(ofs);
		// write class instance to archive
		oa << *this;
	}
	catch (std::exception& e) {
		std::cout << "Cannot save AI to "+filename+", " << e.what() << std::endl;
	}
}

void AI::loadFrom(const std::string& filename) {
	try {
		std::ifstream ifs(filename);
		boost::archive::text_iarchive ia(ifs);
		// read class instance to archive
		ia >> *this;
	}
	catch (std::exception& e) {
		std::cout << "Cannot load AI from "+filename+", " << e.what() << std::endl;
	}
}


/************************************************************************/
/* ACTION FILTERING, FIRING THRESHOLDS, UPDATE SKIPPING                                                                     */
/************************************************************************/

//Filter firing value (and update threshold)
//Return last action if skipping
//Variance and MSE?
Action AI::getFilteredAction(const SimpleState& state) {
	Action action;

	// Get actual new action
	if ( timeSinceNewAction >= skipActionRate ) {
		timeSinceNewAction = 0;
		action = (useVariance) ? getRawActionAndUpdateVariance(state) : getRawAction(state);
		lastAction = action;
	} 
	else {
		timeSinceNewAction++;
		action = lastAction;
	}

	//update MSE stuff, apply noise to action. LastVariance must have been updated.
	if( useVariance ){
		updateMovingMSE( getMeanVariance(lastVariance) );
		action.applyNoise(lastVariance);
	}

	//round firing vals
	action.roundFiringWith(fireThreshold);
	updateFireThreshold(action);

	return action;
}

Action AI::getRawAction(const SimpleState& state) {
	return scriptedAI(state);
}

Action AI::getRawActionAndUpdateVariance(const SimpleState& state) {
	lastVariance.assign( Action::getNumAttributes(), 0.0 );
	return scriptedAI(state);
}

//called when player data observed
//Make sire firing value has been rounded
void AI::updateUserFireRate(const Action& action) {
	if( action.isFiringRounded() && timeSinceLastFire > g_laser_recharge ){
		timeSinceLastFire = 0;
		numUserFires++;
	}
	else{
		timeSinceLastFire++;
		numUserNonFires++;
	}
}

//assumes this action comes from AI
//Make sire firing value has been rounded
void AI::updateFireThreshold(const Action& action) {
	if( action.isFiringRounded() && timeSinceLastFire > g_laser_recharge ){
		timeSinceLastFire = 0;
		numAIFires++;
	}
	else{
		timeSinceLastFire++;
		numAINonFires++;
	}

	//TODO: updating the AI should wipe its past firing stats, since it's outputting different values now

	//don't update too often
	if ( timeSinceUpdate >= g_laser_recharge*10 && useThresholdAdaptation ) {
		timeSinceUpdate = 0;
		//if not firing enough, lower threshold
		if( (numAIFires / (double)numAINonFires) < (numUserFires / (double)numUserNonFires) / 2 ){
			fireThreshold -= .01;
		}
		//else maybe raise it
		else if( (numAIFires / (double)numAINonFires) > (numUserFires / (double)numUserNonFires) * 2 ){
			fireThreshold += .01;
		}
	}
	else{
		timeSinceUpdate++;
	}
}


//Give threshold val of 0 to 100 (gets divided by 100)
void AI::setFireThreshold(int threshold) {
	fireThreshold = threshold / 100.0;
	std::cout << "Fire threshold set to " << fireThreshold << std::endl;
}

void AI::setUseThresholdAdaptation(bool use) {
	std::cout << "" << ((use) ? "Now" : "Not") << " adapting fire threshold." << std::endl;
	useThresholdAdaptation = use;
}

void AI::toggleUseThresholdAdaptation() {
	setUseThresholdAdaptation( !useThresholdAdaptation );
}


void AI::setUseVariance(bool use) {
	std::cout << "" << ((use) ? "Now" : "Not") << " using variance for actions." << std::endl;
	useVariance = use;
}

void AI::toggleUseVariance() {
	setUseVariance(!useVariance);
}

void AI::setActionSkip(int skip) {
	skipActionRate = skip;
}

void AI::resetSkippedActionCounter() {
	timeSinceNewAction = 0;
}



/************************************************************************/
/* MSE                                                                     */
/************************************************************************/

//Error from 0 to 1 (ranges get scaled)
double AI::getMSE(std::vector<double> predicted, std::vector<double> actual) {
	double dif0 = actual[0] - predicted[0];
	dif0 = mapFromRange1to2( static_cast<float>( dif0 ), -2.f, 2.f, -1.f, 1.f );
	double dif1 = actual[1] - predicted[1];
	dif1 = mapFromRange1to2( static_cast<float>( dif1 ), -2.f, 2.f, -1.f, 1.f );
	double dif2 = actual[2] - predicted[2];

	return ( dif0*dif0 + dif1*dif1 + dif2*dif2 ) / 3.0;
}


double AI::getMeanVariance(std::vector<double> variance) {
	double sum = 0.0;
	for( int i = 0; i < variance.size(); i++ ){
		sum += variance[i];
	}
	return sum / variance.size();
}


void AI::updateMovingMSE(double val) {
	sumOfRecentMSE += val;
	recentMSEs.push_front( val );

	if ( recentMSEs.size() > numMSEs ) {
		double old = recentMSEs.back();
		sumOfRecentMSE -= old;
		recentMSEs.pop_back();
	}
}

double AI::getMovingMSE() {
	return sumOfRecentMSE / numMSEs;
}


/************************************************************************/
/* STATS                                                                     */
/************************************************************************/


int AI::promptRandomSeed() {
	return getIntFromConsole( "Enter random seed", 0, INT_MAX );
}


void AI::setDefaultNumGames(int num) {
	if( num < 1 ) throw MyError("Error, cannot set numGames to ", num, __LINE__);

	defaultNumGames = num;
}


void AI::testAI(int numGames) {
	controller->getGame()->playTest( this, numGames, promptRandomSeed() );
}

//Remember to give GPs a smaller test set.
double AI::batchMSETest(const PlayData& trainingData, const PlayData& testData) {
	double errorSum = 0.0;
	int numTests = testData.getNumInstances();

	reTrain( trainingData );

	BOOST_FOREACH( const StateAction& sa, testData.getStateActions() ){
		Action prediction = getAction( sa.getConstState() );
		errorSum += prediction.MSE( sa.getAction() );
	}
	errorSum /= numTests;

	return errorSum;
}


void AI::testIncrementally() {
	static const int numFolds = 10;

	const PlayData& data = controller->getPlayData();

	std::vector<int> avgScores = batchTestTrainingSize( data, numFolds );

	std::cout << "Average scores: ";
	BOOST_FOREACH(int score, avgScores ){
		std::cout << score << ", ";
	}
	std::cout << std::endl;

	if( getYesNoFromConsole("Save scores?") ){
		std::string filename = parser.enumToString( myType ) + "_scores";
		Matlab::putVectorAsMxArray( avgScores, filename );
		std::cout << "Written to MATLAB as " << filename << std::endl;
	}
}


// Test effects of training set size
std::vector<int> AI::batchTestTrainingSize(const PlayData& trainingData, int numFolds) {
	static const int numGames = defaultNumGames;
	const int foldSize = trainingData.getNumInstances() / numFolds;
	//const double base = baseOf( numFolds, trainingData.getNumInstances() );

	const int seedSeed = promptRandomSeed(); //Each set of tests uses the same levels
	srand(seedSeed); //Same seed results in same subset of training data

	Game* game = controller->getGame();
	std::vector<int> scoreVec;

	for( int i = 0; i < numFolds; i++ ){
		int dataSize = (i+1) * foldSize;
		//int dataSize = std::floor( std::pow( base, i+1 ) );
		PlayData subset = trainingData.getReducedToSizeRandomly(dataSize);

		reTrain(subset);

		int score = game->playTest( this, numGames, seedSeed );

		scoreVec.push_back(score);
		std::cout << "Avg score of " << getString() << " trained on " << 
			dataSize << " datapoints: " << score << std::endl << std::endl;
	}

	return scoreVec;
}

// Test effect of skipping actions
void AI::batchTestActionSkipping(int maxSkipRate) {
	static const int numGames = defaultNumGames;

	const int seedSeed = promptRandomSeed(); //Each set of tests uses the same levels

	Game* game = controller->getGame();
	std::vector<int> scoreVec;

	for( int i = 0; i < maxSkipRate; i++ ){
		skipActionRate = i;

		int score = game->playTest( this, numGames, seedSeed );

		scoreVec.push_back(score);
		std::cout << "Avg score of " << getString() << " skipping " << 
			i << " actions: " << score << std::endl;
	}

	if( getYesNoFromConsole("Save scores?") ){
		std::string filename = parser.enumToString( myType ) + "_skip_scores";
		Matlab::putVectorAsMxArray( scoreVec, filename );
		std::cout << "Written to MATLAB as " << filename << std::endl;
	}
}


/************************************************************************/
/* MENU                                                                     */
/************************************************************************/

//Things Default AI can do
MenuItem* AI::getNewMenuRoot() {
	return getCommonMenuItems();
}

//Common operations for non-default AIs
MenuNode* AI::getCommonMenuItems() {
	MenuNode* node = new MenuNode( "AI options" );
	node->addChild( new MenuLeafStringArg<AI>("Save model", "Enter filename", this, &AI::saveTo) );
	node->addChild( new MenuLeafStringArg<AI>("Load model", "Enter filename", this, &AI::loadFrom) );
	node->addChild( new MenuLeafStringArg<AI>("Retrain from saved data", "Enter data filename", this, &AI::reTrain) );
	node->addChild( new MenuLeafIntArg<AI>("Set action sampling rate (currently " + strCast(skipActionRate) + ")",
		"Enter skip rate", 0, 100, this, &AI::setActionSkip) );
	node->addChild( new MenuLeafIntArg<AI>("Set firing threshold (currently " + strCast(fireThreshold) + ")",
		"Enter threshold as int from 0 to 100", 0, 100, this, &AI::setFireThreshold) );
	node->addChild( new MenuLeaf<AI>("Toggle variance in actions (currently " + strCast(useVariance) + ")", 
		this, &AI::toggleUseVariance) ); 

	//Tests
	node->addChild( getCommonTestingMenuItems() );

	return node;
}

// Tests common to all AIs
MenuNode* AI::getCommonTestingMenuItems() {
	MenuNode* testNode = new MenuNode( getString() + " Tests" );

	testNode->addChild( new MenuLeafIntArg<AI>("Set default # games (currently " + strCast(defaultNumGames) + ")", 
		"Enter new default", 1, 1000, this, &AI::setDefaultNumGames) );
	testNode->addChild( new MenuLeafIntArg<AI>("Test AI", "Enter number of games for AI to play",
		1, 1000, this, &AI::testAI) );
	testNode->addChild( new MenuLeaf<AI>("Test AI incrementally", this, &AI::testIncrementally) );
	testNode->addChild( new MenuLeafIntArg<AI>("Test AI action skipping", "Enter max actions to skip",
		1, 30, this, &AI::batchTestActionSkipping) );

	return testNode;
}
