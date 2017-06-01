#pragma once
#include "DrawingMethods.h"

void DrawTriangle( Position p1, Position p2, Position p3 ) {
	glBegin( GL_TRIANGLES );
	glVertex2f( p1.x, p1.y );
	glVertex2f( p2.x, p2.y );
	glVertex2f( p3.x, p3.y );
	glEnd();
}

void DrawRectangle( float width, float height ) {
	const float w = width / 2.0f;
	const float h = height / 2.0f;

	glBegin( GL_QUADS );
	glVertex2f( -w,  h );   // Top-Left
	glVertex2f(  w,  h );   // Top-Right
	glVertex2f(  w, -h );   // Bottom-Right
	glVertex2f( -w, -h );   // Bottom-Left
	glEnd();

}

void DrawCircle(  float radius, int numSides /* = 8 */ ) {
	const float step = M_PI / numSides;
	glBegin( GL_TRIANGLE_FAN );
	glVertex2f(0.0f, 0.0f);
	for ( float angle = 0.0f; angle < ( 2.0f * M_PI ); angle += step ){
		glVertex2f( radius * sinf(angle), radius * cosf(angle) );
	}
	glVertex2f( 0.0f, radius ); // One more vertex to close the circle
	glEnd();
}