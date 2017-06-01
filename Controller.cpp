#include "Controller.h"

#include "AI.h"
#include "AI_Learner.h"
#include "AI_LWPR.h"
#include "AI_RBFN.h"
#include "Asteroid.h"
#include "CompleteState.h"
#include "Defaults.h"
#include "Game.h"
#include "globals.h"
#include "GraphicsUtil.h"
#include "InputDirection.h" // remove?
#include "InputSource.h"
#include "KeyboardListener.h"
#include "Matlab.h"
#include "MyError.h"
#include "Player.h"
#include "PlayData.h"
#include "PopUpText.h"
#include "PowerUp.h"
#include "Ship.h"
#include "SimpleState.h"

#include <GL/freeglut.h>
#include <lwpr.hh> //what? Why?
#include "StringUtil.h"
#include "AI_GP.h"
#include "boost/foreach.hpp"
#include "AI_NN.h"

//private
Controller::Controller(void) {
	init();
}

Controller::Controller(Game* _game, int _playerNum) {
	game = _game;
	playerNum = _playerNum;
	init();
}


Controller::~Controller(void) {
	Defaults::playerQuits(playerNum);
	game->removeListener( (KeyboardListener*)myPlayer );

	delete myPlayer;
	delete myAI;
	delete myData;
}


void Controller::init() {
	score = 0;
	taunt = "";

	myPlayer = new Player(this);
	//myAI = new AI(this);
	myAI = new AI_RBFN(this, SimpleState::numAttributes, Action::numAttributes);
	ship = NULL;
	myData = new PlayData();

	printedPlayerInfo = false;
	manualControl = false;
	recording = true;
	myStateAction.getAction().clear();

	setDefaultColor();
	setDefaultControls();
}

/************************************************************************/
/* DEFAULTS                                                                     */
/************************************************************************/

//Called when a ship is removed
void Controller::setPlayerNum(int pNum) {
	throw MyError("Must implement swapping defaults before playerNum can be changed", __LINE__);
}


void Controller::setDefaultControls(){
	Defaults::giveDefaultControls(playerNum, *myPlayer);
	game->addListener( (KeyboardListener*)myPlayer );
}

//AFTER ship set, set color and print it
void Controller::setDefaultColor() {
	//if(ship == NULL) throw MyError("Ship not set yet!", __LINE__);

	myColor = Defaults::getDefaultColor(playerNum);

	if(!printedPlayerInfo){ //only print once
		std::cout << Defaults::getPlayerString(playerNum) << " is " 
			<< Defaults::getColorString(playerNum) << std::endl;
		printedPlayerInfo = true;
	}
}


// Connects to ship (and ship to this), sets all AI pointers
void Controller::setAllPointers(Ship* _ship, CompleteState* _levelState) {
	ship = _ship; 
	ship->setController(this);

	if(ship == NULL) throw std::exception("Error in Controller::setAIPointers, wrong order, set controller's ship before AI's stuff.");
	
	myAI->setShipTo(ship);
	levelState = _levelState;
	//update simplestate, otherwise may have problems if a render comes before update() is called
	updateSimpleState();

}

//Returns current AI, starts using given AI. Deletes nothing.
AI* Controller::swapAI(AI* newAI) {
	AI* oldAI = myAI;
	myAI = newAI;
	manualControl = false;
	setRecording(false);
	return oldAI;
}

/************************************************************************/
/* RENDER AND UPDATE                                                                     */
/************************************************************************/

// Renders AI and ship
void Controller::renderSelfAndShip() {
	if ( !isDead() ) {
		myAI->render();
		myStateAction.getMyState().render();
		ship->render();
	} 
	else {
		//TODO: draw explosion or something
	}

	//Draw popups
	BOOST_FOREACH( PopUpText& text, myPopUps ){
		text.render();
	}

	//Draw the score+AI if view is normal
	if ( !g_player_focus ) {
		float playerBoxX = 10 + playerNum * (g_width / g_ship_num_max);
		myColor.setDrawColorTo();
		DrawStringAt( playerBoxX, g_height - 40, getScoreString() );
		DrawStringAt( playerBoxX, g_height - 60, myAI->getString() );
		if (recording) {
			DrawStringAt( playerBoxX, g_height - 80, "Rec" );
		}
	}
}


