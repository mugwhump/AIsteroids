#pragma once
#include <vector>
#include <string>

struct XYObj;
class PowerUp;
class Ship;
class Asteroid;
class SimpleState;


//Represents complete state of game, from which game could be completely reconstructed and continue from there.
//Makes copies out the ass.
class CompleteState
{
public:
	CompleteState(void);
	explicit CompleteState(int diff);
	CompleteState(int diff, const std::vector<PowerUp>& powerups, const std::vector<Ship>& ships, const std::vector<Asteroid>& asteroids); //Copy given objects in
	CompleteState(int diff, std::vector<PowerUp>* powerups, std::vector<Ship>* ships, std::vector<Asteroid>* asteroids); //Set pointers, no copying. Careful with deletion!
	CompleteState(CompleteState& other); //Copy constructor
	CompleteState& operator=(CompleteState otherCopy); //Copy assign. DEEP COPY. NO WAIT SHALLOW COPY.
	~CompleteState(void);

	void init(); //sets pointers to NULL
	friend void swap(CompleteState& first, CompleteState& second);

	//Saving & Loading
	void setDifficulty(int diff) { difficulty = diff; }
	int getDifficulty() { return difficulty; }

	void savePowerUpsCopy(const std::vector<PowerUp>& powerups);
	void loadPowerUpsCopy(std::vector<PowerUp>& powerups) const;
	void setPowerUpsPointer(std::vector<PowerUp>* powerups);
	std::vector<PowerUp>* getPowerUpsPointer() {return myPowerUps;}

	void saveShipsCopy(const std::vector<Ship>& ships); //does local copy become const?
	void loadShipsCopy(std::vector<Ship>& ships) const;
	void setShipsPointer(std::vector<Ship>* ships) {delete myShips; myShips = ships;}
	std::vector<Ship>* getShipsPointer() {return myShips;}

	void saveAsteroidsCopy(const std::vector<Asteroid>& asteroids);
	void loadAsteroidsCopy(std::vector<Asteroid>& asteroids) const;
	void setAsteroidsPointer(std::vector<Asteroid>* asteroids) {delete myAsteroids; myAsteroids = asteroids;}
	std::vector<Asteroid>* getAsteroidsPointer() {return myAsteroids;}

	//Strings
	static std::string attributeString(int numPowerUps, int numShips, int numAsteroids);
	std::string dataString() const; //Convert state to one long string stream

	//Random Generation
	void randomAll(int numShips, int numAsteroids);
	PowerUp randomPowerUp(); //at start, create no powerups
	void randomShips(int numShips);
	void randomizeShip(Ship& ship);
	void randomAsteroids(int numAsteroids);

	//Simplifying
	SimpleState* getNewSimpleStateForShip(const Ship* ship); //get new simplified version of this state. Caller must delete.
	void updateSimpleStateForShip(const Ship* ship, SimpleState& stateToUpdate);

private:
	XYObj randomXYObj(float maxVelocity);

	int difficulty;
	//TODO: seed, score

	std::vector<PowerUp>* myPowerUps;

	std::vector<Ship>* myShips; //Make sure to set controller! Copies all its lasers.

	std::vector<Asteroid>* myAsteroids;
};