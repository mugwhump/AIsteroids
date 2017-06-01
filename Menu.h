#pragma once

#include "StringUtil.h"

#include <string>
#include <vector>
#include <functional>

//Pure virtual class for a menu item. Items are either nodes (which contain more items) or leafs (which do stuff)
class MenuItem{

public:
	MenuItem();
	virtual ~MenuItem();

	std::string getDisplayString();
	void setDisplayString( const std::string& s );

	virtual void visit() = 0;
	virtual bool isLeaf() = 0;

protected:
	// Methods for input and output
	std::string displayString;
};

/************************************************************************/
/* MENU NODES                                                                     */
/************************************************************************/

// Menu item containing other menu items
class MenuNode : public MenuItem {
public:
	explicit MenuNode(std::string dispStr);
	virtual ~MenuNode();

	void addChild(MenuItem* child);
	std::vector<MenuItem*> getChildren() const; //Returns COPY of children
	int getNumChildren() const {return static_cast<int>(myChildren.size());}

	void mergeAndDelete( MenuNode* other ); //take other's children and delete other
	void prune();

	virtual void visit(); // show child node, prompt user to choose one
	virtual bool isLeaf() {return false;}

private:	
	MenuNode(){}
	std::vector<MenuItem*> myChildren;
};


/************************************************************************/
/* LEAFS                                                                     */
/************************************************************************/

// Menu item with no children, usually calls some function when selected.
class MenuLeafAbstract : public MenuItem {
public:
	virtual ~MenuLeafAbstract(){}
	virtual void visit() = 0; // Pure virtual, do whatever
	virtual bool isLeaf() {return true;}
};

//Functor template class. Construct with function pointer and instance of invoking class.
template <class T>
class MenuLeaf : public MenuLeafAbstract {
public:
	MenuLeaf(std::string dispStr, T* obj, void (T::*funcPtr)()) {
		displayString = dispStr;
		functionPointer = funcPtr;
		owner = obj;
	}
	virtual ~MenuLeaf(){}

	virtual void visit() {
		(owner->*functionPointer)();
	}

private:
	MenuLeaf(){}
	void (T::*functionPointer)(); //Pointer to a void method of owner
	T* owner; //Object owning this functor
};


/************************************************************************/
/* LAMBDA MENU LEAF                                                                     */
/************************************************************************/
class Leaf : public MenuLeafAbstract {
public:
	Leaf(std::string dispStr, std::function<void ()> func) {
		displayString = dispStr;
		myFunc = func;
	}
	virtual ~Leaf(){}

	virtual void visit() {
		myFunc();
	}

private:
	Leaf(){}
	std::function<void ()> myFunc; //Pointer to a void method of owner
};


/************************************************************************/
/* STRING LEAF                                                                     */
/************************************************************************/

//Takes function requiring string, prompts user for it.
template <class T>
class MenuLeafStringArg : public MenuLeafAbstract {
public:
	MenuLeafStringArg(std::string dispStr, std::string promptStr, T* obj, void (T::*funcPtr)(const std::string& arg)) {
		displayString = dispStr;
		promptString = promptStr;
		functionPointer = funcPtr;
		owner = obj;
	}
	virtual ~MenuLeafStringArg(){}

	//Upon visit, prompt user for input argument
	virtual void visit() {
		std::string arg = getStringFromConsole(promptString);
		(owner->*functionPointer)(arg);
	}

private:
	MenuLeafStringArg(){}
	void (T::*functionPointer)(const std::string& arg); //Pointer to a void method of owner
	T* owner; //Object owning this functor
	std::string promptString; //Shown to user when you ask for function argument
};

/************************************************************************/
/* INT LEAF                                                                     */
/************************************************************************/

//Takes function requiring int, prompts user for it.
template <class T>
class MenuLeafIntArg : public MenuLeafAbstract {
public:
	MenuLeafIntArg(std::string dispStr, std::string promptStr, int _low, int _high, T* obj, void (T::*funcPtr)(int arg)) {
		displayString = dispStr;
		promptString = promptStr;
		low = _low;
		high = _high;
		functionPointer = funcPtr;
		owner = obj;
	}
	virtual ~MenuLeafIntArg(){}

	//Upon visit, prompt user for input argument
	virtual void visit() {
		int arg = getIntFromConsole(promptString, low, high);
		(owner->*functionPointer)(arg);
	}

private:
	MenuLeafIntArg(){}
	void (T::*functionPointer)(int arg); //Pointer to a void method of owner
	T* owner; //Object owning this functor
	std::string promptString; //Shown to user when you ask for function argument
	int low;
	int high;
};


// Mixin for classes with menu options
class ClassWithMenuItems {
public:
	virtual ~ClassWithMenuItems();
	virtual MenuItem* getNewMenuRoot() = 0; //get item at root of menu. REMEMBER TO DELETE.
	//virtual void makeMenuRoot() = 0; //called before getMenuRoot()

private:
	//MenuItem* myRoot;
};