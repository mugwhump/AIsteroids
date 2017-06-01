#include "PlayData.h"

#include "MyError.h"
#include "Matlab.h"
#include "StringUtil.h"
#include "StateAction.h"

#include <algorithm>
#include <boost/foreach.hpp>
#include <iostream>
#include <fstream>



PlayData::PlayData(void)
{
	init();
}

PlayData::PlayData(int _skipRate) {
	init();
	setSkipRate(_skipRate);
}

//Load data from matlab file.
PlayData::PlayData(const std::string& filename) {
	init();
	readCSV(filename);
}

PlayData::~PlayData(void)
{
}

void PlayData::init() {
	myData.reserve( defaultDataSize );
	setSkipRate(0);
	pushesSkipped = 0;
}

//Push StateAction to back. Might not actually push if skipping is on.
void PlayData::pushData(StateAction sa) {
	if ( pushesSkipped >= skipRate ) {
		myData.push_back( sa );
		pushesSkipped = 0;
	} 
	else {
		pushesSkipped++;
	}
}

//Pushes other playdata to back of data
void PlayData::pushPlayData(const PlayData& other) {
	myData.insert( myData.end(), other.myData.begin(), other.myData.end() );
}

//Chooses newSize random  datapoints to keep. Not very fast.
void PlayData::reduceToSizeRandomly(int newSize) {
	if( newSize > myData.size() ) throw MyError("Error in reduceToSizeRandomly, current size smaller than new size ", newSize, __LINE__ );

	//Get shuffled indices
	std::vector<unsigned int> indices(myData.size());
	iota(indices.begin(), indices.end(), 0);
	std::random_shuffle(indices.begin(), indices.end());

	std::vector<StateAction> newData;
	newData.reserve(newSize);

	for( int i = 0; i < newSize; i++ ){
		newData.push_back( myData[indices[i]] );
	}

	myData = newData;
}

// 
//Reduces to given size, sampling from data uniformly.
void PlayData::reduceToSizeUniformly(int newSize) {
	if( newSize > myData.size() ) throw MyError("Error in reduceToSizeUniformly, current size smaller than new size ", newSize, __LINE__ );

	std::vector<StateAction> newData;
	newData.reserve(newSize);

	double ratio = newSize / static_cast<double>( myData.size() );
	double remainder = 0.0;
	for( int i = 0; i < myData.size(); i++ ){
		remainder += ratio;
		if( remainder >= 1.0 ){
			remainder -= 1.0;
			newData.push_back( myData[i] );
		}
	}

	if( newData.size() < newSize ){
		int missing = newSize - newData.size();
		newData.insert( newData.end(), myData.begin(), myData.begin()+missing );

		if(missing>1) std::cout << "Oops, missing " << missing << " elements in PlayData::reduceToSizeUniformly." << std::endl;
	}

	myData = newData;
}

PlayData PlayData::getReducedToSizeRandomly(int newSize) const {
	PlayData result(*this);
	result.reduceToSizeRandomly(newSize);
	return result;
}

PlayData PlayData::getReducedToSizeUniformly(int newSize) const {
	PlayData result(*this);
	result.reduceToSizeUniformly(newSize);
	return result;
}


void PlayData::clear() {
	myData.clear();
}


//Transforms this data into a vector of doubles.
std::vector<double> PlayData::getDoubleVec() const {
	std::vector<double> result;
	result.reserve( myData.size() * StateAction::getNumAttributes() );

	BOOST_FOREACH( const StateAction& sa, myData ){
		std::vector<double> saVec = sa.getDoubleVec();
		result.insert( result.end(), saVec.begin(), saVec.end() );
	}
	return result;
}


const std::vector<StateAction>& PlayData::getStateActions() const {
	return myData;
}


//skips this many pushes between actual pushes. 0 = no skipping.
void PlayData::setSkipRate(int sr) {
	if( sr < 0 ){
		std::cout << "Error, skip rate must be greater than 0!" << std::endl;
	}
	else{
		skipRate = sr;
	}
}

/************************************************************************/
/* MENU                                                                     */
/************************************************************************/


void PlayData::promptSkipRate() {
	int newRate = getIntFromConsole("Enter number of frames to skip between recorded frames", 0, 500);
	setSkipRate(newRate);
}


void PlayData::writeToMatlabFile() {
	std::string filename = getStringFromConsole("Enter filename for data: ");

	std::vector<double> DataM = getDoubleVec();
	std::string dataStr = "DataM"; //WRITE AND READ MUST USE SAME WORKSPACE NAMES
	//Put in Matlab workspace
	try {
		Matlab::putVectorAsMxArray( DataM, dataStr, getNumInstances() );
		Matlab::eval( "save( '" + filename + "', '" + dataStr + "' );" );

		std::cout << "Saved data to " << filename << std::endl;
	}
	catch (MatlabError& e) {
		std::cout << "Error, could not save data. Error:\n" << e.what() << std::endl;
	}
}

