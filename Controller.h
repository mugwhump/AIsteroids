#pragma once

#include "Menu.h"
#include "RGBA.h"
#include "StateAction.h"

#include <fstream>
#include <iostream>
#include <string>

class Action;
class AI;
class AI_Learner;
class Asteroid;
class CompleteState;
class Game;
class InputDirection;
class InputSource;
class KeyboardListener;
class LWPR_Object;
class Player;
class PlayData;
class PopUpText;
class PowerUp;
class Ship;
class SimpleState;

class Controller : public ClassWithMenuItems {

public:
	Controller(Game* _game, int playerNum);
	~Controller(void);
	void init();

	void setAllPointers(Ship* _ship, CompleteState* _levelState ); //make AI pointers point to these

	void setControl(bool manual) {manualControl = manual;}
	bool isManual() {return manualControl;}
	void setRecording(bool record);
	bool isRecording() {return recording;}

	void updateSelfAndShip();
	void renderSelfAndShip();

	void updateSimpleState();

	void setAINum(int num);
	AI* swapAI(AI* newAI);

	void humanInterrupt(); // Gameplay-relevant key was pressed by human
	void aiInterrupt();

	// Events
	void destroyedAsteroid(const Asteroid& asteroid);
	void gotShotBy(Ship& smoothCriminal);
	void hitByAsteroid(); // Ship killed. Apply punishments, restart.
	void gotPowerUp(const PowerUp& powerup); // Reached goal
	void changeScore(int scoreDiff); // Change score by given amount
	void respawn();
	void gameOver();


	// Getters, setters
	Game* getGame() const {return game;} //so AI can batch-test
	PlayData& getPlayData(); //so AI can batch-test. **May be NULL**
	bool isDead();
	bool canBeKilled();
	int getPlayerNum() {return playerNum;}
	void setPlayerNum(int pNum); //called a ship gets removed
	RGBA getColor() {return myColor;}
	int getScore() {return score;}
	std::string getScoreString();

	//Menu items
	void useDefaultAI();

	void useRBFN();
	void makeRBFN();
	void makeRBFN( const std::string& filename );

	void useLinearLearner(std::string learnerName); // Set AI to matlab learner
	void makeLinearLearner(); // From data, or start recording
	void makeLinearLearnerFromData( const std::string& filename ); // Make from saved data
	void makeLinearLearner( const std::string& filename ); // Load

	void useLWPR(); //start training
	void makeLWPR(); // From data
	void makeLWPRFromData( const std::string& filename ); // Make from saved data
	void makeLWPR( const std::string& filename ); // Load

	void makeGP(); // From data, or start recording
	void makeGPFromData( const std::string& filename ); // Make from saved data
	void makeGP( const std::string& filename ); // Load

	void makeNN( const std::string& filename ); // Load

	void setTaunt( const std::string& t );

	virtual MenuItem* getNewMenuRoot();


private:
// Methods
	Controller(void);	
	void setDefaultControls(); // Set Controls based on playerNum
	void setDefaultColor(); // Set ship Color based on playerNum

	void doCurrentInput();

	bool confirmAISwap(AI* newAI);

// Variables
	int playerNum; //which player this is
	int score;
	RGBA myColor;

	bool manualControl; //true if controlled by human
	bool recording; //true when recording input to train AI
	bool printedPlayerInfo; //only print player information once at start

	StateAction myStateAction; //Current SimpleState and Action
	PlayData* myData;

	Player* myPlayer;
	AI* myAI;
	Game* game; //The game
	Ship* ship; //ship being controlled
	CompleteState* levelState; //Level's constantly-updating state

	std::vector<PopUpText> myPopUps;
	std::string taunt;
};

