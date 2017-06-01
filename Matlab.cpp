#include "Matlab.h"
#include "MyError.h"

#include <iostream>
#include <float.h>


Engine* Matlab::myEngine = NULL; //must initialize here
char Matlab::buffer[] = {0};
bool Matlab::printOutputs = false;


Engine* Matlab::getEngine() {
	if(myEngine == NULL){
		myEngine = engOpen("\0");

		if(myEngine == NULL){
			throw MatlabError("Error, cannot open engine", __LINE__);
		}

		//buffer = new char[BUFFSIZE];
	}

	return myEngine;
}

void Matlab::closeEngine() {
	engClose(myEngine);
	//delete buffer;
}

void Matlab::destroyArray(mxArray* array) {
	mxDestroyArray(array);
}

void Matlab::eval(const std::string& cmd) {
	if( engEvalString(getEngine(), cmd.c_str()) == 1) {
		throw MatlabError("Error in Matlab::eval, failed to evaluate string: " + cmd, __LINE__);
	}
	if(printOutputs && buffer[0] != 0){ //don't print buffer if nothing's in it.
		std::cout << buffer << std::endl;
	}
}

void Matlab::setOutputToConsole(bool isToConsole) {
	if (isToConsole	) {
		printOutputs = true;
		buffer[BUFFSIZE] = '\0'; //make sure it's null-terminated
		engOutputBuffer(getEngine(), buffer, BUFFSIZE);
	} 
	else {
		printOutputs = false;
		engOutputBuffer(getEngine(), NULL, 0); //Turn off output buffer.
	}
}

void Matlab::mwekaDirectory() {
	eval( "cd 'C:/Program Files/MATLAB/R2011a/toolbox/mweka/'" );
}

void Matlab::linearLearnerDirectory() {
	eval( "cd 'C:/Program Files/MATLAB/R2011a/'" );
}

bool Matlab::IsFiniteNumber(double x) {
	bool result = (x < DBL_MAX && x > -1.0e63 && x==x);
	return result;
}
