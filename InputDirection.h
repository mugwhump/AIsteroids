#pragma once;
#include "EnumParser.h"
#include <vector>

/************************************************************************/
/* INPUT                                                                     */
/************************************************************************/

namespace eInput{
	enum Input : unsigned short
	{
		UP = 0,
		DOWN = 1,
		LEFT = 2,
		RIGHT = 3,
		FIRE = 4,
		NumInputs
	};

	//static eDirection::Direction getDirection(std::vector<eInput::Input> inputs);
}

/************************************************************************/
/* STATIC FUNCTIONS AT GLOBAL/NAMESPACE SCOPE MEAN FUNCTION'S ARE ONLY USED IN THAT TRANSLATION UNIT                                                                     */
/************************************************************************/

/************************************************************************/
/* DIRECTION                                                                     */
/************************************************************************/

namespace eDirection{
	enum Direction : unsigned short //IF NUMBERS CHANGED, MUST CHANGE METHODS
	{
		RIGHT = 0,
		UPRIGHT = 1,
		UP = 2,
		UPLEFT = 3,
		LEFT = 4,
		DOWNLEFT = 5,
		DOWN = 6,
		DOWNRIGHT = 7,
		NumDirections,
		NODIRECTION = 9
	};

	//EnumParser specialization constructor
	EnumParser<Direction> getEnumParser();
	extern EnumParser<Direction> parser; //use parser to do conversions, don't need to include EnumParser.h

	std::vector<eInput::Input> getDirectionInputs(Direction dir); //get inputs to go in that direction. Empty vector = NODIRECTION
}

/************************************************************************/
/* ACTION                                                                     */
/************************************************************************/

namespace eAction{
	enum ActionEnum : unsigned short //IF NUMBERS CHANGED, MUST CHANGE METHODS
	{
		RIGHT = 0,
		UPRIGHT = 1,
		UP = 2,
		UPLEFT = 3,
		LEFT = 4,
		DOWNLEFT = 5,
		DOWN = 6,
		DOWNRIGHT = 7,
		NODIRECTION = 8,
		FIRERIGHT = 9,
		FIREUPRIGHT = 10,
		FIREUP = 11,
		FIREUPLEFT = 12,
		FIRELEFT = 13,
		FIREDOWNLEFT = 14,
		FIREDOWN = 15,
		FIREDOWNRIGHT = 16,
		FIRENODIRECTION = 17,
		NumActions
	};

	//EnumParser specialization constructor
	EnumParser<ActionEnum> getEnumParser();
	extern EnumParser<ActionEnum> parser; //use parser to do conversions, don't need to include EnumParser.h

	//THIS IS ALL RETARDED

	eDirection::Direction getDirection(ActionEnum a); //get direction
	ActionEnum getActionEnum(eDirection::Direction dir, bool isFiring); //get action enum given a direction and whether firing
	std::vector<eInput::Input> getInputs(ActionEnum a); //get inputs to do action. Empty vector = NODIRECTION
}