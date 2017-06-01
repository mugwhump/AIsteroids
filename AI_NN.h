#pragma once
#include "ai_waffle.h"

#include <GClasses/GNeuralNet.h>


class AI_NN : public AI_Waffle {
public:
	AI_NN(Controller* controller, int nIn, int nOut );
	AI_NN(Controller* controller, int nIn, int nOut, const PlayData& data, bool autoTune = false );
	AI_NN(Controller* controller, int nIn, int nOut, const std::string& filename );
	virtual ~AI_NN(void);

	virtual std::string getString();

	virtual void loadFrom( const std::string& filename );

	virtual MenuItem* getNewMenuRoot();

protected:
	AI_NN(void);
// 	GClasses::GNeuralNet* waffle; 2 gud 2 b tru ;_;

private:
	void init();
	GClasses::GNeuralNet* nn(){return (GClasses::GNeuralNet*)waffle;}
};

