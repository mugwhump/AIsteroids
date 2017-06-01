#include "CompleteState.h"
#include "SimpleState.h"
#include "XYObj.h"
#include "Laser.h"
#include "globals.h"
#include "PowerUp.h"
#include "Ship.h"
#include "Asteroid.h"
#include <algorithm> //for find
#include <exception>
#include <boost/foreach.hpp>
#include <sstream>


CompleteState::CompleteState(void) {
	init();
}

CompleteState::CompleteState(int diff) {
	init();
	difficulty = diff;
}

CompleteState::CompleteState(int diff, const std::vector<PowerUp>& powerups, const std::vector<Ship>& ships, const std::vector<Asteroid>& asteroids){
	init();
	difficulty = diff;
	savePowerUpsCopy(powerups);
	saveShipsCopy(ships);
	saveAsteroidsCopy(asteroids);
}

CompleteState::CompleteState(int diff, std::vector<PowerUp>* powerups, std::vector<Ship>* ships, std::vector<Asteroid>* asteroids) {
	init();
	difficulty = diff;
	myPowerUps = powerups;
	myShips = ships;
	myAsteroids = asteroids;
}

CompleteState::CompleteState(CompleteState& other) {
	difficulty = other.getDifficulty();
	myPowerUps = new std::vector<PowerUp>(*other.getPowerUpsPointer());
	myShips = new std::vector<Ship>(*other.getShipsPointer());
	myAsteroids = new std::vector<Asteroid>(*other.getAsteroidsPointer());
}


CompleteState& CompleteState::operator=(CompleteState otherCopy) {
	swap(*this, otherCopy);

	return *this;
}


CompleteState::~CompleteState(void)
{
	delete myShips;
	delete myAsteroids;
	delete myPowerUps;
}


void CompleteState::init() {
	difficulty = 0;
	myPowerUps = NULL;
	myShips = NULL;
	myAsteroids = NULL;
}

//friend function, not member of this class!
void swap(CompleteState& first, CompleteState& second) {
	// enable ADL (not necessary in our case, but good practice)
	using std::swap; 

	// by swapping the members of two classes, the two classes are effectively swapped
	swap(first.difficulty, second.difficulty);
	swap(first.myPowerUps, second.myPowerUps); 
	swap(first.myShips, second.myShips);
	swap(first.myAsteroids, second.myAsteroids);
}

/************************************************************************/
/* SAVING AND LOADING                                                                     */
/************************************************************************/

void CompleteState::savePowerUpsCopy(const std::vector<PowerUp>& powerups) {
	delete myPowerUps;
	myPowerUps = new std::vector<PowerUp>(powerups);
}
void CompleteState::loadPowerUpsCopy(std::vector<PowerUp>& powerups) const {
	powerups = *myPowerUps;
}
void CompleteState::setPowerUpsPointer(std::vector<PowerUp>* powerups) {
	delete myPowerUps; myPowerUps = powerups;
}


void CompleteState::saveShipsCopy(const std::vector<Ship>& ships) {
	delete myShips;
	myShips = new std::vector<Ship>(ships);
}
void CompleteState::loadShipsCopy(std::vector<Ship>& ships) const {
	ships = *myShips;
}

void CompleteState::saveAsteroidsCopy(const std::vector<Asteroid>& asteroids) {
	delete myAsteroids;
	myAsteroids = new std::vector<Asteroid>(asteroids);
}

void CompleteState::loadAsteroidsCopy(std::vector<Asteroid>& asteroids) const {
	asteroids = *myAsteroids;
}


/************************************************************************/
/* RANDOM GENERATION                                                                     */
/************************************************************************/


void CompleteState::randomAll(int numShips, int numAsteroids) {
	//create empty powerups vector;
	delete myPowerUps;
	myPowerUps = new std::vector<PowerUp>(0);
	//random ships and asteroids
	randomShips(numShips);
	randomAsteroids(numAsteroids);
}

