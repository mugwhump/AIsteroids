#pragma once

#include "Eigen/Dense"
#include "MyError.h"

#include <boost/archive/text_oarchive.hpp>


struct RFN {
	friend class boost::serialization::access;

	typedef Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic > RFMatrix;
	typedef Eigen::Matrix< double, Eigen::Dynamic, 1 > RFVector;
	typedef Eigen::Matrix< double, 1, Eigen::Dynamic > DimArray; 
	typedef Eigen::Matrix< int, 1, Eigen::Dynamic > IntArray; 

	RFN( int nRFs, int nDims );

	const int numRFs;
	const int numDims;

	//::getHeights: Get heights at given point under all RFs
	//slice: a SINGLE value to get weights for
	RFVector getHeights( const DimArray& slice );

	//Manually specify all RFs
	void setRFs( const RFMatrix& _centers, const RFMatrix& _devs );

//Set evenly-spaced grid of RFs, where stDevs = 1/RFsPerDimension
	void makeRFGrid( const IntArray& RFsPerDim );
	void makeRFGrid( int RFsInDim1 );
	void makeRFGrid( int RFsInDim1, int RFsInDim2 );
	void makeRFGrid( int RFsInDim1, int RFsInDim2, int RFsInDim3 );

	//Set Centers
	void setCenters( const RFMatrix& _centers );

	//Set unique non-circular devs for stretched/squashed RFs
	void setDevsUniqueStretched( const RFMatrix& _devs );

	//Set uniform non-circular devs for identical stretched/squashed RFs
	void setDevsUniformStretched( const DimArray& _devs );

	//Set unique circular standard deviations
	void setDevsUniqueCircular( const RFVector& _devs );

	//Set uniform circular standard deviations
	void setDevsUniformCircular( double deviation );

	//Ensure matrices have correct dimensions. Otherwise, fail.
	void validateMatrix( const RFMatrix& matrix ) const;
	void validateVector( const RFVector& vector ) const;
	void validateArray( const DimArray& array ) const;

private:
	RFN(void);

	RFMatrix centers; //Each row has center of an RF
	RFMatrix devs; //Each row has standard deviations/widths of an RF. 

	/************************************************************************/
	/* SERIALIZATION                                                                     */
	/************************************************************************/
	BOOST_SERIALIZATION_SPLIT_MEMBER();

	template<class Archive>
	inline void save( Archive & ar, const unsigned int file_version ) const{
		ar << numDims;
		ar << numRFs;

		ar << centers;
		ar << devs;
	}

	template<class Archive>
	inline void load( Archive & ar, const unsigned int file_version ){
		//Const members
		ar >> const_cast<int &>(numDims);
		ar >> const_cast<int &>(numRFs);

		ar >> centers;
		ar >> devs;
	}
};



//Template Struct describing a Receptive Field Network (group of receptive fields)
// numRFs: # of Receptive Fields
// numDims: Dimensionality of each RF
template< int numRFs, int numDims >
struct RFNtemplate {
	typedef Eigen::Matrix< double, numRFs, numDims > RFMatrix;
	typedef Eigen::Matrix< double, numRFs, 1 > RFVector;
	typedef Eigen::Matrix< double, 1, numDims > DimArray; // This one is row vector!

	RFNtemplate() {
	}

	/************************************************************************/
	/* GETTING VALUES                                                                     */
	/************************************************************************/
	//::getHeights: Get heights at given point under all RFs
	//slice: a SINGLE value to get weights for
	RFVector getHeights( const DimArray& slice ){
		//Distance per dimension to each RF
		RFMatrix subtractedM = centers - slice.colwise().replicate( numRFs );

		//TODO: looping

		//Total Manhattan (NOT Euclidean!) distance to each RF
		//RFVector distanceV = subtractedM.rowwise().sum();

		// exp( ( dimDist^2 ) / ( -2*dimDev^2 ) )
		RFMatrix expM = subtractedM.array().square().cwiseQuotient( devs.array().square() * -2 ).array().exp(); 

		// multiply dimensions in row and normalize the resulting vector
		RFVector heightV = expM.rowwise().prod();
		double sum = heightV.sum();
		heightV = heightV / sum;
		return heightV;
	}

	/************************************************************************/
	/* SETTERS                                                                     */
	/************************************************************************/
	//Manually specify all RFs
	void setRFs( const RFMatrix& _centers, const RFMatrix& _devs ) {
		setCenters(_centers);
		setDevs(_devs);
	}

	//Set evenly-spaced grid of RFs, where stDevs = 1/RFsPerDimension
// 	void makeRFGrid( const DimArray& RFsPerDim ){
// 		if( RFsPerDim.minCoeff() <= 0 ) throw MyError("Error, need at least 1 RF per Dimension", __LINE__);
// 		if( RFsPerDim.prod() != numRFs ) throw MyError("Error, need " + strCast(numRFs) +
// 			" RFs, invalid number: ", RFsPerDim.prod(), __LINE__);
// 
// 		//Deviations
// 		DimArray devs = RFsPerDim.cwiseInverse(); //each elem is 1/elem
// 		setDevs(devs);
// 
// 		//Centers
// 		for( int d = 0; d < numDims; d++ ){
// 			for( int i = 0; i < RFsPerDim(d); i++ ){
// 
// 			}
// 		}
// 	}

	//Set Centers
	void setCenters( const RFMatrix& _centers ) { centers = _centers; }

	//Set unique non-circular devs for stretched/squashed RFs
	void setDevsUniqueStretched( const RFMatrix& _devs ) {
		if( _devs.minCoeff() <= 0 ) throw MyError("Error, deviation must be > 0", __LINE__);

		devs = _devs;
	}

	//Set uniform non-circular devs for identical stretched/squashed RFs
	void setDevsUniformStretched( const DimArray& _devs ) {
		if( _devs.minCoeff() <= 0 ) throw MyError("Error, deviation must be > 0", __LINE__);

		devs = _devs.colwise().replicate( numRFs );
	}

	//Set unique circular standard deviations
	void setDevsUniqueCircular( const RFVector& _devs ) { 
		if( _devs.minCoeff() <= 0 ) throw MyError("Error, deviation must be > 0", __LINE__);

		devs = _devs.rowwise.replicate( numDims ); 
	}

	//Set uniform circular standard deviations
	void setDevsUniformCircular( double deviation ) { 
		if( deviation <= 0 ) throw MyError("Error, deviation must be > 0", __LINE__);

		devs.setConstant(deviation); 
	}

private:

	RFMatrix centers; //Each row has center of an RF
	RFMatrix devs; //Each row has standard deviations/widths of an RF. 
};