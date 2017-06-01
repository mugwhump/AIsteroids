#include "PopUpText.h"

#include "GraphicsUtil.h"
#include <iostream>


PopUpText::PopUpText(void)
{
}

//Position is CENTER position
PopUpText::PopUpText(std::string text, Position p, Velocity v, RGBA col, int life/* = defaultLifeTime*/) 
						: XYObj(p, v), myText(text), myColor(col), lifetime(life) {

	if( lifetime <= 0 ){
		std::cout << "Invalid lifetime " << lifetime << " for PopUpText '" << myText << "'." << std::endl;
		lifetime = defaultLifeTime;
	}
	//Make color transparent
	myColor.setAlpha(.7f);
}


PopUpText::~PopUpText(void)
{
}

void PopUpText::render() {
	if ( lifetime % 4 < 2) {
		myColor.setDrawColorTo();
		DrawStringAtCentered( pos.x, pos.y, myText );
	} 
}

void PopUpText::update() {
	move();
	lifetime--;
}
