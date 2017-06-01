#pragma once
#define WIN32_LEAN_AND_MEAN // No MFC
#include <windows.h>
#include <XInput.h>
// Now, the XInput Library
//#pragma comment(lib, "XInput.lib")// NOTE: COMMENT THIS OUT IF YOU ARE NOT USING A COMPILER THAT SUPPORTS THIS METHOD OF LINKING LIBRARIES

class Action;

// XBOX Controller Class 
class XboxController {
public:
	explicit XboxController(int playerNumber); //set player number
	~XboxController(); //destructor turns off rumble

	//GETTERS
	XINPUT_STATE getState(); //updates and returns state
	bool isConnected(); //returns ERROR_SUCCESS (true) if connected
	void updateAction(Action& action); //return action for current presses

	//SETTERS
	void vibrate(int leftVal = 0, int rightVal = 0); //range: 0 to 65535. Call vibrate() to stop all motion

private:
	XINPUT_STATE controllerState;
	int controllerNum;
};

