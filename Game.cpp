#include "Game.h"

#include "AI.h"
#include "KeyboardListener.h"
#include "Ship.h" // passing ship from Level to Controller
#include "PowerUp.h"
#include "Asteroid.h"
#include "Level.h"
#include "Controller.h"
#include "CompleteState.h"
#include "SimpleState.h"
#include "globals.h"
#include "Matlab.h"
#include "StringUtil.h"

#include <sstream>
#include <boost/foreach.hpp>
#include <boost/lexical_cast.hpp>
#include <GL/freeglut.h>
#include <time.h>



Game::Game(void) {	
	//seed
	std::srand((unsigned int) time(NULL));

	myStates.resize(10, NULL); //fill with null pointers initially

	int numShips = 1;

	myLevel = new Level(this, numShips); //ships get created, level links to controllers

	reset();
	//writeStateEveryFrame = false;

	// Write attributes to text file
	//arffSimpleStateFile = "";
}


Game::~Game(void)
{
	delete myLevel;
	BOOST_REVERSE_FOREACH(CompleteState* state, myStates){
		delete state;
	}
//	myFile.close();
}

void Game::reset() {
	keysHeld.reset(); //clear all
	specialKeysHeld.reset();
	timePassed = 0;
	paused = false;
}

int Game::numShips() {
	return myLevel->getNumShips();
}


/************************************************************************/
/* RENDERING AND UPDATING                                                                     */
/************************************************************************/

void Game::render() {
	myLevel->render();
}


void Game::update() {
	if(paused) return;

	myLevel->update();

// 	if(writeStateEveryFrame){
// 		writeCurrentSimpleStateForPlayer(0);
// 	}
	timePassed++;
}

/************************************************************************/
/* INPUT                                                                     */
/************************************************************************/

//Called when physical key is pressed. For utilities only.
void Game::keyPressed(const char c) {
//	Can't do CTRL+ALT or CTRL+Number, and shift+number will give funny symbols.

	keysHeld[c] = true;

	BOOST_FOREACH(KeyboardListener* listener, listeners){
		listener->charPressed(c);
	}

	switch(c){
		//UTILITIES
	case 'n':
		myLevel->differentLevel();
		break;

	case 'm':
		openMenu();
		break;

	case 'p': //pausing
		paused = !paused;
		std::cout << "Difficulty = " << myLevel->getDifficulty() << std::endl;
		break;

	case 'c': //center view on player
		g_player_focus = !g_player_focus;
		break;

	case 'i': //toggle if state recorded
		record();
		break;

	case 'o': //create Linear Learner
		createLinearLearner();
// 		setWriteEveryFrame( false );
// 		if( arffSimpleStateFile != "" ){
// 			createLinearLearner("Learner");
// 			myLevel->getControllers().at(0)->setAITo("Learner");
// 		}
// 		else{
// 			std::cout << "Press I to record data before generating Learner" << std::endl;
// 		}
		break;

	case 'l': //set AI to existing Learner
		setToExistingLearner();
		break;

	case 'k': //set to LWPR
		useLWPR();
		break;

	case 'g': //create Gaussian Process
		createGP();
		break;

	case 'r': //reset to AI control
		BOOST_FOREACH(Controller* controller, myLevel->getControllers()){
			controller->setControl(false);
		}
		break;

	case '\r': //add ship
		myLevel->addShip();
		break;

	case '\b': //remove ship
		myLevel->removeShip( myLevel->getNumShips() - 1 );
		break;

	case 'y':
		fancySetup();
		break;
	}

	
	//state saving/writing/loading
	if (isdigit(c)) {
		int n = atoi( &c );
		//If holding ALT, write to file
		if(glutGetModifiers() & GLUT_ACTIVE_ALT){
			//writeCompleteState(n);
		}
		//If empty or holding tab, save
		else if ( myStates[n] == NULL || (keysHeld['	']) ) {
			saveState(n);
		} 
		//Otherwise, load.
		else {
			loadState(n);
		}
	}
}

