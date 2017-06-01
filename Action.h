#pragma once
#include <string>
#include "InputDirection.h"

class Ship;

//Class describing current effective action being undertaken as floats.
//For non-continuous actions, just provide integers
class Action {
public:
	Action(void);
	Action(int leftRight, int downUp, int shooting); //-1 for left/down, 1 for right/up, 0/1 for shooting/not
	Action(float leftRight, float downUp, float shooting); //-1 for left/down, 1 for right/up, 0/1 for shooting/not
	explicit Action( std::vector<double> inputs );
	~Action(void);
	void init();

	void controlShip(Ship& ship); // Does this action on given ship
	// Set whether ship is controlled continuously
	void setContinuous(bool continuous) {isContinuous = continuous;}

	//For non-continuous actions. Sets isContinuous to false
	void pressKeyDiscrete(eInput::Input vk);
	void releaseKeyDiscrete(eInput::Input vk);
	void clear(); //release every key
	//for continuous actions
	void setLeftRightContinuous(float lr); 
	void setDownUpContinuous(float du);
	void setFiringContinuous(float f);

	void roundFiringWith( float threshold ) {fireVal = (fireVal >= threshold) ? 1.f : 0.f;}
	void applyNoise( std::vector<double> variance );

	//Return effective keypresses for NON-CONTINUOUS output
	bool isGoingUpRounded() const;
	bool isGoingDownRounded() const;
	bool isGoingLeftRounded() const;
	bool isGoingRightRounded() const;
	bool isFiringRounded() const;
	bool isCleared() const; //find if inputs all false
	bool isInactive() const; //find if inputs all zero

	int roundedLeftRight() const;
	int roundedDownUp() const;
	int roundedFiring() const;

	eDirection::Direction getDirection() const;
	static Action actionFromEnum(eAction::ActionEnum a);

	static const int numAttributes = 3;
	static int getNumAttributes() { return numAttributes; }

	static std::string attributeString();
	std::string dataString() const;
	std::vector<double> getDoubleVec() const;

	double MSE( const Action& other );

private:
	bool heldKeys[eInput::NumInputs]; //Array of VIRTUAL keys pressed, by human OR the AI
	bool isContinuous; //Whether ship controlled continuously
	// Describe continuous actions
	float leftRightVal; // Range: -1 (left) to 1 (right)
	float downUpVal; // Range: -1 (down) to 1 (up)
	float fireVal; // Range: 0 (not firing) to 1 (firing)

	// Thresholds for rounding continuous actions
	static float leftRightThreshold;
	static float upThreshold;
	static float downThreshold;
};

