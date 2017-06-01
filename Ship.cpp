#include "Ship.h"
#include "Controller.h"
#include "Laser.h"
#include "globals.h"
#include "GraphicsUtil.h"
#include "RGBA.h"
#include <sstream>
#include <boost/foreach.hpp>
#include <GL/freeglut.h>


Ship::Ship(void)
{
	init();
}

Ship::Ship( GameObject* obj )
{
	init();
	GameObject::initialize(obj->pos.x, obj->pos.y, obj->vel.vx, obj->vel.vy, obj->rot, obj->rad);
}

Ship::Ship( float x, float y, float vx, float vy, float rot, float rad )
{
	init();
	GameObject::initialize(x, y, vx, vy, rot, rad);
}

// all automatic
Ship::~Ship(void)
{
}

void Ship::init()
{
	//myLasers = std::vector<Laser*>(); //Called automatically
	myLasers.reserve(g_lasers_num); //Just one vector already grown to max size

	reset();
}

void Ship::reset() {
	myLasers.clear();

	lastTurns.resize( numTurns, 0.0 );

	invincibilityCounter = g_ship_starting_invincibility;
	shootCounter = 0;
	respawnCounter = 0;
}

void Ship::resetTo(GameObject* obj) {
	GameObject::initialize(obj->pos.x, obj->pos.y, obj->vel.vx, obj->vel.vy, obj->rot, obj->rad);
	reset();
}

/************************************************************************/
/* UPDATES AND RENDERING                                                                     */
/************************************************************************/

bool Ship::canShoot() const {
	return ( shootCounter <= 0 );
}

// Returns true if it respawns
bool Ship::decrementAndCheckRespawn() {
	respawnCounter--;
	return ( !isDead() );
}

void Ship::update() {

	// decrement invincibility
	if(invincibilityCounter > 0){
		invincibilityCounter--;
	}

	// Decrement shoot Counter
	if(!canShoot()){
		shootCounter--;		
	}

	// Update Lasers
	std::vector<Laser>::iterator itLaser = myLasers.begin();
	while(itLaser != myLasers.end()){
		itLaser->update();
		if(itLaser->checkIfDeadAndDecrementTimer()){
			itLaser = myLasers.erase(itLaser); //erase returns iterator to next valid element
			continue; //Don't increment iterator, since something just got deleted from vector
		}
		++itLaser;
	}

	controlVelocity();
	GameObject::move(); 
}


void Ship::controlVelocity() {
	float speed = vel.getSpeed();
	float angle = vel.getAngle();

	//friction
	if (speed > g_ship_friction){
		//vel.accelerateDirection(angle + M_PI, g_ship_friction); //This doesn't work for some reason
		vel.setSpeed(speed - g_ship_friction);
	} 
	else{
		vel.vx = vel.vy = 0.0f;
	}

	//speed limit
	if (speed > g_ship_max_speed){
		vel.setSpeed(g_ship_max_speed);
	} 

	//keep rotation in bounds
	if(rot < 0.0f){
		rot += M_PI*2.0f;
	}
	if(rot > M_PI*2.0f){
		rot -= M_PI*2.0f;
	}
}


void Ship::render() const {
	GameObject::render();

	BOOST_FOREACH(const Laser& laser, myLasers){
		laser.render();
	}
}


void Ship::drawAt(const Position& p) const {
	RGBA currentColor(controller->getColor());

	// Flash White when invincible
	if(invincibilityCounter > 0){
		int flashRate = (invincibilityCounter > 60) ? 4 : 2; //Flash faster when invincibility wearing off
		if(invincibilityCounter % flashRate >= (flashRate/2)) {
			currentColor = RGBA(1.0f);
		}
	}

	// Make ship transparent when can't shoot
	if(!canShoot()){
		currentColor.A = .6f;
	}

	Position nose = Position(p);
	Position leftFin = Position(p);
	Position rightFin = Position(p);

	nose.moveDirection(rot, rad);
	leftFin.moveDirection(rot + (M_PI * .75f), rad);
	rightFin.moveDirection(rot + (M_PI * 1.25f), rad);

	glColor3f( 1.0f, 0.5f, 0.0f ); //set vertex color to orange for circles
	DrawCircle(leftFin, 3.0f, 8);
	DrawCircle(rightFin, 3.0f, 8);

	currentColor.setDrawColorTo();
	DrawTriangle(nose, leftFin, rightFin);
}

/************************************************************************/
/* ACTIONS                                                                     */
/************************************************************************/

void Ship::continuousTurn(float val) {
	//Limit max/min
	if (val > 1) 
		val = 1;
	else if (val < -1) 
		val = -1;

	lastTurns.push_front(val);
	lastTurns.pop_back();

	smoothTurning();
}

void Ship::smoothTurning() {
	double sum = 0.0;
	for( int i = 0; i < numTurns; i++ ){
		sum+= lastTurns[i];
	}
	sum /= numTurns;

	rot -= g_ship_turn_speed * sum; //adding turns left. Left values are negative.
}

void Ship::continuousAccelerate(float val) {
	//Limit max/min
	if (val > 1) 
		val = 1;
	else if (val < -1) 
		val = -1;

// 	std::cout << "  DUval = " << val << std::endl;

	if (val > 0)
		vel.accelerateDirection(rot, g_ship_acceleration * val);
	else
		vel.accelerateDirection(rot + M_PI, g_ship_decceleration * -val);
}

void Ship::fire()
{
	if (canShoot()) {
		shootCounter = g_laser_recharge;

		Velocity laserVel = Velocity();
		laserVel.setVelocity(rot, g_laser_speed);
		GameObject laserXY(&pos, &laserVel, rot, g_laser_radius); //pointers okay, constructor just copies values out of structs
		myLasers.push_back(Laser(&laserXY)); //copied into vector
	}
}

std::vector<Laser>& Ship::getLasers() {
	//return std::vector<Laser*>::iterator;
	return myLasers;
}


/************************************************************************/
/* EVENTS                                                                     */
/************************************************************************/


void Ship::destroyedAsteroid(const Asteroid& asteroid) {

	//controller->destroyedAsteroid(asteroid);
}

void Ship::gotShot() {

	//controller->gotShotBy(smoothCriminal);
}


void Ship::gotInvincibilityPowerup() {
	invincibilityCounter = g_ship_starting_invincibility * 2;
}

void Ship::respawn() {
	reset();
}

void Ship::hitByAsteroidStart() {
	respawnCounter = g_ship_respawn_time;
}
// 
// void Ship::hitByAsteroidEnd() {
// 	controller->hitByAsteroid();
// }


/************************************************************************/
/* STRING FUNCTIONS                                                                     */
/************************************************************************/
std::string Ship::attributeString() {
	std::string res("%%Ship \n" + GameObject::attributeString() + "@attribute rotation real \n@attribute respawnCounter numeric \n@attribute invincibilityCounter numeric\n");
	for(int i=0; i<g_lasers_num; i++){
		res += "%%lasers \n";
		res += Laser::attributeString();
	}

	return res;
}

std::string Ship::dataString() const {
	std::ostringstream attributes;
	attributes  << GameObject::dataString() <<  ", "  <<  rot  <<  ", "  <<  respawnCounter  <<  ", "  <<  invincibilityCounter;

	BOOST_FOREACH(const Laser& laser, myLasers){
		attributes << ", "  <<  laser.dataString();
	}

	return attributes.str();
}