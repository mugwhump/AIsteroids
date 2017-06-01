
#include "GraphicsUtil.h"

#include "globals.h"
#include "XYObj.h"
#include <GL/freeglut.h>


void DrawLine(const Position& p1, const Position& p2) {
	//glLineWidth(	GLfloat  	width); //change line width
	//glEnable(GL_LINE_SMOOTH); //or glDisable to turn off antialiasing
	glBegin( GL_LINES ); //GL_LINE doesn't work.
	glVertex2f( p1.x, p1.y );
	glVertex2f( p2.x, p2.y );
	glEnd();
}

void DrawArrow(const Position& p1, const Position& p2) {
	float dirToHead = p1.directionTo(p2);
	float lengthToHead = p1.distanceTo(p2);
	Position L1(p2), L2(p2);

	L1.moveDirection(dirToHead + .85f*M_PI, lengthToHead/2.0f);
	L2.moveDirection(dirToHead - .85f*M_PI, lengthToHead/2.0f);

	DrawLine(p1, p2);
	DrawLine(p2, L1);
	DrawLine(p2, L2);
}

void DrawTriangle( const Position& p1, const Position& p2, const Position& p3 )
{

	glBegin( GL_TRIANGLES );
	glVertex2f( p1.x, p1.y );
	glVertex2f( p2.x, p2.y );
	glVertex2f( p3.x, p3.y );
	glEnd();
}


void DrawSquare(const Position& bottomLeft, const Position& topRight) {
	Position bottomRight( topRight.x, bottomLeft.y );
	Position topLeft( bottomLeft.x, topRight.y );
	DrawQuad( bottomLeft, topLeft, topRight, bottomRight );
}


void DrawQuad(const Position& p1, const Position& p2, const Position& p3, const Position& p4) {
	glBegin( GL_QUADS );
	glVertex2f( p1.x, p1.y );
	glVertex2f( p2.x, p2.y );
	glVertex2f( p3.x, p3.y );
	glVertex2f( p4.x, p4.y );
	glEnd();
}


void DrawCircle( const Position& pos, float rad, int numSides /* = 8 */ )
{
	const float step = M_PI / numSides;
	glBegin( GL_TRIANGLE_FAN );
	glVertex2f(pos.x, pos.y);
	for ( float angle = 0.0f; angle < ( 2.0f * M_PI ); angle += step ){
		glVertex2f( pos.x + rad * sinf(angle), pos.y + rad * cosf(angle) );
	}
	glVertex2f( pos.x, pos.y + rad ); // One more vertex to close the circle
	glEnd();
}

//Draws bottom-left corner there
void DrawStringAt(float x, float y, const std::string& s) {
	glRasterPos2f(x, y);

	glutBitmapString( GLUT_BITMAP_HELVETICA_18 , (const unsigned char*)s.c_str() );
}

void DrawStringAtCentered(float x, float y, const std::string& s) {
	int w = getStringWidth(s);
	int h = glutBitmapHeight( GLUT_BITMAP_HELVETICA_18 );
	x -= w / 2.f;
	y -= h / 2.f;
	DrawStringAt(x, y, s);
}


int getStringWidth(const std::string& s) {
	return glutBitmapLength( GLUT_BITMAP_HELVETICA_18, (const unsigned char*)s.c_str() );
}