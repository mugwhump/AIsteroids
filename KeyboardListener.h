#pragma once
#include <map>
#include "InputDirection.h"

// struct cmp_char{
// 		bool operator()(char a, char b){
// 			return a < b;
// 		}
// };


// Interface that listens for input on a given set of keys
class KeyboardListener {
public:
	KeyboardListener(void);
	virtual ~KeyboardListener(void);

	void charPressed(char c); //char was pressed
	void charReleased(char c); //char was released
	void specialPressed(int key); //special key was pressed. (checks if listened for)
	void specialReleased(int key); //special key was pressed

	void addChar(char c, eInput::Input in); //add char to ones listening for
	void addSpecial(int key, eInput::Input in); //add special key to ones listening for

protected:
	bool listensForChar(char c);
	bool listensForSpecial(int key);

	virtual void VKPressed(eInput::Input in);
	virtual void VKReleased(eInput::Input in);

	std::map<char, eInput::Input>* myChars;

	std::map<int, eInput::Input>* mySpecials;
};

