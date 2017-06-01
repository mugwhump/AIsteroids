#pragma once
#include "GameObject.h"
#include <vector>
#include <string>
#include <deque>

struct Position;
class Laser;
class Asteroid;
class Controller;

class Ship : public GameObject {

	friend class SimpleState;

public:
	Ship(void);
	explicit Ship( GameObject* obj);
	Ship(float x, float y, float vx, float vy, float rot, float rad); // Calls base initialize
	virtual ~Ship(void);

	void init(); // Create array and whatnot
	void reset();
	void resetTo(GameObject* obj); // Resets to match Obj, clears lasers.

	void update();
	virtual void render() const;
	virtual void drawAt(const Position& p) const;

	//Actions
	void continuousTurn(float val);
	void continuousAccelerate(float val);
	void fire();

	std::vector<Laser>& getLasers(); // Must receive as reference for no copy to be made!
	Controller* getController() {return controller;} // Return this ship's Controller
	void setController(Controller* cont) {controller = cont;} // Set this ship's controller
	void setColor(float R, float G, float B); // Range: 0-1

	//EVENTS, called by controller
	void destroyedAsteroid(const Asteroid& asteroid);
	void gotShot();
	void gotInvincibilityPowerup();
	void respawn();
	//Dying
 	void hitByAsteroidStart(); // Ship asplode, start animation or something
// 	void hitByAsteroidEnd(); // Ship done exploding

	// STATE
	bool isInvincible() const { return (invincibilityCounter>0); }
	bool canShoot() const;
	bool isDead() { return (respawnCounter>0); }
	bool decrementAndCheckRespawn();

	//String funcs
	static std::string attributeString(); // Gameobject attributes then "@attribute rotation real \n@attribute deathCounter numeric \n@attribute victoryCounter numeric \n@attribute invincibilityCounter numeric", then laser attributes
	virtual std::string dataString() const; //GameObject attributes and ", rot, deathCounter, victoryCounter, invincibilityCounter" then Lasers

private:
	void controlVelocity(); // Apply friction, limit max speed
	void smoothTurning();
	std::deque<double> lastTurns; // Smooths turning by remembering last few turning values and taking average
	static const int numTurns = 4;

	int invincibilityCounter; // How long invincible for
	int shootCounter; // How long until able to shoot again
	int respawnCounter; // Must be here, because CompleteState needs it.

	Controller* controller;
	std::vector<Laser> myLasers; // Vector destructor called automatically when ship deleted, destroys each laser.
};

