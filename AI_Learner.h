#pragma once
#include "AI.h"

#include <string>
#include <vector>

class StateAction;

class AI_Learner : public AI {
public:
	AI_Learner( Controller* controller, std::string _learnerName );
	AI_Learner( Controller* controller, std::string _learnerName, const PlayData& playData );
	virtual  ~AI_Learner(void);

	virtual std::string getString(); //MUST return Matlab workspace name!

	virtual Action getAction( const SimpleState& state );

	virtual void render(); // draw AI help stuff

	virtual void train(const PlayData& playData); // Batch training

	virtual void saveTo( const std::string& filename );

	virtual void loadFrom( const std::string& filename );

	virtual MenuItem* getNewMenuRoot();

protected:

	virtual Action getRawAction( const SimpleState& state );
	virtual Action getRawActionAndUpdateVariance( const SimpleState& state );

private:
	void init();


	//TODO: have Matlab class keep track of Learners in Matlab workspace
	std::string learnerName; //name of the LinearLearner matlab object
};

