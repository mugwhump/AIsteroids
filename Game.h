#pragma once
#include "Menu.h"

//#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include <vector>

class AI;
class Level;
class Controller;
class CompleteState;
class KeyboardListener;

class Game : public ClassWithMenuItems
{
public:
	// Methods
	Game(void);
	virtual ~Game(void);

	void reset(); // Clear held keys, reset counter.

	void render(); // Render everything in game
	void update(); // Update game logic

	int playTest( AI* ai, int numGames, int seedSeed);
	std::vector<int> playTestMultipleAIs( std::vector<AI*> aiVec, int numGames, int seedSeed);
	int playSingleGame( AI* ai, int seed );

	void keyPressed(const char c); // Physical key pressed. For utilities only, usable in manual or AI control
	void keyReleased(const char c);
	void specialKeyPressed(int key); //Special key pressed
	void specialKeyReleased(int key); //Special key released
	void mousePressed(int x, int y); // Called when left mouse clicked
	void addListener(KeyboardListener* listener);
	void removeListener(KeyboardListener* listener);

	//Pressed keys, set by main
	std::bitset<256> keysHeld; //Array of actual keys pressed, indexed by ASCII char value
	std::bitset<246> specialKeysHeld; //Array of actual special keys pressed, indexed by glut constants like GLUT_KEY_LEFT

	int numShips();

private:
	void saveState(int stateNum); // Save current state of level in one of 10 slots
	void loadState(int stateNum); // Load state from one of 10 slots
	std::vector<CompleteState*> myStates; // 10 states, one corresponding to each number key

	//Writing/reading files
	void writeCompleteAttributes(); // Write attributes at top of .arff file
	void writeCompleteState(int stateNum); // Write state to text file.

	void fancySetup(); //load buncha ships
	void record();
	void createLinearLearner(); //create matlab linear learner from .arff with given name
	void useLWPR();
	void createGP();
	void setToExistingLearner();

	virtual MenuItem* getNewMenuRoot();
	void openMenu();

	int timePassed; // How many times update() has run.
	bool paused;

	Level* myLevel;
	std::vector<KeyboardListener*> listeners; //Everyone listening to a keyboard
};

