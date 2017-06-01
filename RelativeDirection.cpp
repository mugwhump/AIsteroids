#include "RelativeDirection.h"
#include "globals.h"
#include "windows.h"

EnumParser<eRDir::RelativeDirection> eRDir::getEnumParser() {
	using namespace eRDir;
	EnumParser<eRDir::RelativeDirection> p = EnumParser<eRDir::RelativeDirection>();
	p.put("Clockwise", CW);
	p.put("Away-Clockwise", AWAYCW);
	p.put("Away", AWAY);
	p.put("Away-CounterClockwise", AWAYCCW);
	p.put("CounterClockwise", CCW);
	p.put("Towards-CounterClockwise", TOWARDSCCW);
	p.put("Towards", TOWARDS);
	p.put("Towards-Clockwise", TOWARDSCW);
	p.put("None", NONE);
	//NumRelativeDirections can't have a string, it's not an attribute (also helps catch errors)

	return p;
}

std::string eRDir::relativeDirectionToString(RelativeDirection dir){
	return eRDir::parser.enumToString(dir);
}

eRDir::RelativeDirection eRDir::directionToRelativeDirection(float directionToTarget, float movementDirectionOfTarget) {
	// Say directionToTarget is down (1.5 pi), moving left (pi). RESULT SHOULD BE CW.
	movementDirectionOfTarget -= directionToTarget - (M_PI_2); // becomes right (0 pi)
	movementDirectionOfTarget = loopFloatInRange(movementDirectionOfTarget, -M_PI_4 / 2.0f,  1.875f*M_PI);
	// movementDirection is now direction of pos if placed ABOVE ship

	RelativeDirection result = (RelativeDirection) mapFromRangeToEvenSlices(movementDirectionOfTarget, -M_PI_4 / 2.0f, 1.875f*M_PI, NumRelativeDirections);
//	if(result == NumRelativeDirections)
//		DebugBreak(); //see how that happened

	return result;
}

float eRDir::relativeDirectionToDirection(float directionToTarget, RelativeDirection rDir) {
	// Say directionToTarget is down (1.5 pi), moving CW(0). Result should be left (pi)
	return loopAngle( mapSliceCenterToRange((int) rDir, NumRelativeDirections, -M_PI_4 / 2.0f, 1.875f*M_PI) + directionToTarget  - M_PI_2 );
												//range isn't 0 to 2*pi! CW covers angles below 0!
}

eRDir::RelativeDirection eRDir::stringToRelativeDirection(std::string s) {
	return eRDir::parser.stringToEnum(s);
}
