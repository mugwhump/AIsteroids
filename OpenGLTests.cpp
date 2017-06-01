#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <ctime>
#include <GL/glut.h>
#include <../XYObj.h>


//Glut window initialization
int g_iWindowWidth = 512;
int g_iWindowHeight = 512;
int g_iGLUTWindowHandle = 0;
int g_iErrorCode = 0; //glut error code

//OpenGL forward declarations
void InitGL( int argc, char* argv[] );
void DisplayGL(); //This function will be registered as the render function that is invoked by GLUT when the current window needs to be redisplayed.
void IdleGL(); //IdleGL(void): This function is registered with GLUT and it is invoked when windows system events are not being received. This function is ideal for background processing tasks such as the game’s Update methods.
void KeyboardGL( unsigned char c, int x, int y ); //Whenever the user presses a key on the keyboard, this method will be used as the callback method. Gives key pressed and mouse coords
void MouseGL( int button, int state, int x, int y ); //This method is registered with GLUT and it will be invoked when the user presses a mouse button on the current window. Each press and release action will generate an event.
void MotionGL( int x, int y ); //This method is invoked when the mouse moves within the window while one or more mouse buttons are pressed.
void ReshapeGL( int w, int h ); 

void DrawRectangle( float width, float height );
void DrawCircle( float radius, int numSides = 8 );
void DrawTriangle( Position p1, Position p2, Position p3 );

void DrawCube( float width, float height, float depth );
void DrawSphere( float radius );
void DrawPyramid( float scale = 1.0f );

/////////////// FOR OPENGL TESTS ////////////////

//Game mode enum
enum ESceneType
{
	ST_Scene1 = 0,
	ST_Scene2,
	ST_Scene3,
	ST_Scene4,
	NumModes
};
ESceneType g_eCurrentScene = ST_Scene1;

//primitive rotation
float g_fRotate1 = 0.0f;
float g_fRotate2 = 0.0f;
float g_fRotate3 = 0.0f;

//Number of 'ticks' between frames
std::clock_t g_PreviousTicks;
std::clock_t g_CurrentTicks;

//More Forward-declared Functions to render our scenes
// Render a simple scene with 2D primitives
void RenderScene1();
// Render a slightly more complex scene using different colors
void RenderScene2();
// Render a scene with animated transformations
void RenderScene3();
// Render a scene with 3D objects that perform rotations on all 3 axis.
void RenderScene4();

// Cleans up Resources
void Cleanup( int exitCode, bool bExit = true );


int main( int argc, char* argv[] ){
	// Capture the previous time to calculate the delta time on the next frame
	g_PreviousTicks = std::clock();

	//Initialize the OpenGL context and render window
	InitGL( argc, argv );
	glutMainLoop(); //executes forevar
}

// Free the Resources, like the render window
void Cleanup( int errorCode, bool bExit ){
	if ( g_iGLUTWindowHandle != 0 ){
		glutDestroyWindow( g_iGLUTWindowHandle );
		g_iGLUTWindowHandle = 0;
	}

	if ( bExit ){
		exit( errorCode );
	}
}

void InitGL( int argc, char* argv[] )
{
	std::cout << "Initialize OpenGL..." << std::endl;

	//used to initialize the GLUT library and initiate communication with the windowing system. In this demo, we simply pass along the program’s command-line arguments without change.
	glutInit(&argc, argv);
	int iScreenWidth = glutGet(GLUT_SCREEN_WIDTH);
	int iScreenHeight = glutGet(GLUT_SCREEN_HEIGHT);

	glutInitDisplayMode( GLUT_RGBA | GLUT_ALPHA | GLUT_DOUBLE | GLUT_DEPTH );

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
	glutReshapeFunc(ReshapeGL);

	// Setup initial GL State
	glClearColor( 1.0f, 1.0f, 1.0f, 1.0f ); // color used to clear buffer
	glClearDepth( 1.0f );

	glShadeModel( GL_SMOOTH ); // GL_SMOOTH interpolates colors between vertices. GL_FLAT shades triangles all one color.
	std::cout << "Initialize OpenGL: Success!" << std::endl;
}