void PlayData::readFromMatlabFile(const std::string& filename) {
	std::vector<std::vector<double>> data;
	std::string dataStr = "DataM"; //WRITE AND READ MUST USE SAME WORKSPACE NAMES

	try {
		//load data
		Matlab::eval( "load( '" + filename + "', '" + dataStr + "' );");
		Matlab::getMxMatrixAsVectors( dataStr, data, StateAction::getNumAttributes() );
		//parse data into stateactions
		myData.clear();
		myData.reserve( data.size() );
		BOOST_FOREACH( const std::vector<double>& vec, data ){
			myData.push_back( StateAction(vec) );
		}

		std::cout << "Loaded data from " << filename << std::endl;
	}
	catch (MatlabError& e) {
		std::cout << "Cannot to load data. Error:\n" << e.what() << std::endl;
	}
}


MenuItem* PlayData::getNewMenuRoot() {
	MenuNode* node = new MenuNode( "Recorded data options" );
	node->addChild( new MenuLeaf<PlayData>("Write data", this, &PlayData::writeCSV) );
	node->addChild( new MenuLeafStringArg<PlayData>("Load data", "Enter filename", this, &PlayData::readCSV) );
	node->addChild( new MenuLeaf<PlayData>("Clear data", this, &PlayData::clear) );
	node->addChild( new MenuLeaf<PlayData>("Set recording rate", this, &PlayData::promptSkipRate) );
	node->addChild( new MenuLeafIntArg<PlayData>("Reduce size uniformly", "Enter size between 0 and "+strCast(getNumInstances()) + ": ",
		0, getNumInstances(), this, &PlayData::reduceToSizeUniformly) );

	return node;
}


/************************************************************************/
/* CSVs                                                                     */
/************************************************************************/


void PlayData::writeCSV() {
	using namespace std;
	string filename = getStringFromConsole("Enter filename for data: ");
	filename += ".csv";

	ofstream out(filename.c_str());
	if (out.fail())  { 
		cout << "Cannot write to " << filename <<endl; 
		return; 
	}

	std::cout << "Writing to " << filename << "...";

	BOOST_FOREACH( const StateAction& sa, myData ){
		out << sa.dataString() << endl;
	}

	cout << "Done!" << endl;

	out.close();
}


void PlayData::readCSV(const std::string& filename) {
	using namespace std;

	vector<double> row;
	string line;
	string fname = filename+".csv";
	ifstream in(fname.c_str());
	if (in.fail())  { cout << "File not found" <<endl; return; }

	std::cout << "Reading " << fname << "...";

	myData.clear();
	myData.reserve(10000); //Do something to guess #instances from file size

	while(getline(in, line)  && in.good() ) {
		csvline_populate(row, line, ',');
		myData.push_back( StateAction(row) );
	}
	in.close();
	std::cout << "Done!" << std::endl;
}

//Read string into vector of doubles
//from http://www.zedwood.com/article/112/cpp-csv-parser
void PlayData::csvline_populate(std::vector<double> &record, const std::string& line, char delimiter) {
	int linepos=0;
	int inquotes=false;
	char c;
	int linemax=line.length();
	std::string curstring;
	record.clear();

	try {
		while(line[linepos]!=0 && linepos < linemax)
		{
	
			c = line[linepos];
	
			if (!inquotes && curstring.length()==0 && c=='"')
			{
				//beginquotechar
				inquotes=true;
			}
			else if (inquotes && c=='"')
			{
				//quotechar
				if ( (linepos+1 <linemax) && (line[linepos+1]=='"') ) 
				{
					//encountered 2 double quotes in a row (resolves to 1 double quote)
					curstring.push_back(c);
					linepos++;
				}
				else
				{
					//endquotechar
					inquotes=false; 
				}
			}
			else if (!inquotes && c==delimiter)
			{
				//end of field
				record.push_back( boost::lexical_cast<double>(curstring) );
				curstring="";
			}
			else if (!inquotes && (c=='\r' || c=='\n') )
			{
				record.push_back( boost::lexical_cast<double>(curstring) );
				return;
			}
			else if (!inquotes && (c==' ' || c=='\t') ) //eat whitespace
			{
				//nop
			}
			else
			{
				curstring.push_back(c);
			}
			linepos++;
		}
		record.push_back( boost::lexical_cast<double>(curstring) );
	}
	catch (boost::bad_lexical_cast&) {
		std::cout << "Bad lexical cast parsing token \"" << curstring << "\"." << std::endl;
	}
	return;
}

int PlayData::getNumInstances() const {
	return myData.size() ;
}
