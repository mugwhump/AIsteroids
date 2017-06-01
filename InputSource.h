#pragma once

class Action;
class Controller; //forward declaration
class SimpleState;

// Generates commands/Inputs. Should only be implemented by Ships and AIs
// Pure virtual, so can't instantiate, can only use pointers (or references) to it.
class InputSource
{
public:
	virtual ~InputSource(void) = 0; //PURE VIRTUAL. Must override in Derived classes.

	virtual Action getAction() = 0; //If calling from human, or action hasn't changed?
	virtual Action getAction( const SimpleState& state) = 0; //Called by Controller to get response 

protected:
	InputSource(void);

	Controller* controller;
};

