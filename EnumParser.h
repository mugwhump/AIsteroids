#pragma once;
#include <string>
#include <map>
#include <exception>

template <typename T>
class EnumParser
{
public:
	EnumParser() {}

	//add element to bimap
	void put(const std::string& s, const T& val) {
		//enumMap.left.insert(boost::bimap< std::string, int >::left_value_type(s, val));
		stringKeys[s] = val;
		enumKeys[val] = s;
	}

	//look in enumMap for value corresponding to string
	T stringToEnum(const std::string &s) const { 
		std::map <std::string, T>::const_iterator iValue = stringKeys.find(s);
		if (iValue  == stringKeys.end())
			throw std::exception("Error in stringToEnum, string not found!");
		return iValue->second;
	}

	std::string enumToString(const T& value) {
		//return enumKeys[value];
		std::map <T, std::string>::const_iterator iValue = enumKeys.find(value);
		if (iValue  == enumKeys.end())
			throw std::exception("Error in enumToString, enum not found!");
		return iValue->second;
	}

	//get all strings in format "{string, string, string...}"
	std::string getAllStringsInBrackets(){
		auto it=stringKeys.begin();
		std::string result = "{" + (*it).first;

		for ( it++; it != stringKeys.end(); it++ ) {
			result += ", " + (*it).first ;
		}

		result += "}";
		return result;
	}

private:
	std::map<std::string, T> stringKeys;
	std::map<T, std::string> enumKeys;
	//boost::bimap<std::string, T> enumMap;
	//typedef boost::bimap< std::string, int >::value_type vType;
};

//enum SomeEnum
//{
//	Value1,
//	Value2
//};
//
//enum OtherEnum
//{
//	Value3, 
//	Value4
//};
//EnumParser<OtherEnum>::EnumParser()
//{
//	enumMap["Value3"] = Value3;
//	enumMap["Value4"] = Value4;
//}
//
//int main()
//{
//	EnumParser<SomeEnum> parser;
//	cout << parser.ParseSomeEnum("Value2");
//}