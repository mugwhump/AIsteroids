#include "AI_ReceptiveFields.h"

#include "StringUtil.h"
//#include <function>
#include <iostream>


//private default constructor
RFN::RFN() : numRFs(0), numDims(0) {}

RFN::RFN(int nRFs, int nDims) : numRFs(nRFs), numDims(nDims) {

}


/************************************************************************/
/* GETTING VALUES                                                                     */
/************************************************************************/

RFN::RFVector RFN::getHeights(const DimArray& slice) {
	validateArray(slice);
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
/* RF CONSTRUCTION                                                                     */
/************************************************************************/

void RFN::makeRFGrid(const IntArray& RFsPerDim) {
	if( RFsPerDim.size() != numDims ) throw MyError("Error, argument to makeRFGrid of incorrect size.", __LINE__);
	if( RFsPerDim.minCoeff() <= 0 ) throw MyError("Error, need at least 1 RF per Dimension", __LINE__);
	if( RFsPerDim.prod() != numRFs ) throw MyError("Error, need " + strCast(numRFs) +
		" RFs, invalid number: ", RFsPerDim.prod(), __LINE__);

	//Deviations
	DimArray devs = RFsPerDim.cast<double>().cwiseInverse(); //each elem is 1/elem
	setDevsUniformStretched(devs);

	//Centers
	IntArray currentRF(numDims); // has index in each dimension of current RF
	currentRF.setZero();

	DimArray centerSeparations = RFsPerDim.cast<double>().cwiseInverse(); //distance between each center
	DimArray centerOffsets = centerSeparations / 2; //offset of first center
	centers.resize(numRFs, numDims);

	for( int i = 0; i < numRFs; i++ ){		
		// create current RF center
		centers.row(i) = centerOffsets + centerSeparations.cwiseProduct( currentRF.cast<double>() );
// 		std::cout << "Made center at " << centers.row(i) << std::endl;

		// increase current counter
		int carryColumn = numDims - 1;
		bool carryOver = true;

		while (carryOver && carryColumn >= 0) {
			currentRF(carryColumn) += 1;

			// stop looping if current RF is correct
			if( currentRF(carryColumn) < RFsPerDim(carryColumn) ){
				carryOver = false;
			}
			else{
				currentRF(carryColumn) = 0; //add it to the next column, next sub-array
				carryColumn -= 1;
			}
		}
	}
}

void RFN::makeRFGrid( int RFsInDim1 ) {
	IntArray numRFs(1);
	numRFs << RFsInDim1;
	makeRFGrid(numRFs);
}
void RFN::makeRFGrid(int RFsInDim1, int RFsInDim2) {
	IntArray numRFs(2);
	numRFs << RFsInDim1, RFsInDim2;
	makeRFGrid(numRFs);
}
void RFN::makeRFGrid(int RFsInDim1, int RFsInDim2, int RFsInDim3) {
	IntArray numRFs(3);
	numRFs << RFsInDim1, RFsInDim2, RFsInDim3;
	makeRFGrid(numRFs);
}


/************************************************************************/
/* SETTERS                                                                     */
/************************************************************************/

void RFN::setRFs(const RFMatrix& _centers, const RFMatrix& _devs) {
	setCenters(_centers);
	setDevsUniqueStretched(_devs);
}

void RFN::setCenters(const RFMatrix& _centers) {
	validateMatrix(_centers);

	centers = _centers;
}

void RFN::setDevsUniqueStretched(const RFMatrix& _devs) {
	validateMatrix(_devs);
	if( _devs.minCoeff() <= 0 ) throw MyError("Error, deviation must be > 0", __LINE__);

	devs = _devs;
}

void RFN::setDevsUniformStretched(const DimArray& _devs) {
	validateArray(_devs);
	if( _devs.minCoeff() <= 0 ) throw MyError("Error, deviation must be > 0", __LINE__);

	devs = _devs.colwise().replicate( numRFs );
}

void RFN::setDevsUniqueCircular(const RFVector& _devs) {
	validateVector(_devs);
	if( _devs.minCoeff() <= 0 ) throw MyError("Error, deviation must be > 0", __LINE__);

	devs = _devs.rowwise().replicate( numDims );
}

void RFN::setDevsUniformCircular(double deviation) {
	if( deviation <= 0 ) throw MyError("Error, deviation must be > 0", __LINE__);

	devs.setConstant(deviation);
}

/************************************************************************/
/* MATRIX DIMENSION CHECKING                                                                     */
/************************************************************************/

void RFN::validateMatrix(const RFMatrix& matrix) const {
	assert( matrix.cols() == numDims && matrix.rows() == numRFs );
}

void RFN::validateVector(const RFVector& vector) const {
	assert( vector.size() == numRFs );
}

void RFN::validateArray(const DimArray& array) const {
	assert( array.size() == numDims );
}