//  the callback function that was registered with the GLUT event processing loop and is invoked whenever the current window contents need to be redrawn.
void DisplayGL(){
	// Clear our buffers
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

	switch ( g_eCurrentScene ){
	case ST_Scene1:{
		RenderScene1();
				   }
				   break;
	case ST_Scene2:{
		RenderScene2();
				   }
				   break;
	case ST_Scene3:{
		RenderScene3();
				   }
				   break;
	case ST_Scene4:{
		RenderScene4();
				   }
				   break;
	}

	glutSwapBuffers(); //switch the front buffer being displayed with the back buffer being rendered to
	glutPostRedisplay(); //flags current window to be redisplayed
}

// Update program logic now
void IdleGL()
{
	// Update our simulation
	g_CurrentTicks = std::clock();
	float deltaTicks = ( g_CurrentTicks - g_PreviousTicks );  //update delta time so program runs smooth regardless of framerate
	g_PreviousTicks = g_CurrentTicks;

	float fDeltaTime = deltaTicks / (float)CLOCKS_PER_SEC; // how much of a second has gone by

	// Rate of rotation in (degrees) per second
	const float fRotationRate = 50.0f;

	// Update our rotation parameters
	g_fRotate1 += ( fRotationRate * fDeltaTime );
	g_fRotate1 = fmodf( g_fRotate1, 360.0f );

	g_fRotate2 += ( fRotationRate * fDeltaTime );
	g_fRotate2 = fmodf( g_fRotate2, 360.0f );

	g_fRotate3 += ( fRotationRate * fDeltaTime );
	g_fRotate3 = fmodf( g_fRotate3, 360.0f );

	glutPostRedisplay(); //flags current window to be redisplayed
}

// Keyboard input
void KeyboardGL( unsigned char c, int x, int y )
{
	// Store the current scene so we can test if it has changed later.
	ESceneType currentScene = g_eCurrentScene;

	switch ( c )
	{
	case '1':
		{
			glClearColor( 1.0f, 1.0f, 1.0f, 1.0f );                         // White background
			g_eCurrentScene = ST_Scene1;
		}
		break;
	case '2':
		{
			glClearColor( 0.0f, 0.0f, 0.0f, 1.0f );                         // Black background
			g_eCurrentScene = ST_Scene2;
		}
		break;
	case '3':
		{
			glClearColor( 0.27f, 0.27f, 0.27f, 1.0f );                      // Dark-Gray background
			g_eCurrentScene = ST_Scene3;
		}
		break;
	case '4':
		{
			glClearColor( 0.73f, 0.73f, 0.73f, 1.0f );                      // Light-Gray background
			g_eCurrentScene = ST_Scene4;
		}
		break;
	case 's':
	case 'S':
		{
			std::cout << "Shade Model: GL_SMOOTH" << std::endl;
			// Switch to smooth shading model
			glShadeModel( GL_SMOOTH );
		}
		break;
	case 'f':
	case 'F':
		{
			std::cout << "Shade Model: GL_FLAT" << std::endl;
			// Switch to flat shading model
			glShadeModel( GL_FLAT );
		}
		break;
	case 'r':
	case 'R':
		{
			std::cout << "Reset Parameters..." << std::endl;
			g_fRotate1 = g_fRotate2 = g_fRotate3 = 0.0f;
		}
		break;
	case '\033': // escape quits
	case '\015': // Enter quits
	case 'Q':    // Q quits
	case 'q':    // q (or escape) quits
		{
			// Cleanup up and quit
			Cleanup(0);
		}
		break;
	}

	if ( currentScene != g_eCurrentScene ){
		std::cout << "Changed Render Scene: " << ( g_eCurrentScene + 1 ) << std::endl;
	}

	glutPostRedisplay();
}

// Do mouse inputs
void MouseGL( int button, int state, int x, int y ){

}

void MotionGL( int x, int y ){

}

//ReshapGL( int width, int height ): The reshape callback function is invoked when the render window is resized. This method will also be called the first time the window is displayed so it can be used as the only method that is used to setup the projection matrix.
void ReshapeGL( int w, int h ) {
	std::cout << "ReshapGL( " << w << ", " << h << " );" << std::endl;

	if ( h == 0){                                        // Prevent a divide-by-zero error{
		h = 1;                                      // Making Height Equal One
	}

	g_iWindowWidth = w;
	g_iWindowHeight = h;

	glViewport( 0, 0, g_iWindowWidth, g_iWindowHeight ); //setup viewport rectangle for current OpenGL context. Measured from bottom-left corner

	// Setup the projection matrix
	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	// (FOV-angle, viewport aspect ratio, distance from viewer to "near" clipping plane, distance to "far" clipping plane)
	gluPerspective( 60.0, (GLdouble)g_iWindowWidth/(GLdouble)g_iWindowHeight, 0.1, 100.0 );

	glutPostRedisplay();
}