void Game::keyReleased(const char c) {
	keysHeld[c] = false;

	BOOST_FOREACH(KeyboardListener* listener, listeners){
		listener->charReleased(c);
	}
}

void Game::specialKeyPressed(int key) {
	specialKeysHeld[key] = true;

	BOOST_FOREACH(KeyboardListener* listener, listeners){
		listener->specialPressed(key);
	}
}

void Game::specialKeyReleased(int key) {
	specialKeysHeld[key] = false;

	BOOST_FOREACH(KeyboardListener* listener, listeners){
		listener->specialReleased(key);
	}
}

void Game::mousePressed( int x, int y ) {
	// GUI stuff
}


void Game::addListener(KeyboardListener* listener) {
	listeners.push_back(listener);
}

void Game::removeListener(KeyboardListener* listener) {
	auto listIt = listeners.begin();
	while(listIt != listeners.end()){
		if( *listIt == listener ){
			listeners.erase(listIt);
			return;
		}
		++listIt;
	}
}

/************************************************************************/
/* MENU ITEMS                                                                     */
/************************************************************************/


void Game::writeCompleteAttributes() {
	std::ofstream myfile;
	myfile.open("states.txt"); //writes from beginning of file

	if(myfile.is_open()){
		myfile << CompleteState::attributeString( 2, myLevel->getNumShips(), 
			static_cast<int>(g_asteroids_num+g_asteroids_num_increase) );
		std::cout << "Wrote attributes to file." << std::endl;
	}
	else{
		std::cout << "Unable to open file." << std::endl;
	}

	myfile.close();
}

void Game::writeCompleteState(int stateNum) {
	std::ofstream myfile;
	myfile.open("states.txt", std::ofstream::app); //ALL WRITES DONE AT END OF FILE

	if(myfile.is_open()){
		if (myStates[stateNum] != NULL) {
			//std::string line = std::string(); //used to store current line
			//myfile.seekp(myfile.eof()); //unnecessary cuz of mode std::app

			myfile <<  myStates[stateNum]->dataString();
			//myfile.flush();
			std::cout << "Wrote state #" << stateNum << " to file." << std::endl;
		} 
		else {
			std::cout << "Error! Writing state from empty slot!" << std::endl;
		}
	}
	else{
		std::cout << "Unable to open file." << std::endl;
	}

	myfile.close();
}


//Creates file, opens it, and writes attributes
// void Game::writeSimpleAttributes() {
// 
// 	if(myFile.is_open()){
// 		myFile << "@relation state-action \n"
// 			<< SimpleState::attributeString("") //TODO: attribute postfix for multiplayer
// 			<< Action::attributeString()
// 			<< "\n\n\n@data \n";
// 
// 		std::cout << "Wrote attributes to file " << arffSimpleStateFile << std::endl;
// 	}
// 	else{
// 		std::cout << "Unable to open file." << std::endl;
// 	}
// }
// 
// void Game::writeCurrentSimpleStateForPlayer(int playerNum) {
// 
// 	Controller& controller = *( myLevel->getControllers().at( playerNum ) );
// 
// 	if(myFile.is_open()){
// 		myFile << controller.getCurrentSimpleStateCopy().dataString()  << ", "
// 			<< controller.getCurrentActionCopy().dataString() << "\n";
// 		
// 		std::cout << "Wrote simple state for player#" << playerNum << " to file." << std::endl;
// 	}
// 	else{
// 		std::cout << "Unable to open file." << std::endl;
// 	}
// }

//start/stop recording for whatever players
void Game::record() {
	int playerNum = 0;
	if( numShips() > 1 ){
		std::cout << "Enter number of player to toggle data recording for (between 0 and " << numShips()-1 << "): ";
		playerNum = getIntFromConsole( 0, numShips()-1 );
	}

	Controller& controller = * myLevel->getControllers().at(playerNum);
	controller.setRecording( !controller.isRecording() );
// 	writeStateEveryFrame = startWriting;
// 
// 	// Open file if beginning to write
// 	if( startWriting ){
// 		if (arffSimpleStateFile == "") {
// 			//Haven't written attributes or created file
// 			arffSimpleStateFile = "SimpleStates" + currentTimeAsString() +".arff";
// 			myFile.open(arffSimpleStateFile, std::ofstream::app);
// 			writeSimpleAttributes();
// 		}
// 		else {
// 			//File already exists
// 			myFile.open(arffSimpleStateFile, std::ofstream::app); //writes from end of file
// 		}
// 	}
// 	else { //close file
// 		myFile.close();
// 	}
}


