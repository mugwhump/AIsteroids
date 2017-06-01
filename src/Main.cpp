#define _USE_MATH_DEFINES
#pragma once
#include "windows.h"
#include <math.h>
#include <iostream>
#include <string>
#include <ctime>
#include <GL/freeglut.h>
#include <boost/foreach.hpp>
#include <boost/lexical_cast.hpp>
#include "globals.h"
#include "Game.h"


//Glut window initialization
int g_iWindowWidth = (int) g_width;
int g_iWindowHeight = (int) g_height;
int g_iGLUTWindowHandle = 0;
int g_iErrorCode = 0; //glut error code

//OpenGL forward declarations
void InitGL( int argc, char* argv[] );
void DisplayGL(); //This function will be registered as the render function that is invoked by GLUT when the current window needs to be redisplayed.
void IdleGL(); //IdleGL(void): This function is registered with GLUT and it is invoked when windows system events are not being received. This function is ideal for background processing tasks such as the game’s Update methods.
void KeyboardGL( unsigned char c, int x, int y ); //Whenever the user presses a key on the keyboard, this method will be used as the callback method. Gives key pressed and mouse coords
void KeyUp( unsigned char c, int x, int y ); //Key released
void keySpecial(int key, int x, int y); //Special key pressed
void keySpecialUp(int key, int x, int y); //Special key released
void MouseGL( int button, int state, int x, int y ); //This method is registered with GLUT and it will be invoked when the user presses a mouse button on the current window. Each press and release action will generate an event.
void MotionGL( int x, int y ); //This method is invoked when the mouse moves within the window while one or more mouse buttons are pressed.
void ReshapeGL( int w, int h ); 

// Cleans up Resources
void Cleanup( int exitCode, bool bExit = true );


//Game mode enum
enum GameMode
{
	InGame = 0,
	NumModes
};
GameMode mode = InGame;

//Number of 'ticks' between updates
int g_CurrentTicks;
int g_PreviousTicks;
int g_PreviousTicksRender;
int nextUpdateTick;

float updatesPerSecond = 30.0; //how often game logic is updated. 60 = HUMAN DEFAULT
float rendersPerSecond = 30.0; //how often screen is actually redrawn. Should be <= updatesPerSecond
void printGameSpeed(){ std::cout << "UPS: " << updatesPerSecond << " RPS: " << rendersPerSecond << std::endl;}

Game* myGame;
//XboxController* xbawks;



/************************************************************************/
/* INITIALIZATION AND SETUP                                                                     */
/************************************************************************/

int main( int argc, char* argv[] ){
	myGame = new Game();
	myGame->update(); // Do update before game has a chance to render once

	//Initialize the OpenGL context and render window
	InitGL( argc, argv );
	glutMainLoop(); //executes forevar. CAN'T PUT ANYTHING AFTER THIS. END OF RINE.
}

// Free the Resources, like the render window
void Cleanup( int errorCode, bool bExit ){
	if ( g_iGLUTWindowHandle != 0 ){
		glutDestroyWindow( g_iGLUTWindowHandle );
		g_iGLUTWindowHandle = 0;
		delete myGame;
	}

	if ( bExit ){
		exit( errorCode );
	}
}