//////////////////////////////////////////////////////////////////////////
// DRAWAN 2D PRIMITIVES

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

//////////////////////////////////////////////////////////////////////////
// RENDER DA SCENES

void RenderScene1() {
	glMatrixMode( GL_MODELVIEW );                                           // Switch to modelview matrix mode. We can imagine that the viewer is always at the origin of the global coordinate system and objects are positioned in the world by manipulating this matrix relative to that origin.
	glLoadIdentity();                                                       // Load the identity matrix

	glTranslatef( -1.5f, 1.0f, -6.0f );                                     // Translate our view matrix back and a bit to the left. Units are arbitrary, but best to use meters for compatability with other libraries.
	glColor3f( 1.0f, 0.0f, 0.0f );                                          // Set Vertex Color to red
	DrawTriangle( Position(0.0f, 1.0f), Position(-1.0f, -1.0f), Position(1.0f, -1.0f ) );

	glTranslatef( 3.0f, 0.0f, 0.0f );                                       // Shift view 3 units to the right
	glColor3f( 0.0f, 0.0f, 1.0f );                                          // Set Color to blue
	DrawRectangle( 2.0f, 2.0f );

	glTranslatef( -1.5f, -3.0f, 0.0f );                                     // Back to center and lower screen
	glColor3f( 1.0f, 1.0f, 0.0f );                                          // Set color to yellow
	DrawCircle( 1.0f, 16 );
}

//same as above, but changes color before drawing each vertice
void RenderScene2() {
	glMatrixMode( GL_MODELVIEW );                                           // Switch to modelview matrix mode
	glLoadIdentity();                                                       // Load the identity matrix

	glTranslatef( -1.5f, 1.0f, -6.0f );                                     // Translate back and to the left
	// Draw a triangle with different colors on each vertex
	glBegin( GL_TRIANGLES );
	glColor3f( 1.0f, 0.0f, 0.0f );                                      // Red
	glVertex2f( 0.0f, 1.0f );                                           // Top-Center

	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex2f( -1.0f, -1.0f );                                         // Bottom-Left

	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex2f( 1.0f, -1.0f );                                          // Bottom-Right
	glEnd();

	glTranslatef( 3.0f, 0.0f, 0.0f );                                       // Translate right
	// Draw a rectangle with different colors on each vertex
	glBegin( GL_QUADS );
	glColor3f( 1.0f, 0.0f, 0.0f );                                      // Red
	glVertex2f( -1.0f, 1.0f );                                          // Top-Left

	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex2f( 1.0f, 1.0f );                                           // Top-Right

	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex2f( 1.0f, -1.0f );                                          // Bottom-Right

	glColor3f( 1.0f, 1.0f, 1.0f );                                      // White
	glVertex2f( -1.0f, -1.0f );                                         // Bottom-Left
	glEnd();

	glTranslatef( -1.5f, -3.0f, 0.0f );                                     // Back to center and lower screen

	// Draw a circle with blended red/blue vertices.
	const float step = M_PI / 16;
	const float radius = 1.0f;

	glBegin( GL_TRIANGLE_FAN );
	glColor3f( 1.0f, 1.0f, 1.0f );
	glVertex2f(0.0f, 0.0f);
	for ( float angle = 0.0f; angle < ( 2.0f * M_PI ); angle += step ) {
		float fSin = sinf(angle);
		float fCos = cosf(angle);

		glColor3f( ( fCos + 1.0f ) * 0.5f, ( fSin + 1.0f ) * 0.5f , 0.0f);
		glVertex2f( radius * fSin, radius * fCos );
	}
	glColor3f( 1.0f, 0.5f, 0.0f );
	glVertex2f( 0.0f, radius ); // One more vertex to close the circle
	glEnd();
}

