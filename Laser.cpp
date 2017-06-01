#include "Laser.h"
#include "XYObj.h"
#include "globals.h"
#include "GraphicsUtil.h"
#include <sstream>
#include <GL/freeglut.h>


Laser::Laser(void)
{
	init();
}

Laser::Laser( GameObject* obj )
{
	init();
	GameObject::initialize(obj->pos.x, obj->pos.y, obj->vel.vx, obj->vel.vy, obj->rot, obj->rad);
}

Laser::Laser( float x, float y, float vx, float vy, float rot, float rad )
{
	init();
	GameObject::initialize(x, y, vx, vy, rot, rad);
}

void Laser::init()
{
	lifetime = g_laser_lifetime;
}


Laser::~Laser(void)
{
}

void Laser::update()
{
	GameObject::move();
}

void Laser::drawAt(const Position& p) const {
	glColor3f( 1.0f, 0.0f, 0.0f ); // Red lasers
	DrawCircle(pos, rad, 4);
}

bool Laser::checkIfDeadAndDecrementTimer()
{
	lifetime--;

	return(lifetime <= 0);
}


std::string Laser::attributeString() {
	return GameObject::attributeString() + "@attribute lifetime numeric\n";
}

std::string Laser::dataString() const {
	std::ostringstream attributes;
	attributes  << GameObject::dataString() <<  ", "  << lifetime;

	return attributes.str();
}