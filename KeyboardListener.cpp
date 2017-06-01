#include "KeyboardListener.h"
#include <iostream>
#include <stdexcpt.h>
#include <utility>

using namespace eInput;

KeyboardListener::KeyboardListener(void)
{
	myChars = new std::map<char, Input>();
	mySpecials = new std::map<int, Input>();
}


KeyboardListener::~KeyboardListener(void)
{
}

bool KeyboardListener::listensForChar(char c) {
	return (myChars->find(c) != myChars->end());

	//for(int i=0; i<numChars; i++){
	//	if(myChars[i] == c){
	//		return true;
	//	}
	//}
	//return false;
}
bool KeyboardListener::listensForSpecial(int key) {
	return (mySpecials->find(key) != mySpecials->end());
}

void KeyboardListener::addChar(char c, Input in) {
	myChars->insert(myChars->end(), std::pair<char,Input>(c,in));
	//if(numChars < arraySize){
	//	myChars[numChars] = c;
	//	numChars++;
	//}
	//else throw length_error("Can't add char "+c+" to listen to, too many chars!");
}
void KeyboardListener::addSpecial(int key, Input in) {
	mySpecials->insert(mySpecials->end(), std::pair<int, Input>(key, in));
}


void KeyboardListener::charPressed(char c) {
	std::map<char,Input>::iterator element = myChars->find(c);
	if(element != myChars->end()){
		VKPressed(element->second);
	}
}
void KeyboardListener::charReleased(char c) {
	std::map<char,Input>::iterator element = myChars->find(c);
	if(element != myChars->end()){
		VKReleased(element->second);
	}
}
void KeyboardListener::specialPressed(int key) {
	std::map<int,Input>::iterator element = mySpecials->find(key);
	if(element != mySpecials->end()){
		VKPressed(element->second);
	}
}
void KeyboardListener::specialReleased(int key) {
	std::map<int,Input>::iterator element = mySpecials->find(key);
	if(element != mySpecials->end()){
		VKReleased(element->second);
	}
}

//Virtual methods, implemented by derived classes
void KeyboardListener::VKPressed(Input in) {
}
void KeyboardListener::VKReleased(Input in) {
}
