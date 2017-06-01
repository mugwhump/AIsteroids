#include "Asteroid.h"
#include "globals.h"
#include "GraphicsUtil.h"
#include "MyError.h"
#include "PowerUp.h"
#include "Ship.h"
#include "SimpleState.h"
#include "XYObj.h"

#include "windows.h" // for DebugBreak()
#include <iostream>
#include <boost/foreach.hpp>
#include <exception>
#include <sstream>
#include <GL/freeglut.h>

using namespace eRDir;

/************************************************************************/
/* SLICE                                                                     */
/************************************************************************/

Slice::Slice(){

}

Slice::Slice(float lowerA, float upperA) {
	clearAsteroidData();
	lowerAngle = lowerA;
	upperAngle = upperA;
}

Slice::Slice(float ca, float w, float dist, float dir) : lowerAngle(ca-(w/2.0f)), upperAngle(ca+(w/2.0f)), targetDistance(dist), targetDirection(dir) {
	//std::cout << "Created Slice: angle=" << ca << ", width=" << w << ", direction=" << relativeDirectionToString(dir) << std::endl;
}


int Slice::angleComparison(float relativeAngle) const {
	// Check if too high
	if ( relativeAngle > upperAngle ){
		// Special check for front-facing slice
		if ( relativeAngle > (lowerAngle + 2*M_PI) ) {
			return 0;
		}
		return 1;
	}
	// Check if too low
	else if ( relativeAngle < lowerAngle ){
		return -1;
	}
	// Must contain angle
	return 0;
}

bool Slice::hasAsteroid() const {
	return targetDistance != SimpleState::DEFAULT_VALUE;
}


void Slice::setAsteroidIfNearest(const Asteroid& asteroid, const Position& relativePos, float dirToAst, float shipRot) {
	float dist = screenCenter.distanceTo(relativePos) - asteroid.rad;

	if( dist < targetDistance || (!hasAsteroid() && dist < g_slice_distance) ){
		targetDistance = dist;
		if(dist > g_slice_distance) throw std::exception("Error in Slice::setAsteroidIfNearest(): Distance too great.");

		//Direction
		Velocity aVel = asteroid.vel;
		targetDirection = loopAngle(aVel.getAngle() - shipRot);
	}
}

void Slice::clearAsteroidData() {
	targetDistance = SimpleState::DEFAULT_VALUE;
	targetDirection = SimpleState::DEFAULT_VALUE;
}

void Slice::drawAt(const Position& pos, float shipRot) const {
	if(!hasAsteroid()) return; //Don't draw if no asteroid

	//draw slice
	Position p2 = pos.getMovedInDirection( loopAngle(upperAngle + shipRot), targetDistance);
	Position p3 = pos.getMovedInDirection( loopAngle(lowerAngle + shipRot), targetDistance);

	glColor4f( 0.2f, 0.5f, 0.3f, 0.3f ); //set vertex color to something, partly transparent
	DrawTriangle(pos, p2, p3);

	//draw target direction
	Position L1 = pos.getMovedInDirection(centerAngle() + shipRot, targetDistance);
	Position L2 = L1.getMovedInDirection(targetDirection + shipRot, 20.0f);

	glColor4f(.98f, .85f, .86f, 0.7f); //pink
	DrawArrow(L1, L2);


// 	if(targetDirection != NONE){
// 		Position L1 = pos.getMovedInDirection(centerAngle + shipRot, targetDistance);
// 		float astDir = relativeDirectionToDirection(centerAngle, targetDirection) + shipRot;
// 		Position L2 = L1.getMovedInDirection(astDir, 20.0f);
// 
// 		glColor4f(.98f, .85f, .86f, 0.7f); //pink
// 		DrawArrow(L1, L2);
// 	}
}

std::string Slice::attributeString(std::string postfix) {
	std::ostringstream attributes;
	attributes << "@attribute targetDistance" << postfix << " real\n" << "@attribute targetDirection" << postfix << " real \n"; //parser.getAllStringsInBrackets() << "\n";
	return attributes.str();
}

std::string Slice::dataString() const {
	std::ostringstream data;
	data << targetDistance << ", " << targetDirection;
	return data.str();
}




/*****************************************************************************************/
/* ---------------------------------SimpleState ---------------------------------------- */
/*****************************************************************************************/


SimpleState::SimpleState(void) {
	init();
}

//use info for features
SimpleState::SimpleState(const Ship* _ship, const std::vector<Ship>* ships, const std::vector<PowerUp>* powerups, std::vector<Asteroid>* asteroids){
	init();
	resetTo(_ship, ships, powerups, asteroids);
}

