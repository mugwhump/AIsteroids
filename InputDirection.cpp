#include "InputDirection.h"
#include <exception>
#include "MyError.h"
#include <boost/lexical_cast.hpp>


/************************************************************************/
/* INPUT                                                                     */
/************************************************************************/

// eDirection::Direction eInput::getDirection(std::vector<eInput::Input> inputs) {
// 	eDirection::Direction dir = eDirection::NODIRECTION;
// 
// 	if(inputs.){
// 		dir = eDirection::UP;
// 		if(goingRight()) dir = eDirection::UPRIGHT;
// 		if(goingLeft()) dir = eDirection::UPLEFT;
// 	}
// 	else if(goingDown()){
// 		dir = eDirection::DOWN;
// 		if(goingRight()) dir = eDirection::DOWNRIGHT;
// 		if(goingLeft()) dir = eDirection::DOWNLEFT;
// 	}
// 	else if(goingRight()) dir = eDirection::RIGHT;
// 	else if(goingLeft()) dir = eDirection::LEFT;
// 
// 	return dir;
// }

/************************************************************************/
/* DIRECTION                                                                     */
/************************************************************************/

EnumParser<eDirection::Direction> eDirection::getEnumParser() {
	using namespace eDirection;
	EnumParser<Direction> p = EnumParser<Direction>();
	p.put("Right", RIGHT); //0
	p.put("Up-Right", UPRIGHT); //1
	p.put("Up", UP);
	p.put("Up-Left", UPLEFT);
	p.put("Left", LEFT);
	p.put("Down-Left", DOWNLEFT);
	p.put("Down", DOWN); //6
	p.put("Down-Right", DOWNRIGHT);
	p.put("NoDirection", NODIRECTION); //9
	//NumDirections can't have a string, it's not an attribute (also helps catch errors)

	return p;
}

EnumParser<eDirection::Direction> parser = eDirection::getEnumParser(); //extern, so must define here.

std::vector<eInput::Input> eDirection::getDirectionInputs(Direction dir) {
	using namespace eDirection;
	std::vector<eInput::Input> result;

	if(dir == RIGHT || dir == UPRIGHT || dir == DOWNRIGHT) result.push_back(eInput::RIGHT);
	if(dir == UP || dir == UPRIGHT || dir == UPLEFT) result.push_back(eInput::UP);
	if(dir == LEFT || dir == UPLEFT || dir == DOWNLEFT) result.push_back(eInput::LEFT);
	if(dir == DOWN || dir == DOWNLEFT || dir == DOWNRIGHT) result.push_back(eInput::DOWN);

	if(result.size() > 2) throw std::exception("Error in eDirection::getInputs, too many inputs!");

	return result;
}

/************************************************************************/
/* ACTION                                                                     */
/************************************************************************/

EnumParser<eAction::ActionEnum> eAction::getEnumParser() {
	using namespace eAction;
	EnumParser<ActionEnum> p = EnumParser<ActionEnum>();
	p.put("Right", RIGHT);
	p.put("Up-Right", UPRIGHT);
	p.put("Up", UP);
	p.put("Up-Left", UPLEFT);
	p.put("Left", LEFT);
	p.put("Down-Left", DOWNLEFT);
	p.put("Down", DOWN);
	p.put("Down-Right", DOWNRIGHT);
	p.put("NoDirection", NODIRECTION);
	p.put("Fire-Right", FIRERIGHT);
	p.put("Fire-Up-Right", FIREUPRIGHT);
	p.put("Fire-Up", FIREUP);
	p.put("Fire-Up-Left", FIREUPLEFT);
	p.put("Fire-Left", FIRELEFT);
	p.put("Fire-Down-Left", FIREDOWNLEFT);
	p.put("Fire-Down", FIREDOWN);
	p.put("Fire-Down-Right", FIREDOWNRIGHT);
	p.put("Fire-NoDirection", FIRENODIRECTION);
	//NumDirections can't have a string, it's not an attribute (also helps catch errors)

	return p;
}

//declared extern, so must be defined here.
EnumParser<eAction::ActionEnum> eAction::parser = eAction::getEnumParser();

//TODO: move into Action class, goddamn.
std::vector<eInput::Input> eAction::getInputs(ActionEnum a) {
	std::vector<eInput::Input> result = eDirection::getDirectionInputs(eAction::getDirection(a));
	int actionIndex = (int) a;

	if( actionIndex >= (int) eAction::NODIRECTION ){
		result.push_back(eInput::FIRE);
	}

	if( result.size() > 3 || (actionIndex > (int) eAction::FIRENODIRECTION) ) 
		throw MyError("Error in eAction::getInputs, too many inputs for action# " + boost::lexical_cast<std::string>(actionIndex), __LINE__);

	return result;
}


eDirection::Direction eAction::getDirection(ActionEnum a) {
	int actionIndex = (int) a;

	if(actionIndex <= (int)eDirection::DOWNRIGHT){
		return ((eDirection::Direction) actionIndex);
	}
	else if( (a == eAction::NODIRECTION) || (a == eAction::FIRENODIRECTION) ){
		return eDirection::NODIRECTION;
	}
	else if(actionIndex > ((int) eAction::NODIRECTION) && actionIndex < eAction::NumActions){ //firing
		return ((eDirection::Direction) (actionIndex-9));
	}

	throw MyError("Error in eAction::getDirection, cannot convert input " + boost::lexical_cast<std::string>(actionIndex), __LINE__ );
}


eAction::ActionEnum eAction::getActionEnum(eDirection::Direction dir, bool isFiring) {
	int dirIndex = (int) dir;
	int newActionIndex = -1;

	if(dirIndex <= (int)eDirection::DOWNRIGHT){
		newActionIndex = dirIndex + ((isFiring) ? 9 : 0);
	}
	else if(dirIndex == (int)eDirection::NODIRECTION){
		newActionIndex = ((isFiring) ?  (int)eAction::FIRENODIRECTION  :  (int)eAction::NODIRECTION );
	}

	if(newActionIndex > (int) eAction::FIRENODIRECTION 
		|| newActionIndex < 0 
		|| (newActionIndex > ((int) eAction::NODIRECTION) && !isFiring)) {
		throw MyError("Error in eAction::getActionEnum, invalid resulting action# " + 
						boost::lexical_cast<std::string>(newActionIndex), __LINE__);
	}
	if(dirIndex > (int) eDirection::NODIRECTION 
		|| dirIndex < 0 
		|| dirIndex == eDirection::NumDirections) {
			throw MyError("Error in eAction::getActionEnum, invalid given direction# " 
						+ boost::lexical_cast<std::string>(dirIndex), __LINE__ );
	}

	return (eAction::ActionEnum) newActionIndex;
}