// void Game::createDecisionTree() {
// 	std::string outputFileName;
// 	std::cout << "Please enter name of AI to save: ";
// 	std::getline(std::cin, outputFileName);
// 							//change classpath											
// 	std::string cmd = "java -cp C:/Users/Mizzo/Desktop/Darmstadt/Weka-3-6/weka.jar " //strings get combined
// 		"weka.classifiers.trees.RandomTree "
// 		"-t  \"C:/Users/Mizzo/Documents/Visual Studio 2010/Projects/Asteroids/Asteroids/bin/"
// 		+ arffSimpleStateFile + "\" -i  > " + outputFileName + ".txt";
// 
// 	if (system(NULL)) { //check that there's a command processor
// 		int returnValue = system(cmd.c_str());
// 		std::cout << "Ran classifier, return value = " << boost::lexical_cast<std::string>(returnValue) << std::endl;
//  		if(returnValue == 0){
// 			std::string writeFileCmd = "python \"C:/Program Files/eclipse/TreeToC/root/nested/ParseTree.py\" " + outputFileName;
// 			system(writeFileCmd.c_str());
// 			std::cout << "Wrote " + outputFileName + ".cpp to src folder" << std::endl;
//  		}
// 	} 
// 	else {
// 		std::cout << "No command processor found." << std::endl;
// 	}
// }


void Game::createLinearLearner() {
	int playerNum = 0;
	if( numShips() > 1 ){
		std::cout << "Enter number of player to create Learner for (between 0 and " << numShips()-1 << "): ";
		playerNum = getIntFromConsole( 0, numShips()-1 );
	}

	Controller& controller = * myLevel->getControllers().at(playerNum);
	controller.makeLinearLearner();
}

void Game::setToExistingLearner() {
	std::cout << "Enter name of MATLAB LinearLearner: ";
	std::string learnerName = getStringFromConsole();
	myLevel->getControllers().at(0)->useLinearLearner( learnerName );
}


void Game::useLWPR() {
	int playerNum = 0;
	if( numShips() > 1 ){
		std::cout << "Enter player to train an LWPR with (between 0 and " << numShips()-1 << "): ";
		playerNum = getIntFromConsole( 0, numShips()-1 );
	}

	Controller& controller = * myLevel->getControllers().at(playerNum);
	controller.useLWPR();
}


void Game::createGP() {
	int playerNum = 0;
	if( numShips() > 1 ){
		std::cout << "Enter number of player to create Gaussian Process for (between 0 and " << numShips()-1 << "): ";
		playerNum = getIntFromConsole( 0, numShips()-1 );
	}

	Controller& controller = * myLevel->getControllers().at(playerNum);
	controller.makeGP();
}


MenuItem* Game::getNewMenuRoot() {
	MenuNode* node = new MenuNode( "Main:" );

	BOOST_FOREACH( Controller* controller, myLevel->getControllers() ){
		node->addChild( controller->getNewMenuRoot() );
	}

	return node;
}


void Game::openMenu() {
	paused = true;
	MenuItem* menu;

	try {
		menu = getNewMenuRoot();
		menu->visit();
	}
	catch (std::exception& e) {
		std::cout << "-------Error caught in openMenu() ----- \n" << e.what() << std::endl;
	}
	delete menu;
	paused = false;
}


/************************************************************************/
/* STATES                                                                     */
/************************************************************************/

