#include "AI_RBFN.h"
#include "SimpleState.h"
#include <iostream>
#include "StateAction.h"
#include "boost\foreach.hpp"
#include "PlayData.h"

/* TODO:
Regularization?
Batch updates
Reinforcement Learning
Customized RFs
*/


// protected
AI_RBFN::AI_RBFN(void)
{
}

AI_RBFN::AI_RBFN(Controller* controller, int nIn, int nOut)
: AI(controller, nIn, nOut) {
	init();
}

AI_RBFN::AI_RBFN(Controller* controller, int nIn, int nOut, const PlayData& data)
: AI(controller, nIn, nOut) {
	init();
	train(data);
}

AI_RBFN::AI_RBFN(Controller* controller, int nIn, int nOut, const std::string& filename)
: AI(controller, nIn, nOut) {
	init();
	loadFrom(filename);
}

void AI_RBFN::init() {
	myType = RBFN;

	//Initialize parameters
	paramMatrix.setZero();
	//stepSize = .000025;
	//stepSize = .0001; //still too slow!
	//stepSize = .005;
	stepSize = .05;
	initRFs();
}


AI_RBFN::~AI_RBFN(void)
{
}



void AI_RBFN::initRFs() {
	// make RFNs for single attributes, 5 basis functions
	for( int i = 0; i < SimpleState::numSingleAttributes; i++ ){
		RFN RFs( numSingleValBases, 1 );
		RFs.makeRFGrid( numSingleValBases );
		myRFNs.push_back( RFs );
	}

	// make RFNs for distance / direction pairs
	for( int i = 0; i < SimpleState::numDistDirAttributes/2; i++ ){
		RFN RFs( numDistBases * numDirBases, 2 );
		RFs.makeRFGrid( numDistBases, numDirBases );
		myRFNs.push_back( RFs );
	}

	// 	RFNtemplate<4,1> RFs;
	// 	RFNtemplate<4,1>::RFMatrix centers;
	// 	RFNtemplate<4,1>::RFVector heights;
	// 	RFNtemplate<4, 1>::DimArray point;
	// 	centers << 1, 2, 3, 4;
	// 	point(0) = 2.5;
	// 
	// 	RFs.setCenters(centers);
	// 	RFs.setDevsUniformCircular(.5);
	// 
	// 	//std::cout << "Centers at 1, 2, 3, 4, dev = .5, heights of point 2.5: " << std::endl;
	// 	heights = RFs.getHeights(  point );
	//std::cout << heights(0) << ", " << heights(1) << ", " << heights(2) << ", " << heights(3) << std::endl;


	// 	std::cout << "Values of points at .5 1.5, 2.5, 3.5: " << std::endl;
	// 	//centers = centers.array() - .5;
	// 	heights = RFs.getHeights(centers);
	// 	std::cout << RFs.getHeights( RFN<4, 1>::DimArray(0.5) ) << ", " << RFs.getHeights( RFN<4, 1>::DimArray(1.5) ) << ", " << RFs.getHeights( RFN<4, 1>::DimArray(2.5) ) << ", " << RFs.getHeights( RFN<4, 1>::DimArray(3.5) ) << ", " << std::endl;

}

std::string AI_RBFN::getString() {
	return "RBFN";
}

/************************************************************************/
/* RENDERING                                                                     */
/************************************************************************/

void AI_RBFN::render() {
	//throw std::exception("The method or operation is not implemented.");
}

/************************************************************************/
/* PREDICTION                                                                     */
/************************************************************************/

Action AI_RBFN::getAction(const SimpleState& state) {
	return getFilteredAction(state);
}

Action AI_RBFN::getRawAction(const SimpleState& state) {

/*	FeatureA = LinearLearner.basifyInstance( [InstanceA, 0, 0, 0] );

	OutputA = [ FeatureA * this.ParamMatrix(: , 1), ... %rowV * columnV = scalar
		FeatureA * this.ParamMatrix(: , 2), ... %rowV * columnV = scalar
		FeatureA * this.ParamMatrix(: , 3) ]; %rowV * columnV = scalar*/
	featureArray basedInstance = basifyInstance( state );
	doubleVec outVec(numOutputs, 0.0);
	
	for( int i = 0; i < numOutputs; i++ ){
		outVec[i] = basedInstance.dot( paramMatrix.col(i) );
	}
	return Action( outVec );
}

/************************************************************************/
/* TRAINING                                                                     */
/************************************************************************/

void AI_RBFN::train(const StateAction& sa) {
	//update firing threshold
	updateUserFireRate(sa.getAction());

	doubleVec actionVec = sa.getAction().getDoubleVec();

	//Each output has its own parameter vector to learn
	for ( int iOut = 0; iOut < numOutputs; iOut++ ) {
		featureArray basedInstance = basifyInstance( sa.getConstState() );
		double actionVal = actionVec[iOut];
		double predictedVal = basedInstance * paramMatrix.col( iOut ); //row * col = scalar

		// Adjust each parameter
		for( int iFeature = 0; iFeature < numFeatures; iFeature++ ){
			double errorAmount = predictedVal - actionVal;
			paramMatrix( iFeature, iOut ) -= stepSize * errorAmount * basedInstance(iFeature);
			//TODO: Normalize feature vector?
		}
	}
}