void InitGL( int argc, char* argv[] )
{
	//std::cout << "Initialize OpenGL..." << std::endl;

	//used to initialize the GLUT library and initiate communication with the windowing system. In this demo, we simply pass along the program’s command-line arguments without change.
	glutInit(&argc, argv);
	int iScreenWidth = glutGet(GLUT_SCREEN_WIDTH);
	int iScreenHeight = glutGet(GLUT_SCREEN_HEIGHT);

	glutInitDisplayMode( GLUT_RGBA | GLUT_ALPHA | GLUT_DOUBLE); // | GLUT_DEPTH NO NEED FOR 2D

	glutInitWindowPosition( ( iScreenWidth - g_iWindowWidth ) / 2,
		( iScreenHeight - g_iWindowHeight ) / 2 );
	glutInitWindowSize( g_iWindowWidth, g_iWindowHeight );

	g_iGLUTWindowHandle = glutCreateWindow( "OpenGL" ); // variable to identify the window

	// Register GLUT callbacks
	glutDisplayFunc(DisplayGL);
	glutIdleFunc(IdleGL);
	glutMouseFunc(MouseGL);
	glutMotionFunc(MotionGL);
	glutKeyboardFunc(KeyboardGL);
	glutKeyboardUpFunc(KeyUp);
	glutSpecialFunc(keySpecial);
	glutSpecialUpFunc(keySpecialUp);
	glutReshapeFunc(ReshapeGL);

	glutIgnoreKeyRepeat(1); // When holding key, don't repeatedly generate events

	// Setup initial GL State
	glClearColor( 0.0f, 0.0f, 0.0f, 1.0f ); // color used to clear buffer
	//glClearDepth( 1.0f ); //NO DEPTH FOR 2D

	//enable transparency
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glShadeModel( GL_SMOOTH ); // GL_SMOOTH interpolates colors between vertices. GL_FLAT shades triangles all one color.
	
	// Capture the previous time to calculate the delta time on the next frame
	g_CurrentTicks = g_PreviousTicks = g_PreviousTicksRender = nextUpdateTick = glutGet( GLUT_ELAPSED_TIME );
}

/************************************************************************/
/* RENDERING AND UPDATING                                                                     */
/************************************************************************/

//  the callback function that was registered with the GLUT event processing loop and is invoked whenever the current window contents need to be redrawn.
void DisplayGL(){
	// Clear our buffers
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

	// Render the image here
	try
	{
		myGame->render();
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught in DisplayGL: " << e.what() << std::endl;
		DebugBreak();
	}

	glutSwapBuffers(); //switch the front buffer being displayed with the back buffer being rendered to
	glutPostRedisplay(); //flags current window to be redisplayed
}


// Update program logic now
void IdleGL()
{
	// Update our simulation
	//g_CurrentTicks = glutGet( GLUT_ELAPSED_TIME ); // only updates every second
	g_CurrentTicks = static_cast<time_t>(std::clock());

	//std::cout << "-----------IDLE, TICKS = " << g_CurrentTicks << std::endl;

	int deltaTicks = ( g_CurrentTicks - g_PreviousTicks );  //time since last update
	int minTicksBetweenUpdates = static_cast<int>( 1000/updatesPerSecond );
	int deltaTicksRender = ( g_CurrentTicks - g_PreviousTicksRender );  //time since last render
	int minTicksBetweenRenders = static_cast<int>( 1000/rendersPerSecond );

	double fDeltaTime = (double)deltaTicks / CLOCKS_PER_SEC;  // how much of a second has gone by since last update
	double fDeltaTimeRender = (double)deltaTicksRender / CLOCKS_PER_SEC;  // how much of a second has gone by since last render

// 	static int updates(0);
// 	static int FPSDisplayTick(0);
// 	const int timeBetweenUpdates = 1000 / 15; //ticks/ms between updates
// 
// 	const int MAX_FRAMESKIP = 1;
// 	int loops = 0;
// 
// 	while( g_CurrentTicks > nextUpdateTick && loops < MAX_FRAMESKIP) {
// 		myGame->update();
// 
// 		std::cout << std::endl << "TICK";
// 
// 		nextUpdateTick += timeBetweenUpdates; // update continuously until time to render again
// 		loops++;
// 		updates++;
// 		FPSDisplayTick += timeBetweenUpdates;
// 
// 		//Display framerate
// 		if( g_CurrentTicks - FPSDisplayTick > 1000 ){
// 			glutSetWindowTitle( std::string("Updates per second: " + boost::lexical_cast<std::string>(updates)).c_str() );
// 			updates = 0;
// 			FPSDisplayTick = glutGet( GLUT_ELAPSED_TIME );
// 		}
// 	}
// 
// 
// 	glutPostRedisplay(); //flags current window to be redisplayed
// 	std::cout << ",TOCK";
// 
// 	nextUpdateTick = glutGet( GLUT_ELAPSED_TIME );

	static int lastFPSDisplay(0);
	static int numUpdates(0); //done this second
	static int numRenders(0);

	//Prevent fast-forwarding after Debug breaks
	if( deltaTicks > 3 * updatesPerSecond ) {
		deltaTicks = minTicksBetweenUpdates;
		g_PreviousTicks = g_CurrentTicks - deltaTicks;
	}
	if( deltaTicksRender > 3 * rendersPerSecond ) {
		deltaTicksRender = minTicksBetweenRenders;
		g_PreviousTicksRender = g_CurrentTicks - deltaTicksRender;
	}

	if( deltaTicks >= minTicksBetweenUpdates ) {// if( fDeltaTime >= 1/updatesPerSecond){
		//std::cout << "" << fDeltaTime << " seconds since last game update!" << std::endl;
		//g_PreviousTicks = g_CurrentTicks;
		g_PreviousTicks += minTicksBetweenUpdates; //so we can catch up if we missed many updates. YES
		numUpdates++;

//		try {
			myGame->update();
// 		}
// 		catch (std::exception& e) {
// 			std::cout << "Exception caught in IdleGL: " << e->what() << std::endl;
// 			DebugBreak();
// 		}
	}

	if( deltaTicksRender >= minTicksBetweenRenders){
		//std::cout << "" << fDeltaTimeRender << " seconds since last render!" << std::endl;
		//g_PreviousTicksRender = g_CurrentTicks;
		g_PreviousTicksRender += minTicksBetweenRenders;
		numRenders++;
		glutPostRedisplay(); //flags current window to be redisplayed
	}

	//Display FPS once a second
	if(lastFPSDisplay + 1000 < g_CurrentTicks){
		glutSetWindowTitle(   std::string(  "Updates per second: " + boost::lexical_cast<std::string>( numUpdates ) +
			", Renders per second: " + boost::lexical_cast<std::string>( numRenders )  ).c_str()   );
		lastFPSDisplay = g_CurrentTicks;
		numUpdates = numRenders = 0;
	}
}

