#pragma once
#include "ai.h"

#include "libGP/gp.h"
#include <vector>
#include <deque>

class PlayData;


class AI_GP : public AI {
public:
	AI_GP(Controller* controller, int nIn, int nOut );
	AI_GP(Controller* controller, int nIn, int nOut, const PlayData& data );
	AI_GP(Controller* controller, int nIn, int nOut, const std::string& filename );
	virtual ~AI_GP(void);

	virtual std::string getString();

	virtual Action getAction( const SimpleState& state );

	virtual void render();

	virtual void train( const StateAction& sa );
	virtual void train( const PlayData& data );
	virtual void reTrain( const PlayData& data );

	virtual void saveTo( const std::string& filename );
	virtual void loadFrom( const std::string& filename );

	virtual MenuItem* getNewMenuRoot();

protected:

	virtual Action getRawAction( const SimpleState& state );
	virtual Action getRawActionAndUpdateVariance( const SimpleState& state );

private:
	AI_GP(void);
	void init();
	void setHyperParams( bool useCustomHyperParams);

	static std::vector<double> getInputs( const StateAction& sa );
	static std::vector<double> getInputs( const SimpleState& state );
	void addData( const StateAction &sa );

	std::vector<libgp::GaussianProcess*> myGPs;
};