//Create from vector
SimpleState::SimpleState(std::vector<double> inputs) {
	if( inputs.size() != getNumAttributes() ) {
		throw MyError("Error in SimpleState constructor, input vector has wrong number of arguments: ", inputs.size(), __LINE__ );
	}

	init();

	auto it = inputs.begin();
	invincibility = *(it++); //increment only happens afterwards
	shootCounter = *(it++);
	numAsteroids = *(it++);
	
	shipSpeed = *(it++);
	shipDirection = *(it++);
	
	powerupDistance = *(it++);
	powerupDirection = *(it++);
	
	centerDistance = *(it++);
	centerDirection = *(it++);

	allyDistance = *(it++);
	allyDirection = *(it++);


	for(int i = 0; i < g_slice_num; i++) {
		mySlices[i].targetDistance = *(it++);
		mySlices[i].targetDirection = *(it++);
	}
}


SimpleState::~SimpleState(void)
{
}

void SimpleState::init() {
	createSlices();
}


/************************************************************************/
/* RENDERING                                                                     */
/************************************************************************/
void SimpleState::render() {
	if( !g_player_focus ) return; //only draw when centered on player

	BOOST_FOREACH(Slice& slice, mySlices){
		slice.drawAt(ship->pos, ship->rot);
	}
	//draw arrow for ship velocity
	Position shipVPos = ship->pos.getMovedInDirection( loopAngle(shipDirection + ship->rot), shipSpeed*10 );	
	glColor4f( 1.0f, 1.0f, 1.0f, 0.7f );
	DrawArrow( ship->pos, shipVPos );

	//draw line to powerup
	Position p2 = ship->pos.getMovedInDirection( loopAngle(powerupDirection + ship->rot), powerupDistance);	
	glColor4f(.0f, 1.0f, .0f, 0.3f); //green line
	DrawLine(ship->pos, p2);

	//draw line to center
	Position centerPos = ship->pos.getMovedInDirection( loopAngle(centerDirection), centerDistance);	
	glColor4f(1.0f, .9f, .1f, 0.3f); //yellow
	DrawLine(ship->pos, centerPos);

	//draw line to ally
	Position allyPos = ship->pos.getMovedInDirection( loopAngle(allyDirection + ship->rot), allyDistance);	
	glColor4f(1.0f, 0.0f, 0.0f, 0.3f); //red line
	DrawLine(ship->pos, allyPos);
}

/************************************************************************/
/* FEATURES                                                                     */
/************************************************************************/

float SimpleState::DEFAULT_VALUE = -100.0f;
float SimpleState::NORMALIZED_DEFAULT_VALUE = 1.0f;

void SimpleState::resetTo(const Ship* _ship, const std::vector<Ship>* ships, const std::vector<PowerUp>* powerups, std::vector<Asteroid>* asteroids) {
	ship = _ship;

	invincibility = ship->invincibilityCounter;
	shootCounter = ship->shootCounter;
	numAsteroids = static_cast<int>( asteroids->size() );

	shipSpeed = ship->vel.getSpeed();
	shipDirection = loopAngle( ship->vel.getAngle() - ship->rot );

	centerDistance = ship->pos.distanceTo( screenCenter );
	centerDirection = loopAngle( ship->pos.directionTo(screenCenter) ); //Making this relative to ship loses the point

	putPowerUps( powerups );

	putAllies( ships );

	clearSlices();

	//ping asteroids
	BOOST_FOREACH(const Asteroid& asteroid, *asteroids){
		putAsteroid(asteroid);
	}
}


void SimpleState::putPowerUps( const std::vector<PowerUp>* powerups ) {
	powerupDistance = DEFAULT_VALUE;
	powerupDirection = DEFAULT_VALUE; 

	//use nearest powerup for distance+direction
	if(powerups->size() > 0) {
		float nearestDist = g_slice_distance;
		Position relativePos;

		BOOST_FOREACH( const PowerUp& powerup, *powerups ){
			relativePos = powerup.pos.getRelativeToRotated(ship->pos, ship->rot);
			float dist = screenCenter.distanceTo(relativePos);
			if( dist < nearestDist ){
				nearestDist = dist;
				powerupDistance = dist;
				powerupDirection = screenCenter.directionTo(relativePos);
			}
		}
	}
}


