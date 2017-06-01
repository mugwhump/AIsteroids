#include "Action.h"
#include "MyError.h"
#include "globals.h"
#include "Ship.h"
#include <sstream>
#include <boost/foreach.hpp>
#include <boost/lexical_cast.hpp>



float Action::leftRightThreshold = .2f;
float Action::upThreshold = .1f;
float Action::downThreshold = -.4f;

Action::Action(void) {
	init();

	isContinuous = false;
}


Action::Action(int leftRight, int downUp, int shooting) {
	init();

	isContinuous = false;

	leftRightVal = static_cast<float>(leftRight);
	downUpVal = static_cast<float>(downUp);
	fireVal = static_cast<float>(shooting);

// 	if( leftRight == -1)		pressKey(eInput::LEFT);
// 	else if( leftRight == 1)	pressKey(eInput::RIGHT);
// 	else if(leftRight != 0)		throw MyError("Error in Action::actionFromValues, invalid leftRight value ", leftRight, __LINE__);
// 
// 	if( downUp == -1)			pressKey(eInput::DOWN);
// 	else if( downUp == 1)		pressKey(eInput::UP);
// 	else if(downUp != 0)		throw MyError("Error in Action::actionFromValues, invalid downUp value ", downUp, __LINE__);
// 
// 	if( shooting == 1)			pressKey(eInput::FIRE);
// 	else if(shooting != 0)		throw MyError("Error in Action::actionFromValues, invalid shooting value ", shooting, __LINE__);
}

Action::Action(float leftRight, float downUp, float shooting) {
	init();

	isContinuous = true;

	leftRightVal = leftRight;
	downUpVal = downUp;
	fireVal = shooting;
}

Action::Action( std::vector<double> inputs ) {
	if( inputs.size() != getNumAttributes() ) throw MyError("Error in Action constructor, input vector with incorrect size", static_cast<int>(inputs.size()), __LINE__ );

	leftRightVal = static_cast<float>(inputs[0]);
	downUpVal = static_cast<float>(inputs[1]);
	fireVal = static_cast<float>(inputs[2]);
}


Action::~Action(void)
{
}

void Action::init() {
	clear();
}


void Action::controlShip(Ship& ship) {
	// Continuous action
		ship.continuousTurn(leftRightVal);
		ship.continuousAccelerate(downUpVal);
	// Everybody fires non-continuously
	if(isFiringRounded()){
		ship.fire();
	}
}



void Action::pressKeyDiscrete(eInput::Input vk) {
	// Requires that values be zeroed to start with
	switch(vk){
	case eInput::LEFT:
		leftRightVal -= 1;
		break;
	case eInput::RIGHT:
		leftRightVal += 1;
		break;
	case eInput::DOWN:
		downUpVal -= 1;
		break;
	case eInput::UP:
		downUpVal += 1;
		break;
	case eInput::FIRE:
		fireVal = 1;
		break;
	}
}

void Action::releaseKeyDiscrete(eInput::Input vk) {
	switch(vk){
	case eInput::LEFT:
		leftRightVal += 1;
		break;
	case eInput::RIGHT:
		leftRightVal -= 1;
		break;
	case eInput::DOWN:
		downUpVal += 1;
		break;
	case eInput::UP:
		downUpVal -= 1;
		break;
	case eInput::FIRE:
		fireVal = 0;
		break;
	}
}

void Action::clear() {
	leftRightVal = downUpVal = fireVal = 0;
}

void Action::setLeftRightContinuous(float lr) {
	leftRightVal = lr;
}

void Action::setDownUpContinuous(float du) {
	downUpVal = du;
}

void Action::setFiringContinuous(float f) {
	fireVal = f;
}

/************************************************************************/
/* GETTING INFO FOR NON-CONTINUOUS ACTIONS                                                                    */
/************************************************************************/

bool Action::isGoingLeftRounded() const {
	return (leftRightVal < -leftRightThreshold);
}

bool Action::isGoingRightRounded() const {
	return (leftRightVal > leftRightThreshold);
}

bool Action::isGoingDownRounded() const {
	return ( downUpVal < downThreshold );
}

bool Action::isGoingUpRounded() const {
	return (downUpVal > upThreshold);
}

// Firing == 1.0f
bool Action::isFiringRounded() const {
	return (fireVal == 1.0f);
}

bool Action::isCleared() const {
	return !( isGoingUpRounded()
		|| isGoingDownRounded()
		|| isGoingLeftRounded()
		|| isGoingRightRounded()
		|| isFiringRounded() );
}