// Updates Player, AI, and ship, if alive. Otherwise reduce respawn counter
void Controller::updateSelfAndShip() {
	if(ship == NULL) throw MyError( "Warning: ship is NULL in Controller::update()!", __LINE__);

	if ( !isDead() ) {
		updateSimpleState();

		myPlayer->update(!manualControl); //clears Player's action, it interrupts and asserts manual control if necessary
	
		if(manualControl){
			myStateAction.setAction( myPlayer->getAction() );
			//myAI->train( myStateAction ); //in case current AI is incremental
			myAI->updatePlayerAction(myStateAction); //calls training above, does inactive timeout
		}
		else{
			try {
				myStateAction.setAction( 
					myAI->getAction( 
						myStateAction.getMyState() ) );
			}
			catch (MyError& e) {
				std::cout << "-------Error caught in myAI::getAction() ----- \n" << e.what() << std::endl;
				std::cout << "Switching to Default AI" << std::endl;
				useDefaultAI();
			}
		}
		//FILTER FIRING VALUES AFTER UPDATING ACTION+STATE, BUT BEFORE DOING OR RECORDING ACTION
		myStateAction.filterFiring();

		doCurrentInput();
	
		ship->update();

		if( recording ){
			myData->pushData( myStateAction );
		}
	} 
	else {
		if( ship->decrementAndCheckRespawn() ){
			respawn();
		}
	}
	//Update any score popups
	auto it = myPopUps.begin();
	while( it != myPopUps.end() ){
		it->update();
		if( it->isExpired() ){
			it = myPopUps.erase(it);
			continue; //no increment
		}
		++it;
	}
}


void Controller::updateSimpleState() {
	levelState->updateSimpleStateForShip( ship, myStateAction.getMyState() );
}

/************************************************************************/
/* INPUT                                                                     */
/************************************************************************/

void Controller::humanInterrupt() {
	setControl(true);
}

void Controller::aiInterrupt() {
	setControl(false);
}


void Controller::doCurrentInput() {
	myStateAction.getAction().controlShip(*ship);
	//release AI Input
	if(!manualControl){
		myStateAction.getAction().clear();
	}
}

/************************************************************************/
/* EVENTS                                                                     */
/************************************************************************/

bool Controller::isDead() {
	return ship->isDead();
}

bool Controller::canBeKilled() {
	return !( isDead() || ship->isInvincible() );
}

void Controller::destroyedAsteroid(const Asteroid& asteroid) {
	// keep in mind asteroid is about to be deleted
	changeScore(20);
}

void Controller::gotShotBy(Ship& smoothCriminal) {
	Controller& other = *smoothCriminal.getController();
	changeScore(-10);
	other.changeScore(10);
	ship->gotShot();

	myPopUps.push_back( PopUpText( other.taunt, ship->pos.getMovedInDirection(M_PI*1.5f, 30.f),
		Velocity(0.f, -1.f), other.getColor() ) );
}

void Controller::hitByAsteroid() {
	myStateAction.getAction().clear();
	ship->hitByAsteroidStart();
}

void Controller::gotPowerUp(const PowerUp& powerup) {
	switch (powerup.getType()){
	case PowerUp::INVINCIBILITY:
		ship->gotInvincibilityPowerup();
		break;
	case PowerUp::REVIVE:
		changeScore(g_powerup_score - 20);
		break;
	case PowerUp::SCORE:
		changeScore(powerup.getValue());
		break;
	default:
		throw MyError("Error, invalid powerup type #", static_cast<int>(powerup.getType()), __LINE__);
	}
}

void Controller::changeScore(int scoreDiff) {
	score += scoreDiff;
	std::string sign = (scoreDiff >= 0) ? "+" : "";
	myPopUps.push_back( PopUpText( sign + strCast(scoreDiff), ship->pos.getMovedInDirection(M_PI_2, 30.f),
		Velocity(0.f, 1.f), myColor ) );
}