void SimpleState::putAllies(const std::vector<Ship>* allies) {
	allyDistance = DEFAULT_VALUE;
	allyDirection = DEFAULT_VALUE;

	//use nearest ship for distance+direction
	if( allies->size() > 0 ) {
		float nearestDist = g_slice_distance;
		Position relativePos;

		BOOST_FOREACH( const Ship& ally, *allies ){
			//Check that "ally" isn't actually our ship
			if( ship == &ally ) continue; 

			relativePos = ally.pos.getRelativeToRotated( ship->pos, ship->rot );
			float dist = screenCenter.distanceTo( relativePos );

			if( dist < nearestDist ){
				nearestDist = dist;
				allyDistance = dist;
				allyDirection = screenCenter.directionTo( relativePos );
			}
		}
	}
}


void SimpleState::putAsteroid(const Asteroid& ast) {
	Position relativePos = ast.pos.getRelativeToRotated(ship->pos, ship->rot);
	float relativeDirToAst = screenCenter.directionTo(relativePos);

	const float avgWidth = 2 * M_PI / g_slice_num;
	int sliceIndex = sliceOfAngle(relativeDirToAst);

	mySlices[sliceIndex].setAsteroidIfNearest(ast, relativePos, relativeDirToAst, ship->rot );
}


int SimpleState::sliceOfAngle(float angle) {
	int currentSlice = 0;
	int low = 0; //must be first guess because front slice loops over range
	int high = g_slice_num;
	int comparisonResult = mySlices[currentSlice].angleComparison(angle);

	// simple binary search. low==nearst one we know is too low. high==nearest one that's too high.
	while(comparisonResult != 0){
		if(high-low <= 2) { // not at high, not at low, not at current which is only one in between.
			std::cout << "Error in SimpleState::sliceOfAngle(): cannot find slice!" << std::endl;
			DebugBreak();
		}

		if(comparisonResult == 1){ //guess higher!
			low = currentSlice;
		}
		else{
			high = currentSlice; //guess lower!
		}

		currentSlice = (high + low) / 2; //guess in the middle
		comparisonResult = mySlices[currentSlice].angleComparison(angle);
	}

	return currentSlice;
}


void SimpleState::createSlices() {
	mySlices.resize(g_slice_num);

	if( (g_slice_num % 2) != 0) throw MyError("Error, number of slices must be even!", __LINE__);

	const float sixteenthPi = static_cast<float>(M_PI_4 / 4.0);
	const float frontSliceLower = -g_slice_widths[0] * static_cast<float>(M_PI_4 / 8.0);
	float lastUpperAngle = -frontSliceLower; //remember upper boundary of last slice
	float newUpperAngle;

	const int numMiddleSlices = (g_slice_num-2) / 2; //slices besides front+back, that need to be duplicated on both sides

	//create front slice
	mySlices[0] = Slice(frontSliceLower, lastUpperAngle); 
	int sliceIndex = 1;

	//create upper middle slices and back slice
	for(; sliceIndex <= numMiddleSlices+1; sliceIndex++){
		newUpperAngle = lastUpperAngle + g_slice_widths[sliceIndex]*sixteenthPi;
		mySlices[sliceIndex] = Slice(lastUpperAngle, newUpperAngle);
		lastUpperAngle = newUpperAngle;
	}

	//create middle slice on other side
	for( int i = numMiddleSlices; i > 0; i-- ){
		newUpperAngle = lastUpperAngle + g_slice_widths[i]*sixteenthPi;
		mySlices[sliceIndex] = Slice(lastUpperAngle, newUpperAngle);
		lastUpperAngle = newUpperAngle;
		sliceIndex++;
	}

	if( mySlices.size() != g_slice_num ){
		throw new MyError("Error in create slices, wrong number of slices!", __LINE__);
	}

}

void SimpleState::clearSlices() {
	BOOST_FOREACH(Slice& slice, mySlices){
		slice.clearAsteroidData();
	}
}


/************************************************************************/
/* STRING FUNCTIONS                                                                     */
/************************************************************************/
std::string SimpleState::attributeString(std::string postfix) {
	std::ostringstream attributes;

	attributes << "%%Simplified State at a single timestep.\n" 
		<< "@attribute invincibility" << postfix << "numeric \n" 
		<< "@attribute shootCounter" << postfix << "numeric \n"
		<< "@attribute numAsteroids" << postfix << "numeric \n"
		<< "@attribute shipSpeed" << postfix << " real \n" << "@attribute shipDirection" << postfix << " real \n"
		<< "@attribute powerupDistance" << postfix << " real \n" << "@attribute powerupDirection" << postfix << " real \n"
		<< "@attribute centerDistance" << postfix << " real \n" << "@attribute centerDirection" << postfix << " real \n"
		<< "@attribute allySpeed" << postfix << " real \n" << "@attribute allyDirection" << postfix << " real \n";

	attributes << "%%Slices \n";
	for(int i = 0; i < g_slice_num; i++) {
		std::ostringstream sliceNum; sliceNum << ":" << i; //format is "targetDistance:1"
		attributes << Slice::attributeString(sliceNum.str());
	}
	
	return attributes.str();
}

