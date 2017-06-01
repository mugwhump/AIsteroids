#pragma once
#include "ai.h"

#include <deque>
#include <vector>

class LWPR_Object;
class LWPR_ReceptiveFieldObject;
class PlayData;
struct Params;

class AI_LWPR : public AI {
public:
	AI_LWPR( Controller* controller, int nIn, int nOut );
	AI_LWPR( Controller* controller, int nIn, int nOut, Params p );
	AI_LWPR( Controller* controller, int nIn, int nOut, const PlayData& data );
	AI_LWPR( Controller* controller, int nIn, int nOut, const std::string& filename );
	virtual ~AI_LWPR(void);

	virtual std::string getString();

	virtual Action getAction( const SimpleState& state );

	virtual void render(); // draw AI help stuff

	virtual void train( const StateAction& sa ); // update the learner!
	virtual void train( const PlayData& data ); // batch training
	virtual void reTrain( const PlayData& data );
	void clear(); //forget everything


	virtual void saveTo( const std::string& filename );
	virtual void loadFrom( const std::string& filename );

	virtual MenuItem* getNewMenuRoot();

	void printModelInfo(); //print stats about the LWPR
	void printRandomRF( int outputIndex );
	void printRFInfo( const LWPR_ReceptiveFieldObject& rf );

	void setParams( Params p );
	void setParams( double distanceM, bool updateD, double alpha, bool meta, double wGen, double penalty, double cutoff );
	void setParams( std::vector<double> distanceM, bool updateD, double alpha, bool meta, double wGen, double penalty, double cutoff );

protected:
	AI_LWPR(void); //private default constructor

	virtual Action getRawAction( const SimpleState& state );
	virtual Action getRawActionAndUpdateVariance( const SimpleState& state );

private:
	void init(bool defaultParams);

	void promptSave();
	void promptLoad();
	void setCutoff();

	static std::vector<double> getInputs( const StateAction& sa );
	static std::vector<double> getInputs( const SimpleState& state );
	static std::vector<double> getInputMaximums();

	void LWPR_Test();
	void myTest(int numGens);

	double activationCutoff; //minimum RF activation to be used for prediction. Lower is slower.

	LWPR_Object* myLWPR_Object;
};

