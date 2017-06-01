#pragma once

#include "engine.h"
#include "MyError.h"
#include <vector>
#include <string>
#include <limits>

// static class to manage the matlab engine and provide helpers.
// Opens an engine automatically when needed. Close engine manually.
class Matlab {
public:

	static void closeEngine(); // Call before program closes.
	static void destroyArray(mxArray* array); // Must be called once done with array
	static void eval(const std::string& cmd); // Evalutes command in Matlab environment.

	static void setOutputToConsole(bool isToConsole);
	//Change matlab working directories
	static void mwekaDirectory();
	static void linearLearnerDirectory();

	//TEMPLATE FUNCTIONS
	template <typename T> 
	static void putVectorAsMxArray(const std::vector<T>& vector, 
														const std::string& varName,
														int numRows = 1) {
		//Create C Array
		const int numElems = static_cast<const int>(vector.size());
		const int numCols = static_cast<const int>(floor( numElems / (double)numRows ));
		//Check that sizes match
		if( numRows * numCols != numElems ){
			throw MatlabError("Error creating Matlab Matrix, a " + 
				boost::lexical_cast<std::string>(numRows) + " by " +
				boost::lexical_cast<std::string>(numCols) + " matrix cannot be made from vector sized ",
				numElems, __LINE__ );
		}
		const T* array = &vector[0]; //fine since vector elements are stored continuously

		//Create Matlab Array equivalent, copy C array in
		mxArray* mlArray;
		// numCols and numRows DELIBERATELY mixed up since Matlab is Column-major! Transpose will fix!
		mlArray = mxCreateNumericMatrix(numCols, numRows, getMxType(vector[0]), mxREAL);
		memcpy( (void *)mxGetPr(mlArray), (void *)array, numElems * sizeof(T) );

		//Place the variable T into the MATLAB workspace
		engPutVariable( getEngine(), varName.c_str(), mlArray );
		
		eval(varName + " = " + varName + "';");

		mxDestroyArray(mlArray);
	}

	// Returns matlab array with given name inside the given vector
	template <typename T>
	static void getMxArrayAsVector(const std::string& varName, std::vector<T>& resultVector){

		mxArray* mlResult = engGetVariable( getEngine(), varName.c_str() );
		if( mlResult == NULL) {
			throw MatlabError("Error in getMxArrayAsVector, failed to get variable: " + varName, __LINE__);
		}

		const size_t numElems = mxGetNumberOfElements(mlResult);
		resultVector.resize(numElems);
		T* vectorPtr = &resultVector[0]; //must do after reserving the size
		// Copy mxArray over
		memcpy((void *)vectorPtr, (void *)mxGetPr(mlResult), numElems*sizeof(T));
		// Destroy mxArray

		destroyArray(mlResult);
	}


	// Returns matlab matrix with given name inside the given vector of vectors
	template <typename T>
	static void getMxMatrixAsVectors(const std::string& varName, std::vector<std::vector<T>>& resultVector, int numCols){

		//Matrices are column major! Must transpose first.
		eval(varName + " = " + varName + "';");

		mxArray* mlResult = engGetVariable( getEngine(), varName.c_str() );
		if( mlResult == NULL) {
			throw MatlabError("Error in getMxMatrixAsVectors, failed to get variable: " + varName, __LINE__);
		}

		//Check that sizes match
		const size_t numElems = mxGetNumberOfElements(mlResult);
		const int numRows = static_cast<const int>(floor( numElems / (double)numCols ));
		if( numRows * numCols != numElems ){
			throw MatlabError("Error reading Matlab Matrix, a " + 
				boost::lexical_cast<std::string>(numRows) + " by " +
				boost::lexical_cast<std::string>(numCols) + " vector cannot be made from matrix sized ",
				numElems, __LINE__ );
		}

		resultVector.clear();
		resultVector.reserve(numRows);

		T* rowArray = new T[numCols];
		T* basePointer = (T *)mxGetPr(mlResult); //is this allowed?

		for( int i = 0; i < numRows; i++ ){
			int startingIndex = i * numCols;
			T* startingPointer = basePointer + startingIndex;
			// Copy mxArray over
			try {
				memcpy((void *)rowArray, startingPointer, (numCols - 1)*sizeof(T));
			}
			catch (std::exception& e) {
				std::cout << "-------Error caught  ----- \n" << e.what() << std::endl;
			}
			//Stop last value from being turned into infinity
			double shitFuckValue = rowArray[numCols-1];
			if(!IsFiniteNumber(shitFuckValue) ) {
				rowArray[numCols-1] = 1.0; //THIS HAPPENS FOR EVERY GODDAMN ONE, ALL CORRUPTED
			}

			resultVector.push_back( std::vector<T>(rowArray, rowArray+numCols) );
		}

		// Destroy mxArray
		delete[] rowArray;
		destroyArray(mlResult);
	}

private:
//Methods
	Matlab(void) {}; //no instantiation allowed
	~Matlab(void) {};

	static Engine* getEngine(); //open engine if none currently open

	static mxClassID getMxType(char dummy) {return mxINT8_CLASS;}
	static mxClassID getMxType(int dummy) {return mxINT32_CLASS;}
	static mxClassID getMxType(float dummy) {return mxSINGLE_CLASS;}
	static mxClassID getMxType(double dummy) {return mxDOUBLE_CLASS;}
	template <typename T>
	static mxClassID getMxType(T dummy) {return mxUNKNOWN_CLASS;} //unhandled types

	static bool IsFiniteNumber(double x);   

//Data
	static const int BUFFSIZE = 511; //size of buffer for output
	static char buffer[BUFFSIZE+1];
	static bool printOutputs;
	static Engine* myEngine; //Shared. Can only have one open.
	//TODO: keep track of Learners in matlab workspace
};