std::string Controller::getScoreString() {
	return std::string( Defaults::getPlayerString(playerNum) + ": " + boost::lexical_cast<std::string>(score) );
}

void Controller::respawn() {
	ship->respawn();
	changeScore(-50);
}

void Controller::gameOver() {
	score = 0;
}


/************************************************************************/
/* MENU OPTIONS                                                            */
/************************************************************************/


//Toggle whether data is being recorded
void Controller::setRecording(bool record) {
	// Create PlayData only when you start recording (uses lotsa memory)
	if( record && !recording){
// 		if( myData == NULL ){
// 			myData = new PlayData();
// 		}
// 		else{ // Delete old data, record anew
// 			if( getYesNoFromConsole("Delete old recorded data?") ){
// 				myData->clear();
// 			}
// 		}
		std::cout << Defaults::getPlayerString(playerNum) << " is now recording." << std::endl;
	}
	else if(recording){
		std::cout << Defaults::getPlayerString(playerNum) << " has stopped recording." << std::endl;
	}

	recording = record;
}

//Returns valid data. If no data currently, prompt user to load.
PlayData& Controller::getPlayData() {
	if( myData->isEmpty() ){
		std::string filename = getStringFromConsole( "Empty Play Data, enter name of recorded data");
		myData->readCSV(filename);
	}

	return *myData;
}


void Controller::useDefaultAI() {
	AI* defaultAI = new AI(this, SimpleState::getNumAttributes(), Action::getNumAttributes());
	confirmAISwap(defaultAI);
}

//----- RBFN
void Controller::useRBFN() {
	if ( myAI->getType() != AI::RBFN) {
		AI_RBFN* rbf = new AI_RBFN( this, SimpleState::getNumAttributes(), Action::getNumAttributes() );
		confirmAISwap(rbf);
	} 
	else {
		((AI_RBFN*)myAI)->printParams();
	}
}

void Controller::makeRBFN() {
	if( myData->isEmpty() ){
		std::cout << "Cannot make RBFN from data, must record data first." << std::endl;
		setRecording(true);
		return;
	}
	else{
		AI_RBFN* rbfn = new AI_RBFN( this, SimpleState::getNumAttributes(), Action::getNumAttributes(), *myData );
		confirmAISwap(rbfn);
	}
}

void Controller::makeRBFN( const std::string& filename ) {
	AI_RBFN* rbfn = new AI_RBFN( this, SimpleState::getNumAttributes(), Action::getNumAttributes(), filename );
	confirmAISwap(rbfn);
}


//------ Linear Learner

void Controller::useLinearLearner(std::string learnerName) {
	AI_Learner* newLearner = new AI_Learner(this, learnerName);

	confirmAISwap(newLearner);
}

void Controller::makeLinearLearner() {
	// No data, start recording
	if( myData->isEmpty() ){
		std::cout << "Now recording data for Linear Learner, press 'o' to create Linear Learner" << std::endl;
		setRecording(true);
		return;
	}
	// Have Data, create learner
	else {
		std::string dataStr = "DataM";
		std::string learnerName = Defaults::getPlayerString(playerNum) + "_Learner";
	
		try {
			AI_Learner* learner = new AI_Learner( this, learnerName, *myData );
			confirmAISwap(learner);
		}
		catch (MatlabError& e) {
			std::cout << "-------Matlab Error caught in Controller::makeLinearLearner----- \n" << e.what() << std::endl;
		}
	
		manualControl = false;
	}
}

void Controller::makeLinearLearnerFromData(const std::string& filename) {
	myData->readCSV( filename );
	makeLinearLearner();
}

//Load from file
void Controller::makeLinearLearner(const std::string& filename) {
	AI_Learner* learner = new AI_Learner( this, filename );
	confirmAISwap(learner);
	learner->loadFrom(filename);
}

//------ LWPRs

