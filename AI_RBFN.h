#pragma once
#include "ai.h"

#include "Action.h"
#include "AI_ReceptiveFields.h"
#include "Eigen/Dense"
#include "Serialize.h"
#include "SimpleState.h"

#include <boost/serialization/vector.hpp>

class PlayData;


//Online Learner using Radial Basis Function Network. 
//Has online updating.
class AI_RBFN : public AI {
	friend class boost::serialization::access;
public:


	AI_RBFN(Controller* controller, int nIn, int nOut );
	AI_RBFN(Controller* controller, int nIn, int nOut, const PlayData& data );
	AI_RBFN(Controller* controller, int nIn, int nOut, const std::string& filename );
	virtual ~AI_RBFN(void);

	virtual std::string getString();

	virtual Action getAction( const SimpleState& state );

	virtual void render();

	virtual void train( const StateAction& sa ); //Online update!
	virtual void train( const PlayData& data );
	void gradientTrain( const PlayData& data );

	virtual void reTrain( const PlayData& data );

	virtual void saveTo( const std::string& filename );
	virtual void loadFrom( const std::string& filename );

	void printParams();

	void setStepSize();

	virtual MenuItem* getNewMenuRoot();



protected:
	AI_RBFN(void);

	virtual Action getRawAction( const SimpleState& state );

private:
	//Parameters and whatnot
	static const int numSingleValBases = 5;
	static const int numDistBases = 5;
	static const int numDirBases = 5;
	// Add 1 for offset!
	static const int numFeatures = 1 + SimpleState::numSingleAttributes*numSingleValBases + 
		( SimpleState::numDistDirAttributes/2 * (numDirBases*numDistBases) );

	typedef std::vector<double> doubleVec;
	typedef Eigen::RowVectorXd rowVec;
	typedef Eigen::VectorXd colVec;
	typedef Eigen::MatrixXd matrix;
	typedef Eigen::Matrix< double, 1, numFeatures > featureArray;
	typedef Eigen::Matrix<double, Eigen::Dynamic, numFeatures, Eigen::ColMajor> DesignMatrix;

	void init();
	void initRFs();

	//Algorithm stuff
	//turn state instance into basis function representation
	featureArray basifyInstance( const SimpleState& state ); 
	featureArray basifyInstance( rowVec instance ); 
	//get weight/height of NORMALIZED x,y point under given gaussians
	double getGaussHeight( const matrix& gaussianCenters, double gaussianDev, double valX, double valY );

	//SERIALIZABLE
	double stepSize; // step size for gradient descent
	Eigen::Matrix<double, numFeatures, Action::numAttributes> paramMatrix; //Each column has parameters for one output
	std::vector<RFN> myRFNs; //vector of Receptive Field Networks, each with multiple RFs

	/************************************************************************/
	/* SERIALIZATION                                                                     */
	/************************************************************************/
	template<class Archive>
	inline void serialize( Archive & ar, const unsigned int file_version ){
		// serialize base class information
		ar & boost::serialization::base_object<AI>(*this);

		ar & stepSize;
		ar & paramMatrix;
		ar & myRFNs;
	}
};

