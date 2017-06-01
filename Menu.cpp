#include "Menu.h"

#include "StringUtil.h"

#include "boost/foreach.hpp"
#include <iostream>


/************************************************************************/
/* MENU ITEM                                                                     */
/************************************************************************/

MenuItem::MenuItem() {
}

MenuItem::~MenuItem() {
}

std::string MenuItem::getDisplayString() {
	return displayString;
}

void MenuItem::setDisplayString(const std::string& s) {
	displayString = s;
}



/************************************************************************/
/* MENU NODE                                                                     */
/************************************************************************/


MenuNode::MenuNode(std::string dispStr) {
	displayString = dispStr + "...";
}

MenuNode::~MenuNode() {
	BOOST_FOREACH(MenuItem* item, myChildren){
		delete item;
	}
}


//Shows all children and prompts user to select one. Prunes itself first.
void MenuNode::visit() {
	if( getNumChildren() == 0 ) {
		std::cout << "Empty Menu." << std::endl;
		return;
	}

	prune();

	//Display children
	std::cout << std::endl << "Select option:" << std::endl;
	for( int i = 0; i < getNumChildren(); i++ ){
		std::cout << i+1 << ")" 
			<< myChildren[i]->getDisplayString() << std::endl;
	}
	//Display close menu option
	std::cout << getNumChildren()+1 << ")Close" << std::endl;

	//Get user to choose one
	std::cout << ">>";
	int selection = getIntFromConsole( 1, getNumChildren()+1 );

	//Let them close menu
	if( selection == getNumChildren()+1 ) return;

	//Visit it
	myChildren[selection-1]->visit();
}


//Add child if it's not null
void MenuNode::addChild(MenuItem* child) {
	if( child != NULL && child != this ) {
		myChildren.push_back(child);
	}
}


std::vector<MenuItem*> MenuNode::getChildren() const {
	return myChildren;
}


//If only child is node, steal its children and kill it
void MenuNode::prune() {
	if( getNumChildren() == 1 && !myChildren[0]->isLeaf() ){
		MenuNode* onlyChild = (MenuNode*)myChildren[0];
		std::vector<MenuItem*> newChildren = onlyChild->getChildren();
		//Clear child's children, so it doesn't delete them when we delete it
		onlyChild->myChildren.clear();
		delete onlyChild;
		myChildren = newChildren;
	}
}


void MenuNode::mergeAndDelete(MenuNode* other) {
	myChildren.insert( myChildren.end(), other->myChildren.begin(), other->myChildren.end() );
	other->myChildren.clear(); //so they're not deleted when it's deleted
	delete other;
}


/************************************************************************/
/* CLASS WITH MENU ITEMS                                                                     */
/************************************************************************/

ClassWithMenuItems::~ClassWithMenuItems() {
	//delete myRoot;
}

// 
// MenuItem* ClassWithMenuItems::getMenuRoot() {
// 	return myRoot;
// }