void Controller::useLWPR() {
	if ( myAI->getType() != AI::LWPR) {
		AI_LWPR* lwpr = new AI_LWPR( this, SimpleState::getNumAttributes(), Action::getNumAttributes() );
		confirmAISwap(lwpr);
	} 
	else {
		((AI_LWPR*)myAI)->printModelInfo();
	}
}


void Controller::makeLWPR() {
	if( myData->isEmpty() ){
		std::cout << "Cannot make LWPR from data, must record data first." << std::endl;
		setRecording(true);
		return;
	}
	else{
		AI_LWPR* lwpr = new AI_LWPR(  this, SimpleState::getNumAttributes(), Action::getNumAttributes(), *myData );
		confirmAISwap(lwpr);
	}
}

void Controller::makeLWPRFromData(const std::string& filename) {
	myData->readCSV( filename );
	makeLWPR();
}

void Controller::makeLWPR(const std::string& filename) {
	AI_LWPR* lwpr = new AI_LWPR(  this, SimpleState::getNumAttributes(), Action::getNumAttributes(), filename );
	confirmAISwap(lwpr);
}

//------ GPs

void Controller::makeGP() {
	if( myData->isEmpty() ){
		const int skipRate = 10;
		std::cout << "Now recording one of every " << skipRate << " frames, press g again to create GP." << std::endl;
		setRecording(true);
		myData->setSkipRate(skipRate);
		return;
	}

	else if ( myAI->getType() != AI::GP) {
		AI_GP* gp = new AI_GP( this, SimpleState::getNumAttributes(), Action::getNumAttributes(), *myData );
		confirmAISwap(gp);
	} 
	//Recompute existing GP. Feeds GP data it's already seen though.
	else{
		std::cout << "Updating GP with current data..." << std::endl;
		((AI_GP*)myAI)->train(*myData);
	}

}

void Controller::makeGPFromData(const std::string& filename) {
	myData->readCSV( filename );
	makeGP();
}

void Controller::makeGP(const std::string& filename) {
	AI_GP* gp = new AI_GP(  this, SimpleState::getNumAttributes(), Action::getNumAttributes(), filename );
	confirmAISwap(gp);
}

//-------NNs

void Controller::makeNN(const std::string& filename) {
	AI_NN* nn = new AI_NN(  this, SimpleState::getNumAttributes(), Action::getNumAttributes(), filename );
	confirmAISwap(nn);
}

//Prompt if user wants to destroy their old AI, stop recording
bool Controller::confirmAISwap(AI* newAI) {
	std::string AIName = newAI->getString();

	if ( (myAI != NULL) && (myAI->getType() != AI::DEFAULT) && (myAI != newAI) ) {
		std::cout << Defaults::getPlayerString(playerNum) << " is currently using AI: "
			<< myAI->getString() << std::endl;

		std::string prompt = "Delete and use " + AIName + " instead?";
		if( !getYesNoFromConsole(prompt) ){
			delete newAI;
			return false;
		}
	}
	delete myAI;
	myAI = newAI;
	manualControl = false;
	setRecording(false);
	std::cout << Defaults::getPlayerString(playerNum) << " now using " << AIName << std::endl;
	return true;
}


void Controller::setTaunt(const std::string& t) {
	taunt = t;
	std::cout << "Taunt set to " << taunt << std::endl;
}


