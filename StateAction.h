#pragma once

#include "SimpleState.h"
#include "Action.h"

#include <vector>

//State-action pair. 
class StateAction {
public:
	StateAction(void);
	explicit StateAction( std::vector<double> data );
	~StateAction(void);

	//Getters, Setters
	SimpleState& getMyState() ;
	const SimpleState& getConstState() const;
	void setState( const SimpleState& newState );

	Action getAction() const;
	void setAction( const Action& newAction );

	//Filtering
	void filterFiring();

	static int getNumAttributes();
	//TODO: getAttributeString, dataString
	std::vector<double> getDoubleVec() const;
	std::vector<double> geStateDoubleVec() const;

	std::string dataString() const;

private:
	SimpleState myState;
	Action myAction;
};