/************************************************************************/
/* INPUT                                                                     */
/************************************************************************/

// Keyboard input
void KeyboardGL( unsigned char c, int x, int y ) {
	//glutGetModifiers(); //find out if Shift, Control, or Alt are being held;
	myGame->keyPressed(c);

	switch ( c )
	{
	case '\033': // escape quits
	case 'Q':    // Q quits
	//case 'q':    // q (or escape) quits
		// Cleanup up and quit
		Cleanup(0);
		break;
	case '=':
		updatesPerSecond *= 2;
		printGameSpeed();
		break;
	case '-':
		updatesPerSecond /= 2;
		printGameSpeed();
		break;
	case ']':
		rendersPerSecond *= 2;
		printGameSpeed();
		break;
	case '[':
		rendersPerSecond /= 2;
		printGameSpeed();
		break;
	}
	//glutPostRedisplay();
}

// Called when key is released
void KeyUp( unsigned char c, int x, int y ){
	myGame->keyReleased(c);
}

// Special key is pressed
void keySpecial(int key, int x, int y) {
	myGame->specialKeyPressed(key);
}

// Special key is released
void keySpecialUp(int key, int x, int y) {
	myGame->specialKeyReleased(key);
}

// Do mouse inputs
void MouseGL( int button, int state, int x, int y ){
	myGame->mousePressed(x, y);
}

void MotionGL( int x, int y ){

}

//ReshapGL( int width, int height ): The reshape callback function is invoked when the render window is resized. This method will also be called the first time the window is displayed so it can be used as the only method that is used to setup the projection matrix.
void ReshapeGL( int w, int h ) {

	if ( h == 0){                                        // Prevent a divide-by-zero error{
		h = 1;                                      // Making Height Equal One
	}

	g_iWindowWidth = w;
	g_iWindowHeight = h;

	glViewport( 0, 0, g_iWindowWidth, g_iWindowHeight ); //setup viewport rectangle for current OpenGL context. Measured from bottom-left corner

	// Setup the projection matrix
	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();

	glOrtho(0.0, g_width, 0.0, g_height, -100, 100); // ORTHOGRAPHIIIIIIIIIIIIC

	// (FOV-angle, viewport aspect ratio, distance from viewer to "near" clipping plane, distance to "far" clipping plane)
	//gluPerspective( 60.0, (GLdouble)g_iWindowWidth/(GLdouble)g_iWindowHeight, 0.1, 100.0 ); //Not with orthographic!

	glMatrixMode(GL_MODELVIEW);

	glutPostRedisplay();
}