std::string SimpleState::dataString() const {
	std::ostringstream data;

	data << invincibility << ", "
		<< shootCounter << ", "
		<< numAsteroids << ", "
		<< shipSpeed << ", " << shipDirection << ", "
		<< powerupDistance << ", " << powerupDirection << ", "
		<< centerDistance << ", " << centerDirection << ", "
		<< allyDistance << ", " << allyDirection;

	for(int i = 0; i < g_slice_num; i++) {
		data << ", " << mySlices[i].dataString();
	}

	return data.str();
}

std::vector<double> SimpleState::getDoubleVec() const {
	//invincible, canshoot, ship speed/direction, goal distance/direction, slices
	std::vector<double> data;
	data.reserve(getNumAttributes());

	data.push_back(invincibility);
	data.push_back(shootCounter);
	data.push_back(numAsteroids);

	data.push_back(shipSpeed);
	data.push_back(shipDirection);

	data.push_back(powerupDistance);
	data.push_back(powerupDirection);

	data.push_back(centerDistance);
	data.push_back(centerDirection);

	data.push_back(allyDistance);
	data.push_back(allyDirection);

	for(int i = 0; i < g_slice_num; i++) {
		data.push_back( mySlices[i].targetDistance );
		data.push_back( mySlices[i].targetDirection );
	}

	if( data.size() != getNumAttributes() ){
		throw MyError("Error in getDoubleVec, wrong number of attributes: ", 
			static_cast<int>(data.size()), __LINE__);
	}

	return data;
}

std::vector<double> SimpleState::getNormalizedDoubleVec() const {
	std::vector<double> vec = getDoubleVec();
	std::vector<double> maxVec = getAttributeMaximums();

	for( int i = 0; i < getNumAttributes(); i++ ){
		if( vec[i] != DEFAULT_VALUE ){
			vec[i] = vec[i] / maxVec[i];
		}
		else{
			vec[i] = NORMALIZED_DEFAULT_VALUE;
		}
	}
	return vec;
}


//Returns max val for each attribute
std::vector<double> SimpleState::getAttributeMaximums() {
	std::vector<double> maxes;
	maxes.reserve(getNumAttributes());

	maxes.push_back(g_powerup_invincibility);
	maxes.push_back(g_laser_recharge);
	maxes.push_back(g_asteroids_num);

	maxes.push_back(g_ship_max_speed); //ship
	maxes.push_back(M_2_PI_D);
	maxes.push_back(g_slice_distance); //powerup
	maxes.push_back(M_2_PI_D);
	maxes.push_back(Position(0.f, 0.f).distanceTo(screenCenter)); //screencenter
	maxes.push_back(M_2_PI_D);
	maxes.push_back(g_slice_distance); //ally
	maxes.push_back(M_2_PI_D);

	for(int i = 0; i < g_slice_num; i++) {
		maxes.push_back( g_slice_distance );
		maxes.push_back( M_2_PI_D );
	}

	if( maxes.size() != getNumAttributes() ){
		throw MyError("Error in getAttributeMaximums, wrong number of attributes: ", 
			static_cast<int>(maxes.size()), __LINE__);
	}

	return maxes;
}


int SimpleState::getNumAttributes() {
	return numSingleAttributes + numDistDirAttributes;
}

//Attributes that stand on their own, not paired with other things
// int SimpleState::getNumSingleAttributes() {
// 	return 3;
// }
// 
// // Number of all attributes using distance, direction pairs (i.e. shipvelocity, powerup, allies, screencenter, slices)
// int SimpleState::getNumDistDirAttributes() {
// 	return getNumNormalDistDirAttributes() + getNumSliceAttributes();
// }
// 
// // Number of dist/dir pairs without slices
// int SimpleState::getNumNormalDistDirAttributes() {
// 	return 2*4;
// }
// 
// // Number of slice attribtues
// int SimpleState::getNumSliceAttributes() {
// 	return 2*g_slice_num;
// }

//Divide each element in first vector by element in second
std::vector<double> SimpleState::divideVectors(const std::vector<double>& numerators, const std::vector<double>& divisors) {
	if( numerators.size() != divisors.size() ) throw MyError("Error in divideVectors(), vectors must have same size!", __LINE__);

	std::vector<double> result( numerators.size(), 0.0 );
	for( int i = 0; i < numerators.size(); i++ ){
		result[i] = numerators[i] / divisors[i];
	}

	return result;
}
