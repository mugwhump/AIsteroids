#pragma once
#include "XYObj.h"
#include <iostream>
#include <string>
#include <sstream>

//object that can move around the screen and rotate
class GameObject
{
public:
//Methods
	GameObject(void);
	GameObject(Position* p, Velocity* v, float rot, float rad); //structs are both copied
	GameObject(float x, float y, float vx, float vy, float rot, float rad);

	virtual ~GameObject(void);

	void initialize( float x, float y, float vx, float vy, float rot, float rad ); //Make protected?
	void resetTo(const XYObj& obj); //set stats to those of given object
	void move(); //update position according to velocity

	virtual void render() const; // Virtual; if Asteroid is cast as GameObject, will still call Asteroid's version
	virtual void drawAt(const Position& pos) const;
	
	void loopObjectRadius(); // If touching edge, returns looped Position
	//bool onEdge(); // Whether it's touching edge and should be drawn twice
	bool collidesWith(const GameObject& other) const; // Whether this collides with other GameObject. Both radiuses used, no looping.
	bool collidesWithLooped( const GameObject& loopedObj) const; // Loops given object around edge if needed. Used for goal.

	//get string representation
	static std::string attributeString(); //"@attribute x real \n@attribute y real \n@attribute vx real \n@attribute vy real \n"
	virtual std::string dataString() const; //Format: "x, y, vx, vy" with no commas at beginning or end

//Variables
	Position pos;
	Position loopedPos; //if on edge of screen, this will show its looped position
	Velocity vel;
	float rot;
	float rad; // Radius

private:
};

