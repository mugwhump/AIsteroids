#pragma once
#include "inputsource.h"
#include "KeyboardListener.h"
#include "Action.h"

class XboxController; //forward-declared cuz XboxController.h includes lotsa stuff
class Controller; //forward-declaration to remove circular include


class Player : public InputSource, public KeyboardListener{

public:
	explicit Player(Controller* _controller);
	virtual ~Player(void);

	void update(bool canInterrupt); //clears inputs

	bool useGamepad(int playerNum = 0); //returns false if unable, true if able or already using one
	void stopUsingGamepad();
	bool isUsingGamepad() {return myXbox != NULL;}

	virtual Action getAction(); //get current action from keyboard/gamepad. Remember to clear manually.
	virtual Action getAction(const SimpleState& state);

protected:

	//Overrides from KeyboardListener. Tell Controller key pressed.
	virtual void VKPressed(eInput::Input in);
	virtual void VKReleased(eInput::Input in);

private:
	Player(void);
	Action currentAction;
	XboxController* myXbox;
};