MenuItem* Controller::getNewMenuRoot() {
	MenuNode* node = new MenuNode( Defaults::getPlayerString(playerNum) );

	// Use Default AI
	node->addChild( new MenuLeaf<Controller>("Use Default AI", this, &Controller::useDefaultAI) );


	// Make RBF
	MenuNode* rbfNode = new MenuNode( "Make RBFN" );
	rbfNode->addChild(new MenuLeaf<Controller>("Start training RBFN", this, &Controller::useRBFN) );
	rbfNode->addChild(new MenuLeaf<Controller>("RBFN from current recorded data", this, &Controller::makeRBFN) );

	rbfNode->addChild(new Leaf("RBFN from current recorded data with gradient descent", [this](){
		if( myData->isEmpty() ){
			std::cout << "Cannot make RBFN from data, must record data first." << std::endl;
			setRecording(true);
			return;
		}
		else{
			AI_RBFN* rbfn = new AI_RBFN( this, SimpleState::getNumAttributes(), Action::getNumAttributes() );
			confirmAISwap(rbfn);
			rbfn->gradientTrain(*myData);
		}
	}));

	rbfNode->addChild(new Leaf("RBFN from saved recorded data file", [this](){
		std::string filename = getStringFromConsole("Enter filename");
		myData->readCSV(filename);
		makeRBFN();
	}));

	rbfNode->addChild(new Leaf("Load RBFN", [&](){
		std::string filename = getStringFromConsole("Enter filename");
		makeRBFN(filename);
	}));
	node->addChild(rbfNode);


	// Make Linear Learner
	MenuNode* learnerNode = new MenuNode( "Make Linear Learner" );
	learnerNode->addChild( new MenuLeaf<Controller>("Linear Learner from current recorded data", this, &Controller::makeLinearLearner) );
	learnerNode->addChild( new MenuLeafStringArg<Controller>("Linear Learner from saved data file", "Enter filename", this, &Controller::makeLinearLearnerFromData) );
	learnerNode->addChild( new MenuLeafStringArg<Controller>("Load Linear Learner", "Enter filename", this, &Controller::makeLinearLearner) );
	node->addChild(learnerNode);

	// Make LWPR
	MenuNode* lwprNode = new MenuNode( "Make LWPR" );
	lwprNode->addChild( new MenuLeaf<Controller>("Start training LWPR", this, &Controller::useLWPR) );
	lwprNode->addChild( new MenuLeaf<Controller>("LWPR from current recorded data", this, &Controller::makeLWPR) );
	lwprNode->addChild( new MenuLeafStringArg<Controller>("LWPR from saved data file", "Enter filename", this, &Controller::makeLWPRFromData) );
	lwprNode->addChild( new MenuLeafStringArg<Controller>("Load LWPR", "Enter filename", this, &Controller::makeLWPR) );
	node->addChild(lwprNode);

	// Make GP
	MenuNode* gpNode = new MenuNode( "Make Gaussian Process" );
	gpNode->addChild( new MenuLeaf<Controller>("Gaussian Process from current recorded data", this, &Controller::makeGP) );
	gpNode->addChild( new MenuLeafStringArg<Controller>("Gaussian Process from saved data file", "Enter filename", this, &Controller::makeGPFromData) );
	gpNode->addChild( new MenuLeafStringArg<Controller>("Load Gaussian Process", "Enter filename", this, &Controller::makeGP) );
	node->addChild(gpNode);

	// Make NN
	MenuNode* nnNode = new MenuNode( "Make NN" );
	nnNode->addChild( new Leaf( "Start training NN", [this](){
		AI_NN* nn = new AI_NN(this, SimpleState::getNumAttributes(), Action::getNumAttributes() );
		confirmAISwap(nn);
	}));
	nnNode->addChild(new Leaf("NN from current recorded data", [this](){
		AI_NN* nn = new AI_NN(this, SimpleState::getNumAttributes(), Action::getNumAttributes(), *myData );
		confirmAISwap(nn);
	}));
	nnNode->addChild(new Leaf("NN from saved recorded data file", [this](){
// 		bool tune = getYesNoFromConsole("Tune parameters automatically?");
		std::string filename = getStringFromConsole("Enter filename");
		myData->readCSV(filename);
		AI_NN* nn = new AI_NN(this, SimpleState::getNumAttributes(), Action::getNumAttributes(), *myData );
		confirmAISwap(nn);
	}));
	nnNode->addChild( new MenuLeafStringArg<Controller>("Load Neural Network", "Enter filename", this, &Controller::makeNN) );
	node->addChild(nnNode);

	// Current AI options
	node->addChild( myAI->getNewMenuRoot() );

	// Data options
	if(myData != NULL) node->addChild( myData->getNewMenuRoot() );

	// Taunting options	
	node->addChild( new MenuLeafStringArg<Controller>("Set taunt message", "Enter taunt", this, &Controller::setTaunt) );

	return node;
}