//TODO: make incremental? Requires storing design matrix...
void AI_RBFN::train(const PlayData& data) {
	std::cout << "Calculating RBFN..." << std::endl;
	// 	matrix dataM =Eigen::Map<matrix>( &data.getDoubleVec()[0], data.getNumInstances(), numFeatures );
	int numSamples = data.getNumInstances();
	matrix DesignM(numSamples, numFeatures); 
	matrix LabelM(numSamples, numOutputs);

	// Fill Design Matrix and Labels row-by-row
	int i = 0;
	BOOST_FOREACH( const StateAction& sa, data.getStateActions() ){
		DesignM.row(i) = basifyInstance( sa.getConstState() );
		LabelM.row(i) = Eigen::Map<rowVec>( &sa.getAction().getDoubleVec()[0], 1, numOutputs );
		i++;
	}

	matrix InverseM( numFeatures, numFeatures ); //necessary?
	InverseM = ( DesignM.transpose().eval() * DesignM );
	//Should regularize...or not? Have extra column...
	InverseM += matrix::Identity( numFeatures, numFeatures ) * .0001;
	InverseM = InverseM.inverse();
	InverseM *= DesignM.transpose().eval();

	for ( int iOut = 0; iOut < numOutputs; iOut++ ) {
		paramMatrix.col(iOut) = InverseM * LabelM.col(iOut);
	}
	std::cout << "Done!" << std::endl;
}

void AI_RBFN::gradientTrain(const PlayData& data) {
	BOOST_FOREACH( const StateAction& sa, data.getStateActions() ){
		train(sa);
	}
}

void AI_RBFN::reTrain(const PlayData& data) {
	paramMatrix.setZero();
	train(data);
}


/************************************************************************/
/* ALGORITHMING                                                                     */
/************************************************************************/

AI_RBFN::featureArray AI_RBFN::basifyInstance(const SimpleState& state) {
	return basifyInstance( Eigen::VectorXd::Map( &state.getNormalizedDoubleVec()[0], numInputs ) );
}

AI_RBFN::featureArray AI_RBFN::basifyInstance(rowVec instance) {
	featureArray features( numFeatures );

	int RFindex = 0; // index into myRFs
	int instanceIndex = 0; // index into instance
	int featureIndex = 0; // index into feature array

	//offset, constant value of 1
	features(0) = 1.0;
	featureIndex = 1;

	//basify the singular values
	for( ; RFindex < SimpleState::numSingleAttributes; RFindex++ ){
		features.segment(featureIndex, myRFNs[RFindex].numRFs ) =
			myRFNs[RFindex].getHeights( instance.segment(instanceIndex, 1) ).transpose();

		instanceIndex++;
		featureIndex += myRFNs[RFindex].numRFs;
	}

	//basify the distdir values. attr increases by two each loop!
	for( ; RFindex < myRFNs.size(); RFindex ++ ){
		features.segment(featureIndex, myRFNs[RFindex].numRFs ) =
			myRFNs[RFindex].getHeights( instance.segment(instanceIndex, 2) ).transpose();

		instanceIndex++;
		featureIndex += myRFNs[RFindex].numRFs;
	}

	return features;
}

/************************************************************************/
/* MENU                                                                     */
/************************************************************************/

void AI_RBFN::saveTo(const std::string& filename) {
	try{
		// create and open a character archive for output
		std::ofstream ofs(filename);
		boost::archive::text_oarchive oa(ofs);
		// write class instance to archive
		oa << *this;
	}
	catch (std::exception& e) {
		std::cout << "Cannot save AI_RBFN to "+filename+", " << e.what() << std::endl;
	}
}

void AI_RBFN::loadFrom(const std::string& filename) {
	try {
		std::ifstream ifs(filename);
		boost::archive::text_iarchive ia(ifs);
		// read class instance to archive
		ia >> *this;
	}
	catch (std::exception& e) {
		std::cout << "Cannot load AI_RBFN from "+filename+", " << e.what() << std::endl;
	}
}

void AI_RBFN::printParams() {
	for( int i = 0; i < numOutputs; i++ ){
		std::cout << "Output #" << i << std::endl;
		std::cout << paramMatrix.col(i).transpose() << std::endl;
	}
}

void AI_RBFN::setStepSize() {
	std::cout << "Current step size: " << stepSize << std::endl;
	int intStep = getIntFromConsole("Enter int between 1 and 1000 (will be divided by 1000)\n", 1, 1000);
	stepSize = intStep / 1000.0;
	std::cout << "New stepsize: " << stepSize << std::cout;
}

MenuItem* AI_RBFN::getNewMenuRoot() {
	MenuNode* node = new MenuNode( getString() + " options" );
	node->mergeAndDelete( getCommonMenuItems() );

	node->addChild( new MenuLeaf<AI_RBFN>("Set step size", this, &AI_RBFN::setStepSize) );

	return node;
}
