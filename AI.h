#pragma once
#include "Action.h"
#include "EnumParser.h"
#include "inputsource.h"
#include "Menu.h"
#include <boost/archive/text_oarchive.hpp>
#include <deque>

class Action;
//class CompleteState;
class Controller; //forward-declaration to remove circular include
class Ship;
class PlayData;
struct Position;
class SimpleState;
class StateAction;

//Default hand-made AI, other AIs extend this
class AI : public InputSource, public ClassWithMenuItems {
	friend class boost::serialization::access;

public:

	enum AIType : unsigned short {
		DEFAULT,
		LINEAR,
		RBFN,
		LWPR,
		GP,
		//Waffles
		NN,
		NumTypes,
		None
	};

	AI(Controller* _controller, int nIn, int nOut);
	virtual ~AI(void);

	AIType getType() {return myType;}
	static EnumParser<AIType> parser;
	virtual std::string getString();

	void setShipTo(Ship* _ship); //make AI pointers point to these

	virtual Action getAction(const SimpleState& state);

	virtual void render(); // draw AI help stuff

	void updatePlayerAction( const StateAction& sa );
	virtual void train(const StateAction& sa); // In case Learner needs to be updated. ONLY called when human in control
	virtual void train(const PlayData& data); // Batch training
	virtual void reTrain(const PlayData& data); // Forget old stuff
	virtual void reTrain( const std::string& filename ); // Retrains from PlayData loaded from file

	double getMSE( std::vector<double> predicted, std::vector<double> actual );
	double getMovingMSE();
	double getMeanVariance( std::vector<double> variance );

	//TESTS
	void setDefaultNumGames( int num );
	void testAI( int numGames );
	double batchMSETest( const PlayData& trainingData, const PlayData& testData );
	void testIncrementally( ); //uses current playdata
	std::vector<int> batchTestTrainingSize( const PlayData& trainingData, int numFolds );
	void batchTestActionSkipping( int maxSkipRate );

	//AI TWEAKS
	bool isUsingVariance() {return useVariance;}
	void setUseVariance( bool use );
	void toggleUseVariance();

	void setFireThreshold( int threshold );
	void setUseThresholdAdaptation( bool use );
	void toggleUseThresholdAdaptation();
	bool isUsingThresholdAdaptation() {return useThresholdAdaptation;}

	void setActionSkip( int skip ); //Also resets to 0 the time since a new action
	void resetSkippedActionCounter();
	int getActionSkipRate() {return skipActionRate;}

	//SAVING/LOADING
	virtual void saveTo( const std::string& filename );
	virtual void loadFrom( const std::string& filename );

	//MENU
	virtual MenuItem* getNewMenuRoot(); //For default AI's options
	MenuNode* getCommonMenuItems(); //For options common to different AIs
	MenuNode* getCommonTestingMenuItems(); //For running tests

protected:
	AI(void); //private default constructor

	int promptRandomSeed(); //prompts user for random seed

	void updateUserFireRate( const Action& action );
	void updateFireThreshold( const Action& action );

	Action getFilteredAction(const SimpleState& state);
	virtual Action getRawAction(const SimpleState& state); //gets a new action, no variance or filtering
	virtual Action getRawActionAndUpdateVariance(const SimpleState& state); //predict value AND variance (set lastVariance to it)

	void updateMovingMSE( double val );


	std::deque<double> recentMSEs;
	double sumOfRecentMSE;
	static const int numMSEs = 30;

	std::vector<double> lastVariance;

	Action lastAction;

	int humanInactiveFrames; //how long human's been inactive
	static const int maxHumanInactiveFrames = 180; //time human can be inactive for before interrupt issued

	Ship* ship; //Ship AI controls
	
	//SERIALIZABLE
	AIType myType;
	int numInputs, numOutputs;
	bool useVariance; //whether variance is considered when producing actions
	bool useThresholdAdaptation; //whether to update the firing threshold dynamically
	double fireThreshold;
	int skipActionRate; //skip this many actions between getting new actions

private:
	virtual Action getAction();

	Action scriptedAI( const SimpleState& state ) const; // hand-coded benchmark

	void moveToward( Position relativePos, Action &action ) const;

	int numAIFires;
	int numAINonFires;
	int numUserFires;
	int numUserNonFires;
	int timeSinceLastFire;
	int timeSinceUpdate;
	int timeSinceNewAction;

	int defaultNumGames; //how many games to use in tests


	/************************************************************************/
	/* SERIALIZATION                                                                     */
	/************************************************************************/
	template<class Archive>
	inline void serialize( Archive & ar, const unsigned int file_version ){
		ar & myType;
		ar & numInputs;
		ar & numOutputs;
		ar & useVariance;
		ar & useThresholdAdaptation;
		ar & fireThreshold;
		ar & skipActionRate;
	}
};

