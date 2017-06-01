#pragma once

#include <string>
#include <vector>

std::string currentTimeAsString();

std::string getStringFromConsole();
std::string getStringFromConsole(const std::string& prompt);
int getIntFromConsole(int lowInclusive, int highInclusive);
int getIntFromConsole( const std::string& prompt, int lowInclusive, int highInclusive);
bool getYesNoFromConsole( std::string ynPrompt );


template<typename T>
std::string strCast( T arg ){
	return boost::lexical_cast<std::string>(arg);
}

template<typename T>
std::string vecToStr( std::vector<T> vec ){
	std::ostringstream s;
	s << "[" ;
	for( int i = 0; i < vec.size(); i++ ){
		s << (( i == 0) ? "" : ", ") << vec[i];
	}
	s << "]" ;
	return s.str();
}


template<typename T>
std::string vecVecToStr( std::vector< std::vector<T> > vecVec ){
	std::string result;

	for( int i = 0; i < vecVec.size(); i++ ){
		result += (( i == 0) ? "" : "\n") + vecToStr(vecVec[i]);
	}
	return result;
}