void Game::saveState(int stateNum) {
	if(myStates[stateNum] != NULL){
		std::cout << "Overwriting existing state... ";
		delete myStates[stateNum];
	}

	myStates[stateNum] = myLevel->getCopyOfCurrentState();

	std::cout << "Saved state to slot #" << stateNum << std::endl;
}

void Game::loadState(int stateNum) {
	if(myStates[stateNum] == NULL){
		std::cout << "Error! Loading state from empty slot!" << std::endl;
		return;
	}

	myLevel->giveStateAndSetup( new CompleteState(*myStates[stateNum]) ); //give it a COPY

	std::cout << "Loaded state from slot #" << stateNum << std::endl;
}

/************************************************************************/
/* TESTS                                                                     */
/************************************************************************/

int Game::playTest(AI* ai, int numGames, int seedSeed) {
	std::cout << "Testing " << ai->getString() << " over " << numGames << " games." << std::endl;

	// Use seed to make list of seeds
	srand(seedSeed);
	std::vector<int> randomSeeds;
	randomSeeds.reserve(numGames);
	for( int i = 0; i < numGames; i++ ){
		randomSeeds.push_back( rand() );
	}

	//Save current state and AI, put back to normal after
	CompleteState* originalState = myLevel->getCopyOfCurrentState();
	Controller& controller = *(myLevel->getControllers().at(0));
	AI* originalAI = controller.swapAI(ai);
	bool wasUsingThresholdAdaptation = originalAI->isUsingThresholdAdaptation();
	ai->setUseThresholdAdaptation( false ); //want everything to stay constant during tests

	//Play given number of games
	std::vector<int> scoreVec;
	scoreVec.reserve(numGames);
	for( int i = 0; i < numGames; i++ ){
		int score = playSingleGame( ai, randomSeeds[i] );
		scoreVec.push_back( score );
		std::cout << score << ", ";
	}

	//Sum score
	int scoreSum = 0;
	BOOST_FOREACH(int score, scoreVec){
		scoreSum += score;
	}
	int avgScore = scoreSum / numGames;

	std::cout << std::endl << ai->getString() << " scored an average of " <<
		avgScore << " points per game " << std::endl;

	//Restore originals
	myLevel->giveStateAndSetup(originalState);
	controller.swapAI(originalAI);
	originalAI->setUseThresholdAdaptation( wasUsingThresholdAdaptation );

	return avgScore;
}

//Run playtest on multiple AIs, return average score of each
std::vector<int> Game::playTestMultipleAIs(std::vector<AI*> aiVec, int numGames, int seedSeed) {
	std::vector<int> meanScores;
	meanScores.reserve( aiVec.size() );

	BOOST_FOREACH( AI* ai, aiVec ){
		meanScores.push_back( playTest( ai, numGames, seedSeed ) );
	}

	return meanScores;
}


// Get score for AI in single game with randomness controlled by seed
int Game::playSingleGame(AI* ai, int seed) {
	srand(seed);

	//reset action skipping counter to 0 to remove any randomness
	ai->resetSkippedActionCounter();

	myLevel->newLevel( randIntExcludingHigh(0, 3 ) ); // Difficulty = 0, 1, or 2
	
	//Run test
	int result = myLevel->playOneTestGame();

	return result;
}

void Game::fancySetup() {
	//reference on right side! Don't forget copy-assign!
	auto& controllers = myLevel->getControllers();

	//four players!
	// while(controllers.size() < 3){
	myLevel->addShip();
	myLevel->addShip();
	myLevel->addShip();
	// }

	controllers[0]->makeRBFN("_RBFN");
	controllers[0]->setTaunt("FME ROX");

// 	controllers[1]->makeRBFN("_RBFN_Descent");
// 	controllers[1]->setTaunt("RBFN da best");

	controllers[1]->makeNN("_NN");
	controllers[1]->setTaunt("My dad can beat up your dad");

	controllers[2]->makeLWPR("_LWPR");
	controllers[2]->setTaunt("LWPR wuz here");

	controllers[3]->makeGP("10minGPhyper");
	controllers[3]->setTaunt("WIZARD MAGIC");
}
