
#define _USE_MATH_DEFINES //for M_PI

#include "Asteroid.h"
#include "globals.h"
#include "GraphicsUtil.h"
#include "XYObj.h"
#include <iostream>
#include <math.h>
#include <GL/freeglut.h>


Asteroid::Asteroid(void)
{
}

Asteroid::Asteroid( float x, float y, float vx, float vy, float rot, float rad )
{
	GameObject::initialize(x, y, vx, vy, rot, rad);
}

Asteroid::Asteroid( GameObject* obj )
{
	GameObject::initialize(obj->pos.x, obj->pos.y, obj->vel.vx, obj->vel.vy, obj->rot, obj->rad);
}


Asteroid::~Asteroid(void)
{
}


void Asteroid::resetTo(const GameObject& obj) {
	GameObject::initialize(obj.pos.x, obj.pos.y, obj.vel.vx, obj.vel.vy, obj.rot, obj.rad);
}


////////////////////////////////// UPDATING AND RENDERING ////////////////////////////////////////

void Asteroid::update()
{
	//std::cout << "UPDATEING ASTEROID" << std::endl;
	GameObject::move(); 
}

void Asteroid::render() const {
	GameObject::render();
}

void Asteroid::drawAt(const Position& p) const {
	glColor3f( 0.85f, 0.65f, 0.13f ); //set vertex color to 218-165-32

	DrawCircle(p, rad, 8);
}