bool Action::isInactive() const {
	return leftRightVal == 0.0 && downUpVal==0.0 && fireVal==0.0;
}

// int Action::roundedLeftRight() const {
// 	if ( leftRightVal < -leftRightThreshold ) return -1;
// 	if ( leftRightVal > leftRightThreshold ) return 1;
// 	return 0;
// }
// 
// int Action::roundedDownUp() const {
// 	if ( downUpVal < downThreshold ) return -1;
// 	if ( downUpVal > upThreshold ) return 1;
// 	return 0;
// }
// 
// int Action::roundedFiring() const {
// 	if ( fireVal > fireThreshold ) return 1;
// 	return 0;
// }

/************************************************************************/
/* ENUM CONVERSION                                                                     */
/************************************************************************/

eDirection::Direction Action::getDirection() const {
	eDirection::Direction dir = eDirection::NODIRECTION;

	if(isGoingUpRounded()){
		dir = eDirection::UP;
		if(isGoingRightRounded()) dir = eDirection::UPRIGHT;
		if(isGoingLeftRounded()) dir = eDirection::UPLEFT;
	}
	else if(isGoingDownRounded()){
		dir = eDirection::DOWN;
		if(isGoingRightRounded()) dir = eDirection::DOWNRIGHT;
		if(isGoingLeftRounded()) dir = eDirection::DOWNLEFT;
	}
	else if(isGoingRightRounded()) dir = eDirection::RIGHT;
	else if(isGoingLeftRounded()) dir = eDirection::LEFT;

	return dir;
}

//static
Action Action::actionFromEnum(eAction::ActionEnum a) {
	std::vector<eInput::Input> result = eDirection::getDirectionInputs( eAction::getDirection(a) );
	Action newAction;

	int actionIndex = (int) a;

	if( actionIndex >= (int) eAction::NODIRECTION ){
		result.push_back(eInput::FIRE);
	}

	if( result.size() > 3 || (actionIndex > (int) eAction::FIRENODIRECTION) ) throw std::exception("Error in Action::actionFromEnum, too many inputs for action# %i!", actionIndex);

	BOOST_FOREACH(eInput::Input i, result){
		newAction.pressKeyDiscrete(i);
	}

	return newAction;
}

/************************************************************************/
/* STRINGS                                                                     */
/************************************************************************/

//static
std::string Action::attributeString() {
	// Handles numeric or nominal
	if (g_attributes_are_reals) {
		return "%%Action \n@attribute ActionLeftRight real \n@attribute ActionDownUp real \n@attribute ActionFiring real \n";
	} 
	else {
		return "%%Action \n@attribute Action " + eAction::parser.getAllStringsInBrackets() + "\n";
	}
}

std::string Action::dataString() const {
	// Handles numeric or nominal
	if (g_attributes_are_reals) {	// example output: "1.0, -.51, 0"
		return  boost::lexical_cast<std::string>( leftRightVal ) + ", " +
			 boost::lexical_cast<std::string>( downUpVal ) + ", " +
			  boost::lexical_cast<std::string>( fireVal );
	} 
	else {
		eAction::ActionEnum a = eAction::getActionEnum(getDirection(), isFiringRounded());
		return eAction::parser.enumToString(a);
	}
}

std::vector<double> Action::getDoubleVec() const {
	std::vector<double> result;
	result.push_back(leftRightVal);
	result.push_back(downUpVal);
	result.push_back(fireVal);

	return result;
}

//Error from 0 to 1 (ranges get scaled)
double Action::MSE(const Action& other) {
	double dif0 = leftRightVal - other.leftRightVal;
	dif0 = mapFromRange1to2( static_cast<float>( dif0 ), -2.f, 2.f, -1.f, 1.f );
	double dif1 = downUpVal - other.downUpVal;
	dif1 = mapFromRange1to2( static_cast<float>( dif1 ), -2.f, 2.f, -1.f, 1.f );
	double dif2 = fireVal - other.fireVal;

	return ( dif0*dif0 + dif1*dif1) / 2.0; // + dif2*dif2 ) / 3.0; SHOOTING DOESN"T EVEN WORK RIGHT NOW
}

void Action::applyNoise(std::vector<double> variance) {
	leftRightVal = gaussianSample( leftRightVal, variance[0] );
	downUpVal = gaussianSample( leftRightVal, variance[1] );
	fireVal = gaussianSample( leftRightVal, variance[2] );
}