void RenderScene3() {
	glMatrixMode( GL_MODELVIEW );                                           // Switch to modelview matrix mode
	glLoadIdentity();                                                       // Load the identity matrix

	glTranslatef( -1.5f, 1.0f, -6.0f );                                     // Translate back and to the left
	glPushMatrix();                                                         // Push the current transformation onto the matrix stack
	glRotatef( g_fRotate1, 0.0f, 0.0f, 1.0f );
	// Draw a triangle with different colors on each vertex
	glBegin( GL_TRIANGLES );
	glColor3f( 1.0f, 0.0f, 0.0f );                                      // Red
	glVertex2f( 0.0f, 1.0f );                                           // Top-Center

	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex2f( -1.0f, -1.0f );                                         // Bottom-Left

	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex2f( 1.0f, -1.0f );                                          // Bottom-Right
	glEnd();
	glPopMatrix();

	glTranslatef( 3.0f, 0.0f, 0.0f );                                       // Translate right
	glPushMatrix();
	glRotatef( g_fRotate2, 0.0f, 0.0f, 1.0f );
	// Draw a rectangle with different colors on each vertex
	glBegin( GL_QUADS );
	glColor3f( 1.0f, 0.0f, 0.0f );                                      // Red
	glVertex2f( -1.0f, 1.0f );                                          // Top-Left

	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex2f( 1.0f, 1.0f );                                           // Top-Right

	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex2f( 1.0f, -1.0f );                                          // Bottom-Right

	glColor3f( 1.0f, 1.0f, 1.0f );                                      // White
	glVertex2f( -1.0f, -1.0f );                                         // Bottom-Left
	glEnd();
	glPopMatrix();

	glTranslatef( -1.5f, -3.0f, 0.0f );                                     // Back to center and lower screen
	glPushMatrix();
	glRotatef( g_fRotate3, 0.0f, 0.0f, 1.0f );
	// Draw a circle with blended red/blue vertecies
	const float step = M_PI / 16;
	const float radius = 1.0f;

	glBegin( GL_TRIANGLE_FAN );
	glColor3f( 1.0f, 1.0f, 1.0f );
	glVertex2f(0.0f, 0.0f);
	for ( float angle = 0.0f; angle < ( 2.0f * M_PI ); angle += step ) {
		float fSin = sinf(angle);
		float fCos = cosf(angle);

		glColor3f( ( fCos + 1.0f ) * 0.5f, ( fSin + 1.0f ) * 0.5f , 0.0f);
		glVertex2f( radius * fSin, radius * fCos );
	}
	glColor3f( 1.0f, 0.5f, 0.0f );
	glVertex2f( 0.0f, radius ); // One more vertex to close the circle
	glEnd();
	glPopMatrix();
}

