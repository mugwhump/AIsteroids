#pragma once;
#include <string>
#include "EnumParser.h"


//Direction of objects relative to ship
namespace eRDir{
	enum RelativeDirection : unsigned short
	{
		CW = 0, // So they can be mapped to radians. HOWEVER, CW's real range is 1/8 pi to 1 7/8 pi!
		AWAYCW = 1,
		AWAY = 2,
		AWAYCCW = 3,
		CCW = 4,
		TOWARDSCCW = 5,
		TOWARDS = 6,
		TOWARDSCW = 7,
		NumRelativeDirections, // 8 real direction, NONE doesn't count.
		NONE = 9
	};


	//EnumParser specialization constructor
	EnumParser<eRDir::RelativeDirection> getEnumParser();

	static EnumParser<RelativeDirection> parser = getEnumParser();

	//get RelativeDirection given direction to a target and its movement direction
	RelativeDirection directionToRelativeDirection(float directionToTarget, float movementDirectionOfTarget);
	//get actual movement dir of target given the direction to it and its RelativeDirection
	float relativeDirectionToDirection(float directionToTarget, RelativeDirection rDir);

	//turn into a string
	std::string relativeDirectionToString(RelativeDirection dir);
	RelativeDirection stringToRelativeDirection(std::string s);
};
