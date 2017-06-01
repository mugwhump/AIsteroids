
#include "StringUtil.h"
#include "MyError.h"
#include <boost/date_time.hpp>
#include <iostream>


std::string currentTimeAsString() {
	using namespace boost::posix_time;
	using namespace boost::gregorian;

	//get the current time from the clock -- one second resolution
	ptime now = second_clock::local_time();
	std::string result = to_simple_string(now);
	//replace colons and spaces
	replace( result.begin(), result.end(), ':', '-' );
	replace( result.begin(), result.end(), ' ', '_' );
	return result;
}


std::string getStringFromConsole() {
	std::string result;
	std::getline(std::cin, result);
	return result;
}


std::string getStringFromConsole(const std::string& prompt) {
	std::cout << prompt << std::endl << ">>";
	return getStringFromConsole();
}

//Get integer value in given range
int getIntFromConsole(int lowInclusive, int highInclusive) {
	if( lowInclusive > highInclusive ) throw MyError("Error in getIntFromConsole, lowInclusive > highInclusive", __LINE__);

	int result;
	std::string s;
	std::getline(std::cin, s);

	try{
		result = boost::lexical_cast<int>(s);
	}
	catch( boost::bad_lexical_cast& ){
		std::cout << "Badly formatted int! Enter again" << std::endl << ">>";
		return getIntFromConsole( lowInclusive, highInclusive );
	}

	if( result < lowInclusive || result > highInclusive ){
		std::cout << "Error, please enter an integer between " << lowInclusive << " and " << highInclusive << std::endl << ">>";
		return getIntFromConsole( lowInclusive, highInclusive );
	}

	return result;
}

int getIntFromConsole(const std::string& prompt, int lowInclusive, int highInclusive) {
	std::cout << prompt << std::endl << ">>";
	return getIntFromConsole( lowInclusive, highInclusive );
}

bool getYesNoFromConsole(std::string ynPrompt) {
	std::cout << ynPrompt << " (y/n)" << std::endl << ">>";

	std::string response;
	std::getline( std::cin, response );
	return ( response != "n" );
}
