//global data baby
#pragma once;
//#define _USE_MATH_DEFINES //for M_PI
#include <math.h>
//define PI constants as floats to eliminate double->float conversion warnings
#undef M_2_PI
#undef M_PI
#undef M_PI_2
#undef M_PI_4
#define M_2_PI_D 6.283185307179586476925286766559
#define M_2_PI 6.283185307f
#define M_PI 3.14159265f
#define M_PI_2 1.570796326f
#define M_PI_4 0.785398163f


struct Position;

//GLOBALS

//Window
extern const float g_width;
extern const float g_height;
extern const float g_GUI_height; // Height of GUI bar (goes on top)
extern const Position screenCenter;

//Rendering
extern const float fpsBase; //factor to multiply shit by, using 60 FPS as a base.
extern bool g_player_focus;

//Asteroids
extern const int g_asteroids_num; // Number of Asteroids on level 1
extern const float g_asteroids_num_increase; // Number of Asteroids increases this much every level
extern const int g_asteroids_num_max;
extern const float g_asteroid_max_speed; 
extern const float g_asteroid_max_speed_increase; 
extern const float g_asteroid_radius; // Average radius

//Ship
extern const int g_ship_num_max; 
extern const float g_ship_max_speed; // Max speed
extern const float g_ship_friction; // Friction experienced by ship, removed from speed every frame
extern const float g_ship_acceleration; // Forward acceleration of ship
extern const float g_ship_decceleration; // Braking speed of ship
extern const float g_ship_turn_speed; // How quick (in radians) ship turns
extern const float g_ship_radius; // Ship radius
extern const int g_ship_starting_invincibility; // How long ship's invincible for at start of game
extern const int g_ship_respawn_time;

//Laser
extern const int g_lasers_num; // Maximum lasers on screen at once
extern const int g_laser_recharge; // Time required to fire another laser
extern const int g_laser_lifetime; // How long lasers last before disappearing
extern const float g_laser_speed; // All lasers go at this speed
extern const float g_laser_radius;

//PowerUps
extern const float g_powerup_radius;
extern const float g_powerup_max_speed;
extern const float g_powerup_spawn_chance;
extern const int g_powerup_score; //maximum on-screen poewrups
extern const int g_powerup_invincibility; //how long invincible for
extern const int g_powerup_num;
extern const int g_powerup_lifetime;

//Misc
extern const float g_stick_x_deadzone; // How far stick must be pressed to register. from 0 to 1.
extern const float g_stick_y_deadzone; // How far stick must be pressed to register

//State
extern const bool g_attributes_are_reals; // Whether attributes must be real numbers. If false, can't use nominals.
extern const int g_slice_num; // Number of slices for radar
extern const int g_slice_widths[];
extern const float g_slice_ast_speed; // How fast asteroid must be going to register as moving
extern const float g_slice_distance; // How far away slices can see stuff

//MATH
int randIntExcludingHigh(int low, int high);
float randFloat(float a, float b);
bool randBool( float oddsTrue );
double gaussianSample( double mean, double var );

double expOf( double base, double result ); //Returns what power to raise base to to get result
double baseOf( double exponent, double result ); //Returns what base raised to exponent gets result

float loopAngle(float angle); //keeps angle between 0 and 2pi. ONLY LOOPS ONCE
float loopFloatInRange(float value, float low, float high); //keeps angle inside given range

float mapFromRange1to2(float value, float low1, float high1, float low2, float high2);
int mapFromRangeToEvenSlices(float value, float low, float high, int numSlices);
float mapSliceCenterToRange(int slice, int numSlices, float low, float high);
