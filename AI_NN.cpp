#include "AI_NN.h"
#include "PlayData.h"
#include <GClasses/GRand.h>
#include "waffles-2012-08-31-source/waffles/src/GClasses/GDom.h"

using namespace GClasses;

AI_NN::AI_NN(Controller* controller, int nIn, int nOut)
: AI_Waffle(controller, nIn, nOut) {
	init();
}

AI_NN::AI_NN(Controller* controller, int nIn, int nOut, const PlayData& data, bool autoTune) 
: AI_Waffle(controller, nIn, nOut) {
	init();
	if( autoTune ){
		std::cout << "Autotuning parameters..." << std::endl;
		((GNeuralNet*)waffle)->autoTune( getInputMatrix(data), getOutputMatrix(data) );
		std::cout << "Done!" << std::endl;
	}
	train(data);
}

AI_NN::AI_NN(Controller* controller, int nIn, int nOut, const std::string& filename) 
: AI_Waffle(controller, nIn, nOut) {
	init();
	loadFrom(filename);
}


AI_NN::~AI_NN(void){
}

void AI_NN::init() {
	myType = AIType::NN;
	fireThreshold = .025;
	waffle = new GNeuralNet(myRand);
	nn()->addLayer(numInputs); //autotune put 7 in hidden layer...
	AI_Waffle::init();
}

std::string AI_NN::getString() {
	return AI::getString();
}

void AI_NN::loadFrom(const std::string& filename) {
	try{
		GDom dom;
		dom.loadJson(filename.c_str());
		delete waffle;
		waffle = new GNeuralNet( dom.root(), GLearnerLoader(myRand, true) );
		haveTrained = true;
	}
	catch (std::exception& e) {
		std::cout << "Cannot load AI from "+filename+", " << e.what() << std::endl;
	}
}


MenuItem* AI_NN::getNewMenuRoot() {
	GNeuralNet* nn = (GNeuralNet*)waffle;

	MenuNode* node = new MenuNode( getString() + " options" );
	node->mergeAndDelete( getWaffleMenu() );
	node->addChild(new Leaf("print weights", [nn](){
		nn->printWeights(std::cout);
	}));

	return node;
}
