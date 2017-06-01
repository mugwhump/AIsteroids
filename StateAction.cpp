#include "StateAction.h"
#include "MyError.h"


StateAction::StateAction(void)
{
}


StateAction::StateAction(std::vector<double> data) {
	if( data.size() != getNumAttributes() ){
		throw MyError( "Error constructing StateAction, incorrect input vector size: ", data.size(), __LINE__ );
	}
	//Extract Action
	std::vector<double> actionVec( Action::getNumAttributes(), 0.0 );
	for( int i = 0; i < Action::getNumAttributes(); i++ ){
		actionVec[actionVec.size() - 1 - i] = data[data.size() - 1 - i];
	}
	myAction = Action(actionVec);
	//Extract state
	data.resize( SimpleState::getNumAttributes() );
	myState = SimpleState(data);
}


StateAction::~StateAction(void)
{
}


int StateAction::getNumAttributes() {
	return SimpleState::getNumAttributes() + Action::getNumAttributes();
}


SimpleState& StateAction::getMyState() {
	return myState;
}

const SimpleState& StateAction::getConstState() const {
	return myState;
}


void StateAction::setState(const SimpleState& newState) {
	myState = newState;
}

Action StateAction::getAction() const {
	return myAction;
}

void StateAction::setAction(const Action& newAction) {
	myAction = newAction;
}

std::vector<double> StateAction::getDoubleVec() const {
	std::vector<double> stateVec = myState.getDoubleVec();
	std::vector<double> actionVec = myAction.getDoubleVec();
	stateVec.insert( stateVec.end(), actionVec.begin(), actionVec.end() );
	return stateVec;
}

std::vector<double> StateAction::geStateDoubleVec() const {
	return myState.getDoubleVec();
}

std::string StateAction::dataString() const {
	return myState.dataString() + ", " + myAction.dataString();
}


//If ship can't fire, make this zero so as not to confuse AI
void StateAction::filterFiring() {
	if( myState.shootCounter > 0 ){
		myAction.setFiringContinuous(0.0f);
	}
}
