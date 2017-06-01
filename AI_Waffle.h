#pragma once
#include "ai.h"

#include <GClasses/GMatrix.h>
#include <GClasses/GLearner.h>
#include "waffles-2012-08-31-source/waffles/src/GClasses/GRand.h"

// Abstract base class for AIs from the Waffles library
class AI_Waffle : public AI {
public:
	AI_Waffle(Controller* controller, int nIn, int nOut );

	virtual ~AI_Waffle(void);

	virtual std::string getString() = 0;

	virtual Action getAction( const SimpleState& state );

	virtual void render();

	virtual void train( const StateAction& sa );
	virtual void train( const PlayData& data );
	virtual void reTrain( const PlayData& data );

	virtual void saveTo( const std::string& filename );

	virtual MenuItem* getNewMenuRoot();

	virtual Action getRawAction( const SimpleState& state );
	virtual Action getRawActionAndUpdateVariance( const SimpleState& state );

protected:
	void init();
	MenuNode* getWaffleMenu(); //options general to waffles

	GClasses::GMatrix getInputMatrix( const PlayData& data );
	GClasses::GMatrix getOutputMatrix( const PlayData& data );

	GClasses::GSupervisedLearner* waffle; //child classes have subtyped pointers.
	GClasses::GRand myRand;
	bool haveTrained; //predicting before training errors

private:
};

