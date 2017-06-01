#pragma once
#include "RelativeDirection.h"
#include <vector>
#include <string>

struct Position;
class PowerUp;
class Ship;
class Asteroid;

struct Slice{

	Slice();
	Slice(float lowerA, float upperA);
	Slice(float ca, float w, float dist, float dir);

	int angleComparison(float relativeAngle) const; //returns 0 if contains angle, 1 if angle's higher, -1 if lower.
	void setAsteroidIfNearest(const Asteroid& asteroid, const Position& relativePos, float dirToAst, float shipRot); //if given asteroid closer, set it.
	void clearAsteroidData(); //reset distance, direction

	void drawAt(const Position& pos, float shipRot) const;

	//float upperAngle() const {return centerAngle + (width/2.0f);} 
	float centerAngle() const { return (lowerAngle + upperAngle)/2.0f; } 
	//float lowerAngle() const {return centerAngle - (width/2.0f);} //front slice can be -ve
	bool hasAsteroid() const;

	//String funcs
	static std::string attributeString(std::string postfix); 
	std::string dataString() const;

	//TODO: maybe just use static lookup table for angles?
	float lowerAngle; //radians. Front-facing slice has -ve lower angle
	float upperAngle; //radians

	//FEATURES
	float targetDistance;
	//eRDir::RelativeDirection targetDirection; //if moving above certain speed, get discretized direction
	float targetDirection; // 0.0 == away from ship; PI = towards ship
};

//Compressed representation of state
class SimpleState
{
public:
	SimpleState(void);
	SimpleState(const Ship* _ship, const std::vector<Ship>* ships, const std::vector<PowerUp>* powerups, std::vector<Asteroid>* asteroids);
	explicit SimpleState( std::vector<double> inputs );
	~SimpleState(void);
	void init();

	void render(); // draw the state

	//Setting features
	void resetTo(const Ship* _ship, const std::vector<Ship>* ships, const std::vector<PowerUp>* powerups, std::vector<Asteroid>* asteroids);


	//String funcs
	static std::string attributeString(std::string postfix); 
	std::string dataString() const;

	static int getNumAttributes();
// 	static int getNumSingleAttributes();
// 	static int getNumDistDirAttributes();
// 	static int getNumNormalDistDirAttributes();
// 	static int getNumSliceAttributes();

	static const int numSlices = 8; //TODO: remove from globals
	static const int numSliceAttributes = numSlices * 2;
	static const int numNormalDistDirAttributes = 8;
	static const int numDistDirAttributes = numNormalDistDirAttributes + numSliceAttributes;
	static const int numSingleAttributes = 3;
	static const int numAttributes = numSingleAttributes + numDistDirAttributes;

	std::vector<double> getDoubleVec() const; //Get data as vector
	std::vector<double> getNormalizedDoubleVec() const; //Get normalized data in range 0 to 1
	static std::vector<double> getAttributeMaximums(); //Get typical [min, max] of each input

	static std::vector<double> divideVectors( const std::vector<double>& numerators, const std::vector<double>& divisors ); 

	//Features
	int invincibility;
	int shootCounter;
	int numAsteroids;

	float shipSpeed;
	float shipDirection; // Direction ship is moving RELATIVE TO ITS ROTATION

	float powerupDistance;
	float powerupDirection;

	float centerDistance;
	float centerDirection;

	float allyDistance;
	float allyDirection;

	std::vector<Slice> mySlices; // 8 * 2

	static float DEFAULT_VALUE; // Value given to attributes for asteroids, ships, or powerups that aren't there.
	static float NORMALIZED_DEFAULT_VALUE;

private:
	void putPowerUps( const std::vector<PowerUp>* powerups );
	void putAllies( const std::vector<Ship>* allies);
	void putAsteroid(const Asteroid& ast); //give state relative position of asteroid, it parses it

	int sliceOfAngle( float angle); // get int for what slice contains given angle
	void createSlices(); // make the slice vector
	void clearSlices(); // reset slice vector


	//Not actually features, but useful info
	const Ship* ship;
};

