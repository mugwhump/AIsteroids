#include "XboxController.h"
#include "Action.h"
#include "globals.h"

XboxController::XboxController(int playerNumber) {
	// Set the Controller Number
	controllerNum = playerNumber;
}

XboxController::~XboxController() {
	vibrate(); //turn off rumble
}

/************************************************************************/
/* GETTERS                                                                     */
/************************************************************************/

XINPUT_STATE XboxController::getState() {
	// Zeroise the state
	ZeroMemory(&controllerState, sizeof(XINPUT_STATE));

	// Get the state
	XInputGetState(controllerNum, &controllerState);

	return controllerState;
}

bool XboxController::isConnected() {
	// Zeroise the state
	ZeroMemory(&controllerState, sizeof(XINPUT_STATE));

	// Get the state
	DWORD Result = XInputGetState(controllerNum, &controllerState);

	if(Result == ERROR_SUCCESS) {
		return true;
	}
	else {
		return false;
	}
}

void XboxController::updateAction(Action& action) {
	getState(); //update state
	action.clear();

	// stickX, Y go from [-1 to 1]
	float stickX = controllerState.Gamepad.sThumbRX / 32767.0f; //turn with RIGHT stick, not left!
	float stickY = controllerState.Gamepad.sThumbLY / 32767.0f;

	//Filter deadzones and remap range
	if( stickX < 0){
		if( stickX > -g_stick_x_deadzone )
			stickX = 0.0f;
		else 
			stickX =  mapFromRange1to2(stickX,  -1,-g_stick_x_deadzone,  -1,0);
	}
	else {
		if( stickX < g_stick_x_deadzone )
			stickX = 0.0f;
		else 
			stickX =  mapFromRange1to2(stickX,  g_stick_x_deadzone,1,  0,1);
	}
	//Map stickY values to range [-1, 1]
	if( stickY < 0){
		if( stickY > -g_stick_y_deadzone )
			stickY = 0.0f;
		else 
			stickY =  mapFromRange1to2(stickY,  -1,-g_stick_y_deadzone,  -1,0);
	}
	else {
		if( stickY < g_stick_y_deadzone )
			stickY = 0.0f;
		else 
			stickY =  mapFromRange1to2(stickY,  g_stick_y_deadzone,1,  0,1);
	}

	//Parse the Dpad inputs

	if( (controllerState.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_LEFT) )
		stickX = -1.0f;

	if( (controllerState.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_RIGHT) )
		stickX = 1.0f;

	if( (controllerState.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_DOWN) )
		stickY = -1.0f;

	if( (controllerState.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_UP) )
		stickY = 1.0f;

	//Set Action
	action.setLeftRightContinuous(stickX);
	action.setDownUpContinuous(stickY);

	if(controllerState.Gamepad.wButtons & XINPUT_GAMEPAD_A
		|| controllerState.Gamepad.bRightTrigger > 100 )
		action.setFiringContinuous(1.0f);


//		XINPUT_GAMEPAD_DPAD_UP          0x00000001
// 		XINPUT_GAMEPAD_DPAD_DOWN        0x00000002
// 		XINPUT_GAMEPAD_DPAD_LEFT        0x00000004
// 		XINPUT_GAMEPAD_DPAD_RIGHT       0x00000008
//		XINPUT_GAMEPAD_START            0x00000010
// 		XINPUT_GAMEPAD_BACK             0x00000020
// 		XINPUT_GAMEPAD_LEFT_THUMB       0x00000040
// 		XINPUT_GAMEPAD_RIGHT_THUMB      0x00000080
// 		XINPUT_GAMEPAD_LEFT_SHOULDER    0x0100
// 		XINPUT_GAMEPAD_RIGHT_SHOULDER   0x0200
// 		XINPUT_GAMEPAD_A                0x1000
// 		XINPUT_GAMEPAD_B                0x2000
// 		XINPUT_GAMEPAD_X                0x4000
// 		XINPUT_GAMEPAD_Y                0x8000
}

/************************************************************************/
/* SETTERS                                                                     */
/************************************************************************/

void XboxController::vibrate(int leftVal /*= 0*/, int rightVal /*= 0*/) {
	// Create a Vibraton State
	XINPUT_VIBRATION Vibration;

	// Zeroise the Vibration
	ZeroMemory(&Vibration, sizeof(XINPUT_VIBRATION));

	// Set the Vibration Values
	Vibration.wLeftMotorSpeed = leftVal;
	Vibration.wRightMotorSpeed = rightVal;

	// Vibrate the controller
	XInputSetState(controllerNum, &Vibration);
}
