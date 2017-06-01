#include "RGBA.h"
#include <GL\freeglut.h>


RGBA::RGBA(void)
{
}

RGBA::RGBA(float white) {
	R = B = G = white;
	A = 1.0f;
}

RGBA::RGBA(float _R, float _G, float _B) : R(_R), G(_G), B(_B) {

	A = 1.0f;
}

RGBA::RGBA(float _R, float _G, float _B, float _A) : R(_R), G(_G), B(_B), A(_A) {
}


RGBA::~RGBA(void)
{
}

void RGBA::setDrawColorTo() {
	glColor4f(R, G, B, A);
}

// adds deltaBrightness to R, G, and B
void RGBA::changeBrightness(float deltaBrightness) {
	R += deltaBrightness;
	G += deltaBrightness;
	B += deltaBrightness;
}

void RGBA::setAlpha(float newAlpha) {
	A = newAlpha;
}
