#pragma once
#include "Menu.h"

#include <vector>


class StateAction;

//Collection of StateActions. Filters, converts, or writes data to file.
class PlayData : ClassWithMenuItems {
public:
	PlayData(void);
	explicit PlayData( int _skipRate );
	explicit PlayData( const std::string& filename );
	~PlayData(void);

	void pushData( StateAction sa );
	void pushPlayData( const PlayData& other );
	void setSkipRate( int sr );

	void reduceToSizeRandomly( int newSize ); 
	PlayData getReducedToSizeRandomly( int newSize ) const;
	void reduceToSizeUniformly( int newSize );
	PlayData getReducedToSizeUniformly( int newSize ) const;
	void clear();

	std::vector<double> getDoubleVec() const; //returns data as vector of doubles
	const std::vector<StateAction>& getStateActions() const;
	int getNumInstances() const;
	bool isEmpty() const { return getNumInstances() == 0; }

	void writeToMatlabFile() ;
	void readFromMatlabFile( const std::string& filename );
	void writeCSV();
	void readCSV( const std::string& filename );
	void promptSkipRate();

	virtual MenuItem* getNewMenuRoot();


private:
	void init();

	int skipRate; //only records one out of every pushesToSkip datapoints, to reduce size. 0 = no skips.
	int pushesSkipped;

	const static int defaultDataSize = 5000; //Starting number of datapoints to reserve.
	std::vector<StateAction> myData; //Oldest states at the front

	void csvline_populate(std::vector<double> &record, const std::string& line, char delimiter);

	//Fill range with increasing values
	template<class ForwardIterator, class T>
	void iota(ForwardIterator first, ForwardIterator last, T value) {
		while(first != last) {
			*first++ = value;
			++value;
		}
	}
};

