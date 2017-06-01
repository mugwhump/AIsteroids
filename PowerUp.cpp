#include "PowerUp.h"
#include "globals.h"
#include "GraphicsUtil.h"
#include "XYObj.h"
#include <GL/freeglut.h>
#include "MyError.h"
#include "boost/lexical_cast.hpp"

PowerUp::PowerUp(void)
{
	init();
}

PowerUp::PowerUp( float x, float y, float vx, float vy, float rot, float rad )
{
	init();
	GameObject::initialize(x, y, vx, vy, rot, rad);
}

PowerUp::PowerUp(const GameObject* obj )
{
	init();
	GameObject::initialize(obj->pos.x, obj->pos.y, obj->vel.vx, obj->vel.vy, obj->rot, obj->rad);
}

PowerUp::~PowerUp(void)
{
}

void PowerUp::init() {
	myType = PowerUp::None;
	myValue = 0;
	lifeTime = g_powerup_lifetime;
}

//////////////////////////////// UPDATING AND RENDERING //////////////////////////////////////////

void PowerUp::runFrom(const Position& p) {
	float dist = p.distanceTo(pos);
	float dirToThis = p.directionTo(pos);
	float currentSpeed = vel.getSpeed();

	if(dist < 150 && currentSpeed < g_ship_max_speed){
		vel.accelerateDirection(dirToThis, 5.0f/dist);
	}
}

void PowerUp::update() {
	GameObject::move(); 
	lifeTime--;
}

void PowerUp::render(){
	GameObject::render();
}

void PowerUp::drawAt(const Position& p) const {
	//std::cout << "DRAWINATING Goal" << std::endl;
	float myR, myG, myB;
	myR = myG = myB = 1.0f;

	std::string label;

	switch(myType){

	case PowerUp::INVINCIBILITY: //green
		myR = myB = 0.0f;
		label = "I";
		break;
	case PowerUp::SCORE: //red
		myG = myB = 0.0f;
		label = boost::lexical_cast<std::string>(myValue);
		break;
	case PowerUp::REVIVE: //white
		label = "R";
		break;
	default:
		throw MyError("Error, invalid powerup type #", static_cast<int>(myType), __LINE__);
	}

	glColor3f( myR, myG, myB );

	if ( lifeTime < 60 && (lifeTime % 4 < 2) ){
		glColor3f( 0.0f, 0.0f, 0.0f ); //Flash black when about to disappear
	}

	DrawCircle(p, rad, 8);

	glColor3f( 0.0f, 0.0f, 0.0f );
	float labelWidth = boost::lexical_cast<float>( getStringWidth(label) );
	DrawStringAt( pos.x - labelWidth/2, pos.y - 5, label );
}

/************************************************************************/
/* TYPE STUFF                                                                     */
/************************************************************************/

void PowerUp::setTypeAndValue(Type type, int value) {
	setType(type);
	setValue(value);
}

void PowerUp::setType(Type type) {
	myType = type;
}

PowerUp::Type PowerUp::getType() const {
	return myType;
}

void PowerUp::setValue(int value) {
	myValue = value;
}

int PowerUp::getValue() const {
	return myValue;
}
