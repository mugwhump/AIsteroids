#include "AI_Waffle.h"
#include "PlayData.h"
#include "StateAction.h"
#include "boost\foreach.hpp"
#include "MyError.h"
#include "waffles-2012-08-31-source\waffles\src\GClasses\GDom.h"
#include <fstream>

using namespace GClasses;


AI_Waffle::AI_Waffle(Controller* controller, int nIn, int nOut )
	: AI(controller, nIn, nOut), myRand(0) {
// 		init(); child init must be called first
}

AI_Waffle::~AI_Waffle(void){
	delete waffle; //memleak???? No, GSupervisedLearner has virtual destructor
	waffle = NULL;
}

void AI_Waffle::init() {
	haveTrained = false;
// 	if( waffle->canTrainIncrementally() ){
// 		sp_relation inputRels = new GUniformRelation(numInputs, 0);
// 		sp_relation outputRels;
// 		auto outRels = new GMixedRelation();
// 		outRels->addAttrs(2, 0);//moving
// 		outRels->addAttr(2);//shooting
// 		outputRels = outRels;
// 
// 		dynamic_cast<GIncrementalLearner*>(waffle)->beginIncrementalLearning(
// 			inputRels, outputRels); 
// 		//^supposed to be input/output info? Or so you can track info it makes?
// 	}
}


Action AI_Waffle::getAction(const SimpleState& state) {
	if( !haveTrained ){
		throw MyError("Error, must train your waffle before predicting", __LINE__);
	}
	return getFilteredAction(state);
}

void AI_Waffle::render() {
}

void AI_Waffle::train(const StateAction& sa) {
	updateUserFireRate(sa.getAction());

	if( waffle->canTrainIncrementally() ){
// 		dynamic_cast<GIncrementalLearner*>(waffle)->trainIncremental(
// 			&sa.geStateDoubleVec()[0],
// 			&sa.getAction().getDoubleVec()[0]);
		haveTrained = true;
	}
}

void AI_Waffle::train(const PlayData& data) {
	waffle->train( getInputMatrix(data), getOutputMatrix(data) );
	haveTrained = true;
}

void AI_Waffle::reTrain(const PlayData& data) {
	waffle->clear();
	train(data);
}

void AI_Waffle::saveTo(const std::string& filename) {
	GDom dom;
	dom.setRoot(waffle->serialize(&dom));

	try{
		// create and open a filestream for output
		std::ofstream ofs(filename);
		// write class instance to archive
		dom.writeJson(ofs);
	}
	catch (std::exception& e) {
		std::cout << "Cannot save AI to "+filename+", " << e.what() << std::endl;
	}
}


Action AI_Waffle::getRawAction(const SimpleState& state) {
	std::vector<double> outVec(3);
	waffle->predict( &state.getDoubleVec()[0], &outVec[0] );
	return Action(outVec);
}

Action AI_Waffle::getRawActionAndUpdateVariance(const SimpleState& state) {
	return getRawAction(state);
}

GClasses::GMatrix AI_Waffle::getInputMatrix(const PlayData& data) {
	//say which colums are continuous(0), which are classes(# classes)
	std::vector<size_t> columnAttributes( numInputs, 0 ); //all continuous
	GMatrix matrix( columnAttributes );

	matrix.reserve(data.getNumInstances());

	BOOST_FOREACH( const StateAction& sa, data.getStateActions() ){
		matrix.copyRow( &sa.geStateDoubleVec()[0] );
	}

	return matrix;
}

GClasses::GMatrix AI_Waffle::getOutputMatrix(const PlayData& data) {
	//say which colums are continuous(0), which are classes(# classes)
	std::vector<size_t> columnAttributes( numOutputs, 0 ); //all continuous...
// 	columnAttributes[columnAttributes.size()-1] = 2; //...except shoot, which has 2 values
	//TODO: need some way to safely map shooting to that output...
	GMatrix matrix( columnAttributes );

	matrix.reserve(data.getNumInstances());

	BOOST_FOREACH( const StateAction& sa, data.getStateActions() ){
		matrix.copyRow( &sa.getAction().getDoubleVec()[0] );
	}

	return matrix;
}

/************************************************************************/
/* MENU                                                                     */
/************************************************************************/


MenuItem* AI_Waffle::getNewMenuRoot() {
	throw std::exception("The method or operation is not implemented.");
}

MenuNode* AI_Waffle::getWaffleMenu() {
	MenuNode* node = new MenuNode( "Waffle options" );
	node->mergeAndDelete(getCommonMenuItems());
	return node;
}