#include "Player.h"
#include "Controller.h"
#include "XboxController.h"
#include <iostream>

//private
Player::Player(void)
{
}

Player::Player(Controller* _controller) {
	controller = _controller;
	myXbox = NULL;
}


Player::~Player(void)
{
	delete myXbox;
}

void Player::update(bool canInterrupt) {
	if(isUsingGamepad()){
		myXbox->updateAction(currentAction); //so xbawks can also interrupt
	}
	//check if you need to interrupt
	if(canInterrupt && !currentAction.isCleared()){
		controller->humanInterrupt();
	}
}

void Player::stopUsingGamepad() {
	delete myXbox;
	myXbox = NULL;
}


bool Player::useGamepad(int playerNum /*= 0*/) {
	if(myXbox != NULL){
		std::cout << "Warning: useGamepad() called when gamepad already being used!" << std::endl;
		return true;
	}

	//try to connect
	myXbox = new XboxController(playerNum);
	if(!myXbox->isConnected()){
		myXbox = NULL;
		return false;
	}

	return true;
}


Action Player::getAction() {
	return currentAction;
}

Action Player::getAction( const SimpleState& state) {
	return currentAction;
}


void Player::VKPressed(eInput::Input in) {
	//controller->VKPressedHuman(in);
	currentAction.pressKeyDiscrete(in);
}

void Player::VKReleased(eInput::Input in) {
	//controller->VKReleasedHuman(in);
	currentAction.releaseKeyDiscrete(in);
}
