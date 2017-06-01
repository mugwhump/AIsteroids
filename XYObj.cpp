#include "XYObj.h"
#include "globals.h"
#include <sstream>


//Position::Position(const Position& other){
//	x = other.x;
//	y = other.y;
//} 
//
//const Position& Position::operator=(const Position &other) {
//	//std::swap(this->smile, other.smile);
//	x = other.x;
//	y = other.y;
//	return* this;
//}

//////////////////////////////// POSITION //////////////////////////////////////////

bool Position::equals(const Position& other) const {
	return ( x==other.x && y==other.y);
}

std::string Position::toString() {
	std::ostringstream result;
	result << "(" << x << ", " << y << ")";
	return result.str();
}

float Position::distanceTo(const Position& other) const {
	return sqrtf( pow((x - other.x), 2) + pow((y - other.y), 2) );
}


void Position::makeRelativeTo(const Position& centerPos) {
	x += g_width/2 - centerPos.x;
	y += g_height/2 - centerPos.y;

	loopPositionNoRadius();
}
Position Position::getRelativeTo(const Position& centerPos) const {
	Position result = Position(*this);
	result.makeRelativeTo(centerPos);

	return result;
}


void Position::makeRelativeToRotated(const Position& centerPos, float xAngle) {
	makeRelativeTo(centerPos);

	float angle = screenCenter.directionTo(*this);
	angle -= xAngle;
	float distance = screenCenter.distanceTo(*this);
	loopAngle(angle); // seems to do nothing, NO SHIT

	*this = screenCenter.getMovedInDirection(angle, distance);

	//loopPositionNoRadius();
	//STILL MESSED UP, according to this test:
	//TESTAN
	//Position origin(g_width*.75f, g_height*.25f);
	//float rot = M_PI * 1.75f;
	//float d = g_width*0.45f;
	//Position aboveLeft(origin.x+d, origin.y+d);
	//Position aboveRight(origin.x+d, origin.y-d);
	//Position bottomRight(origin.x-d, origin.y-d);
	//Position bottomLeft(origin.x-d, origin.y+d);

	//std::cout << "Above-left: " << aboveLeft.getRelativeToRotated(origin, rot).toString();
	//std::cout << " Above-right: " << aboveRight.getRelativeToRotated(origin, rot).toString();
	//std::cout << " Bottom-right: " << bottomRight.getRelativeToRotated(origin, rot).toString();
	//std::cout << " Bottom-left: " << bottomLeft.getRelativeToRotated(origin, rot).toString();

}
Position Position::getRelativeToRotated(const Position& centerPos, float xAngle) const {
	Position result = Position(*this);
	result.makeRelativeToRotated(centerPos, xAngle);
	return result;
}


void Position::moveDirection( float angle, float dist )
{
	x += cosf(angle) * dist; // CAH: cos(angle) = adjacent/hypoteneuse
	y += sinf(angle) * dist;
}
Position Position::getMovedInDirection(float angle, float dist) const {
	Position result(*this);
	result.moveDirection(angle, dist);
	return result;
}

void Position::loopPositionNoRadius()
{
	//Position newPos = Position(pos);
	if(x > g_width){
		x -= g_width;
	}
	else if(x < 0){
		x += g_width;
	}

	if(y > g_height){
		y -= g_height;
	}
	else if(y < 0){
		y += g_height;
	}
}

float Position::directionTo(const Position& other) const {
	float dx = other.x - x;
	float dy = other.y - y;

	float angle = atan2(dy, dx); //atan2's output ranges from -pi to pi
	if(angle < 0){
		angle += 2*M_PI; //adjust range to being 0 to 2pi
	}
	return angle;
}


////////////////////////////// VELOCITY ////////////////////////////////////////////


bool Velocity::equals(const Velocity& other) const {
	return (vx==other.vx && vy==other.vy);
}

//const Velocity& Velocity::operator=(const Velocity& other) {
//	vx = other.vx;
//	vy = other.vy;
//	return* this;
//}

float Velocity::getSpeed() const {
	return sqrtf( pow((vx),2) + pow((vy),2) );
}

float Velocity::getAngle() const {
	float angle = atan2(vy, vx); //atan2's output ranges from -pi to pi
	if(angle < 0){
		angle += 2*M_PI; //adjust range to being 0 to 2pi
	}
	return angle;
}

void Velocity::accelerateDirection( float angle, float acc )
{
	vx += cosf(angle) * acc; // CAH: cos(angle) = adjacent/hypoteneuse
	vy += sinf(angle) * acc;
}

void Velocity::setSpeed( float speed )
{
	float scalar = speed / getSpeed();
	vx *= scalar;
	vy *= scalar;
}

void Velocity::setVelocity( float angle, float speed )
{
	vx = vy = 0;
	accelerateDirection(angle, speed);
}

/************************************************************************/
/* XYObj                                                                */
/************************************************************************/

XYObj::XYObj(void)
{
}

XYObj::XYObj(const Position& p, const Velocity& v) : pos(p), vel(v)
{
}

//XYObj::XYObj(const XYObj& other) {
//	pos = other.pos; // Works since I overrode the = operator
//	vel = other.vel;
//}
//
//const XYObj& XYObj::operator=(const XYObj& other) {
//	pos = other.pos;
//	vel = other.vel;
//	return* this;
//}

XYObj::~XYObj(void)
{
}

bool XYObj::equals(const XYObj& other) const {
	return ( pos.equals(other.pos) && vel.equals(other.vel));
}

void XYObj::move() {
	pos.moveDirection(vel.getAngle(), vel.getSpeed());
}
