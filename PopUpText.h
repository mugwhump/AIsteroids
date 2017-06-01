#pragma once
#include "xyobj.h"

#include "RGBA.h"
#include <string>

//Class for small piece of text that flashes and disappears
class PopUpText : public XYObj {
public:
	PopUpText( std::string text, Position p, Velocity v, RGBA col, int life = defaultLifeTime );
	~PopUpText(void);

	void render();
	void update();

	bool isExpired() {return lifetime <= 0;}

private:
	PopUpText(void);

	static const int defaultLifeTime = 30;

	int lifetime;
	std::string myText;
	RGBA myColor;
};