//Spawn powerup of random type at random position with random velocity.
//If only 1 ship, doesn't spawn revives.
PowerUp CompleteState::randomPowerUp() {
	PowerUp result;

	result.GameObject::resetTo( randomXYObj(g_powerup_max_speed) );
	result.rad = g_powerup_radius;

	int maxType = PowerUp::NumTypes - 1;
	if( myShips->size() == 1 ) {
		maxType--; //if only one ship, don't spawn revives
	}
	int typeInt = randIntExcludingHigh(0, maxType);
	int valueInt = randIntExcludingHigh(30, 100);
	result.setTypeAndValue( static_cast<PowerUp::Type>(typeInt), valueInt );

	return result;
}


void CompleteState::randomShips(int numShips) {
	delete myShips;
	myShips = new std::vector<Ship>(numShips);

	//myShips->resize(numShips);

	BOOST_FOREACH(Ship& ship, *myShips){
		randomizeShip(ship);
	}
}

void CompleteState::randomizeShip(Ship& ship) {
	ship.GameObject::resetTo(randomXYObj(0.0f));
	ship.rot = randFloat(0.0f, M_PI*2.0f) ;
	ship.rad = g_ship_radius;
}


void CompleteState::randomAsteroids(int numAsteroids) {
	delete myAsteroids;
	myAsteroids = new std::vector<Asteroid>(numAsteroids);
	//myAsteroids->resize(numAsteroids);

	BOOST_FOREACH(Asteroid& ast, *myAsteroids){
		ast.GameObject::resetTo(randomXYObj(g_asteroid_max_speed + g_asteroid_max_speed_increase*difficulty));
		ast.rad = g_asteroid_radius;
	}
}

XYObj CompleteState::randomXYObj(float maxVelocity) {
	randFloat(0.0f, 100.0f); //warm up the randomnumber generator

	Position pos( randFloat(0.0f, g_width), randFloat(0.0f, g_height) );

	Velocity vel;
	if(maxVelocity > 0){
		vel.setVelocity( randFloat(0.0f, 2*M_PI), randFloat(0.0f, maxVelocity));
	}

	return XYObj(pos, vel); //return-by-value (copy constructor)
}

/************************************************************************/
/* STRING FUNCTIONS                                                                     */
/************************************************************************/

std::string CompleteState::attributeString(int numPowerUps, int numShips, int numAsteroids) {
	std::ostringstream attributes;
	attributes << "%%Complete state at a given step\n";

	attributes << "@attribute Difficulty numeric \n";

	attributes << "%%PowerUps \n";
	for(int i=0; i<numPowerUps; i++){
		attributes << PowerUp::attributeString();
	}

	//attributes << "Ships \n";
	for(int i=0; i<numShips; i++){
		attributes << Ship::attributeString();
	}

	attributes << "%%Asteroids \n";
	for(int i=0; i<numAsteroids; i++){
		attributes << Asteroid::attributeString();
	}

	return attributes.str();
}

std::string CompleteState::dataString() const {
	std::ostringstream data;

	data << difficulty << ", ";

	BOOST_FOREACH(const PowerUp& powerup, *myPowerUps){
		data << ", "  << powerup.dataString();
	}

	BOOST_FOREACH(const Ship& ship, *myShips){
		data << ", "  <<  ship.dataString();
	}

	BOOST_FOREACH(const Asteroid& asteroid, *myAsteroids){
		data << ", " << asteroid.dataString();
	}

	return data.str();
}

/************************************************************************/
/* STATE TRANSFORMATIONS                                                                     */
/************************************************************************/

SimpleState* CompleteState::getNewSimpleStateForShip(const Ship* ship) {
	SimpleState* state = new SimpleState();
	updateSimpleStateForShip(ship, *state);

	return state;
}

void CompleteState::updateSimpleStateForShip(const Ship* ship, SimpleState& stateToUpdate) {
	//check if the ship's not there
	//if( myShips->end() == find(myShips->begin(), myShips->end(), *ship) ){
	//	throw std::exception("Error in updateSimpleStateForShip: given ship is not a member of myShips!");
	//}

	stateToUpdate.resetTo(ship, myShips, myPowerUps, myAsteroids);
}
