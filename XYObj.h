#pragma once
#include <string>

//Utilities

struct Position {
	Position( float _x = 0.0, float _y = 0.0) : x(_x), y(_y) {}
	//Position( const Position& other);
	//const Position& operator=(const Position& other);     // Copy assignment operator. NOT NEEDED, default shallow copy works.

	bool equals(const Position& other) const;
	std::string toString();

	float distanceTo(const Position& other) const;
	void makeRelativeTo(const Position& centerPos); // Makes this position relative to the given one if that's treated as center of screen
	Position getRelativeTo(const Position& centerPos) const; // Get position relative to given one treating that as center of screen
	void makeRelativeToRotated(const Position& centerPos, float xAngle); // Make this position relative to given one with given angle treated as x-axis
	Position getRelativeToRotated(const Position& centerPos, float xAngle) const;
	void moveDirection(float angle, float dist);
	Position getMovedInDirection(float angle, float dist) const;
	void loopPositionNoRadius(); // Loops position around level if necessary. Positions have no radius, so edge-checking goes in GameObject
	float directionTo( const Position& other) const; //direction from here to point
	float x;
	float y;
};

struct Velocity {
	Velocity( float _vx = 0.0, float _vy = 0.0) : vx(_vx), vy(_vy) {}
	//Velocity( const Velocity& other) : vx(other.vx), vy(other.vy) {}
	//const Velocity& operator=(const Velocity& other);     // Copy assignment operator, unneeded.

	bool equals(const Velocity& other) const;

	float getSpeed() const; // Returns speed
	float getAngle() const; // Return angle (radians)
	void accelerateDirection(float angle, float acc); // Accelerate in direction. acc must be positive.
	void setSpeed(float speed); // Change speed, keep angle
	void setVelocity( float angle, float speed);

	float vx;
	float vy;
};

struct XYObj
{
	XYObj(void);
	XYObj(const Position& p, const Velocity& v);
	//XYObj(const XYObj& other); //copy constructor
	//const XYObj& operator=(const XYObj& other);     // Copy assignment operator, unneeded
	~XYObj(void);

	bool equals(const XYObj& other) const; 
	void move(); //updates position with velocity

	Position pos;
	Velocity vel;
};

