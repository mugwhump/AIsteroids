#pragma once
#include <vector>
#include "CompleteState.h"
#include "PowerUp.h"

class Game;
class Controller;
class Asteroid;
class Ship;

class Level
{
public:
	Level(Game* game, int numShips); // Random setup
	Level(Game* game, int numShips, CompleteState* setup); // Generate starting conditions of level
	virtual ~Level(void);

	//STATE
	void init(int _numShips);
	CompleteState* randomSetup(int _difficulty); 
	void giveStateAndSetup(CompleteState* state);
	void giveSetup( CompleteState* state );

	void addShip(); 
	void removeShip( int playerNum ); 
	void makeControllersForShips(int numShips);
	void syncAllControllersAndShips();

	CompleteState* getSetup() const { return mySetup; } //Level deletes this when reinstantiated, so beware.
	CompleteState* getCopyOfCurrentState(); 
	CompleteState* getUpdatingState();

	int getDifficulty() { return difficulty;}

	void nextLevel(); 
	void newLevel(int diff);
	void differentLevel();
	void restartLevel();

	int playOneTestGame(); //continues updating until game over, then returns player 1's score.

	void render();
	void update();

//Setters/Getters	
	//friend void Game::getShip(); // Game::getShip() can touch level's privates, if the Game namespace was visible, which would need an include...
	std::vector<Controller*>& getControllers() {return myControllers;}
	std::vector<Ship>& getShips() {return myShips;}
	int getNumShips() {return numShips;}


private:
	bool isGameOver();
	bool isFinished();
	void gameOver();
	void finishedLevel();
	void reviveShips();

	void makeStars();
	void drawStars();
	std::vector<Position> myStars;

	int difficulty; //starts at 0, gets progressively harder.
	int numShips;
	bool runningTest; //whether currently running playOneTest. Set to false after game over.

	Game* const game; // Can't make this point to something else, but can change the Game itself
  //const Game* myGame  // Can point to something else, but can't change it (whatever you're pointing to)

	CompleteState* mySetup;
	CompleteState myCurrentState; //has pointers to level's members. These pointers NEVER change.

	//Ship* myShip;	// NAMING CONVENTION: 'my_____' means this has ownership, so member obj is destroyed when this is.
	std::vector<Controller*> myControllers;
	std::vector<Ship> myShips; 
	std::vector<PowerUp> myPowerUps;
	std::vector<Asteroid> myAsteroids; 
};

