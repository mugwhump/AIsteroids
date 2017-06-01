#pragma once
#include <string>

struct Position;

//DRAWING
void DrawLine( const Position& p1, const Position& p2);
void DrawArrow( const Position& p1, const Position& p2); //p2 is head of arrow

void DrawTriangle( const Position& p1, const Position& p2, const Position& p3 );

void DrawSquare( const Position& bottomLeft, const Position& topRight);
void DrawQuad( const Position& p1, const Position& p2, const Position& p3, const Position& p4 );

void DrawCircle( const Position& pos, float rad, int numSides /* = 8 */ );

void DrawStringAt( float x, float y, const std::string& s );
void DrawStringAtCentered( float x, float y, const std::string& s );
int getStringWidth( const std::string& s );