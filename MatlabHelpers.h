// Functions to assist matlab integration

#include "engine.h"
#include <vector>

template <typename Type>
mxArray* vectorToMxArray(const std::vector<float>& vector) const {
	//Create C Array
	const int numElements = vector.size();
	const float* array = &vector[0];

	//Create Matlab Array equivalent, copy C array in
	mxArray* mlArray;
	mlArray = mxCreateNumericMatrix(1, numElements, mxSINGLE_CLASS, mxREAL);
	memcpy( (void *)mxGetPr(mlArray), (void *)array, numElements * sizeof(float) );

	return mlArray;
}