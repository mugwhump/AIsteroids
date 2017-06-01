#include <GameObject.h>
#include "globals.h"
using namespace std;


GameObject::GameObject(void)
{
}

GameObject::GameObject( Position* p, Velocity* v, float rot, float rad )
{
	initialize( p->x, p->y, v->vx, v->vy, rot, rad );
}

GameObject::GameObject( float x, float y, float vx, float vy, float rot, float rad )
{
	initialize( x, y, vx, vy, rot, rad );
}

//Copy Constructor
//GameObject::GameObject( const GameObject& other){
//	initialize(other.pos.x, other.pos.y, other.vel.vx, other.vel.vy, other.rot, other.rad);
//}

GameObject::~GameObject(void)
{
}

void GameObject::initialize( float x, float y, float vx, float vy, float rot, float rad ){
	pos.x = x;
	pos.y = y;
	loopedPos.x = x;
	loopedPos.y = y;
	vel.vx = vx;
	vel.vy = vy;
	this->rot = rot;
	this->rad = rad;
}

void GameObject::resetTo(const XYObj& obj) {
	pos = obj.pos;
	vel = obj.vel;
}

/////////////////////////////////// RENDER AND MOVE ///////////////////////////////////////

void GameObject::render() const {
	drawAt(pos);
	//std::cout << "MIGHT LOOP OBJ" << std::endl;

	//if view centered on player, need to triple(!) draw over 2 furthest edges and corner
	if( g_player_focus ){
		Position cornerPos( pos ); //this position looped over the opposite corner
		cornerPos.x += (pos.x < screenCenter.x) ? g_width : -g_width;
		cornerPos.y += (pos.y < screenCenter.y) ? g_height : -g_height;

		drawAt( Position(cornerPos.x, pos.y) ); // draw looped over side edge
		drawAt( Position(cornerPos.x, cornerPos.y) ); //draw looped over opposite corner
		drawAt( Position(pos.x, cornerPos.y) ); //draw again on left
	}
	else if( !pos.equals(loopedPos) ){
		drawAt(loopedPos);
		//std::cout << "LOOPINATED OBJ" << std::endl;
	}
}

void GameObject::drawAt(const Position& pos) const {

}

/*update position according to velocity*/
void GameObject::move()
{
	// Update normal pos
	pos.x += vel.vx;
	pos.y += vel.vy;
	pos.loopPositionNoRadius();
	// Update loopedPos
	loopedPos.x = pos.x;
	loopedPos.y = pos.y;
	loopObjectRadius(); 
}

//////////////////////////////////// LOOPING, COLLISIONS //////////////////////////////////////

void GameObject::loopObjectRadius() {
	if(loopedPos.x + rad > g_width){
		loopedPos.x -= g_width;
	}
	else if(loopedPos.x - rad < 0){
		loopedPos.x += g_width;
	}

	if(loopedPos.y + rad > g_height){
		loopedPos.y -= g_height;
	}
	else if(loopedPos.y - rad < 0){
		loopedPos.y += g_height;
	}
}

//bool GameObject::onEdge()
//{
//	return ( pos.x + rad > g_width ||
//		pos.x - rad < 0 ||
//		pos.y + rad > g_height ||
//		pos.y - rad < 0);
//}

bool GameObject::collidesWith(const GameObject& other) const {
	return ( pos.distanceTo(other.pos) < rad + other.rad);
}

bool GameObject::collidesWithLooped(const GameObject& loopedObj) const {
	if (!collidesWith(loopedObj)){
		return ( pos.distanceTo(loopedObj.loopedPos) < rad + loopedObj.rad);
	} 
	return true;
}

std::string GameObject::dataString() const {
	std::ostringstream attributes;
	attributes << pos.x << ", " << pos.y << ", " << vel.vx << ", " << vel.vy;
	return attributes.str();
}

std::string GameObject::attributeString() {
	return "@attribute x real \n@attribute y real \n@attribute vx real \n@attribute vy real \n";
}
