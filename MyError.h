#pragma once
#include <string>
#include <boost/lexical_cast.hpp>
#include <exception>

class MyError: public std::runtime_error 
{
public: 
	MyError(const std::string& msg, int line): 
	std::runtime_error(msg + " on line " + boost::lexical_cast<std::string>(line)) 
	{} 
	//value for a whatever variable
	template<typename T>
	MyError(const std::string& msgAndVarName, T varVal, int line): 
	std::runtime_error(msgAndVarName +  boost::lexical_cast<std::string>(varVal) + 
		" on line " + boost::lexical_cast<std::string>(line)) 
	{} 

}; 

class MatlabError: public MyError
{
public: 
	MatlabError(const std::string& msg, int line): MyError(msg, line)
	{} 
	//value for a float variable
	template<typename T>
	MatlabError(const std::string& msgAndVarName, T varVal, int line): MyError(msgAndVarName, varVal, line)
	{} 
}; 

class NumericalError: public MyError
{
public: 
	NumericalError(const std::string& msg, int line): MyError(msg, line)
	{} 
	//value for a float variable
	template<typename T>
	NumericalError(const std::string& msgAndVarName, T varVal, int line): MyError(msgAndVarName, varVal, line)
	{} 
}; 

class IOError: public MyError
{
public: 
	IOError(const std::string& msg, int line): MyError(msg, line)
	{} 
	//value for a float variable
	template<typename T>
	IOError(const std::string& msgAndVarName, T varVal, int line): MyError(msgAndVarName, varVal, line)
	{} 
}; 