// In THREEEEEEE DEEEEEEE
void RenderScene4() {
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();

	glEnable( GL_DEPTH_TEST );

	glTranslatef( -1.5f, 1.0f, -6.0f );                                     // Translate back and to the left

	glPushMatrix();                                                         // Push the current modelview matrix on the matrix stack
	glRotatef(g_fRotate1, 1.0f, 1.0f, 1.0f );                               // Rotate on all 3 axis
	glBegin( GL_TRIANGLES );                                                // Draw a pyramid
	glColor3f( 1.0f, 0.0f, 0.0f );                                      // Red
	glVertex3f( 0.0f, 1.0f, 0.0f );                                     // Top of front face
	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex3f( -1.0f, -1.0f, 1.0f );                                   // Left of front face
	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex3f( 1.0f, -1.0f, 1.0f );                                    // Right of front face

	glColor3f( 1.0f, 0.0f, 0.0f );                                      // Red
	glVertex3f( 0.0f, 1.0f, 0.0f );                                     // Top of right face
	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex3f( 1.0f, -1.0f, 1.0f );                                    // Left of right face
	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex3f( 1.0f, -1.0f, -1.0f );                                   // Right of right face

	glColor3f( 1.0f, 0.0f, 0.0f );                                      // Red
	glVertex3f( 0.0f, 1.0f, 0.0f );                                     // Top of back face
	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex3f( 1.0f, -1.0f, -1.0f );                                   // Left of back face
	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex3f( -1.0f, -1.0f, -1.0f );                                  // Right of back face

	glColor3f( 1.0f, 0.0f, 0.0f );                                      // Red
	glVertex3f( 0.0f, 1.0f, 0.0f );                                     // Top of left face
	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex3f( -1.0f, -1.0f, -1.0f );                                  // Left of left face
	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex3f( -1.0f, -1.0f, 1.0f );                                   // Right of left face
	glEnd();

	// Render a quad for the bottom of our pyramid
	glBegin( GL_QUADS );
	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex3f( -1.0f, -1.0f, 1.0f );                                   // Left/right of front/left face
	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex3f( 1.0f, -1.0f, 1.0f );                                    // Right/left of front/right face
	glColor3f( 0.0f, 1.0f, 0.0f );                                      // Green
	glVertex3f( 1.0f, -1.0f, -1.0f );                                   // Right/left of right/back face
	glColor3f( 0.0f, 0.0f, 1.0f );                                      // Blue
	glVertex3f( -1.0f, -1.0f, -1.0f );                                  // Left/right of right/back face
	glEnd();
	glPopMatrix();

	glTranslatef( 3.0f, 0.0f, 0.0f );                                        // Translate right
	glPushMatrix();                                                         // Push the current modelview matrix on the matrix stack
	glRotatef( g_fRotate2, 1.0f, 1.0f, 1.0f );                              // Rotate the primitive on all 3 axis
	glBegin( GL_QUADS );
	// Top face
	glColor3f(   0.0f, 1.0f,  0.0f );                                   // Green
	glVertex3f(  1.0f, 1.0f, -1.0f );                                   // Top-right of top face
	glVertex3f( -1.0f, 1.0f, -1.0f );                                   // Top-left of top face
	glVertex3f( -1.0f, 1.0f,  1.0f );                                   // Bottom-left of top face
	glVertex3f(  1.0f, 1.0f,  1.0f );                                   // Bottom-right of top face

	// Bottom face
	glColor3f(   1.0f,  0.5f,  0.0f );                                  // Orange
	glVertex3f(  1.0f, -1.0f, -1.0f );                                  // Top-right of bottom face
	glVertex3f( -1.0f, -1.0f, -1.0f );                                  // Top-left of bottom face
	glVertex3f( -1.0f, -1.0f,  1.0f );                                  // Bottom-left of bottom face
	glVertex3f(  1.0f, -1.0f,  1.0f );                                  // Bottom-right of bottom face

	// Front face
	glColor3f(   1.0f,  0.0f, 0.0f );                                  // Red
	glVertex3f(  1.0f,  1.0f, 1.0f );                                  // Top-Right of front face
	glVertex3f( -1.0f,  1.0f, 1.0f );                                  // Top-left of front face
	glVertex3f( -1.0f, -1.0f, 1.0f );                                  // Bottom-left of front face
	glVertex3f(  1.0f, -1.0f, 1.0f );                                  // Bottom-right of front face

	// Back face
	glColor3f(   1.0f,  1.0f,  0.0f );                                 // Yellow
	glVertex3f(  1.0f, -1.0f, -1.0f );                                 // Bottom-Left of back face
	glVertex3f( -1.0f, -1.0f, -1.0f );                                 // Bottom-Right of back face
	glVertex3f( -1.0f,  1.0f, -1.0f );                                 // Top-Right of back face
	glVertex3f(  1.0f,  1.0f, -1.0f );                                 // Top-Left of back face

	// Left face
	glColor3f(   0.0f,  0.0f,  1.0f);                                   // Blue
	glVertex3f( -1.0f,  1.0f,  1.0f);                                   // Top-Right of left face
	glVertex3f( -1.0f,  1.0f, -1.0f);                                   // Top-Left of left face
	glVertex3f( -1.0f, -1.0f, -1.0f);                                   // Bottom-Left of left face
	glVertex3f( -1.0f, -1.0f,  1.0f);                                   // Bottom-Right of left face

	// Right face
	glColor3f(   1.0f,  0.0f,  1.0f);                                   // Violet
	glVertex3f(  1.0f,  1.0f,  1.0f);                                   // Top-Right of left face
	glVertex3f(  1.0f,  1.0f, -1.0f);                                   // Top-Left of left face
	glVertex3f(  1.0f, -1.0f, -1.0f);                                   // Bottom-Left of left face
	glVertex3f(  1.0f, -1.0f,  1.0f);                                   // Bottom-Right of left face
	glEnd();
	glPopMatrix();

	glTranslatef( -1.5f, -3.0f, 0.0f );                                     // Back to center and lower screen
	glPushMatrix();
	glRotatef( g_fRotate3, 1.0f, 1.0f, 1.0f );
	glColor3f( 1.0f, 1.0f, 0.0f );                                          // Yellow
	glutSolidSphere( 1.0f, 16, 16 );                                        // Use GLUT to draw a solid sphere
	glScalef( 1.01f, 1.01f, 1.01f );
	glColor3f( 1.0f, 0.0f, 0.0f );                                          // Red
	glutWireSphere( 1.0f, 16, 16 );                                         // Use GLUT to draw a wireframe sphere
	glPopMatrix();
}
