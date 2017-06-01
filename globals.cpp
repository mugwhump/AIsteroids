#include <globals.h>
#include "XYObj.h"

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>

//Window
const float g_width = 512.0f;
const float g_height = 512.0f;
const float g_GUI_height = 0.0f; // Height of GUI bar
const Position screenCenter(g_width / 2.0f, g_height / 2.0f);

//Rendering
const float fpsBase = 2.0f; //2 = for 30fps
bool g_player_focus = false; //whether view focuses on one player

//Asteroid
const int g_asteroids_num = 7; // Starting Number of Asteroids
const float g_asteroids_num_increase = 1.0f; // How much asteroids increase by every level
const int g_asteroids_num_max = 20; // Upper bound on STARTING asteroids
const float g_asteroid_max_speed = 1.5f * fpsBase;
const float g_asteroid_max_speed_increase = g_asteroid_max_speed / 10; // Increase in max speed every level
const float g_asteroid_radius = 25.0f;

//Ship
const int g_ship_num_max = 4; // Maximum number of players/ships, so can reserve memory 
const float g_ship_max_speed = 4.0f * fpsBase; // Max speed
const float g_ship_friction = .01f * fpsBase; // Friction removed from speed every frame
const float g_ship_acceleration = .05f * fpsBase; // Forward acceleration of ship
const float g_ship_decceleration = .05f * fpsBase; // Braking speed of ship
const float g_ship_turn_speed = .10f * fpsBase; // How quick (in radians) ship turns
const float g_ship_radius = 10.0f; // Ship radius
const int g_ship_starting_invincibility = 60;
const int g_ship_respawn_time = 240;

//Laser
const int g_lasers_num = 10; // Maximum lasers on screen at once
const int g_laser_recharge = 50;
const int g_laser_lifetime = 100 / fpsBase; // How long lasers last before disappearing
const float g_laser_speed = 5.0f * fpsBase; // All lasers go at this speed
const float g_laser_radius = 2.0f;

//Powerup
const float g_powerup_radius = 18.0f;
const float g_powerup_max_speed = g_ship_max_speed * .25;
const float g_powerup_spawn_chance = 1.0f / 256; //chance every frame of poewrup spawning
const int g_powerup_score = 50; //default powerup score
const int g_powerup_invincibility = 630 / fpsBase; //how long invincible for
const int g_powerup_num = 2; //maximum on-screen poewrups
const int g_powerup_lifetime = 600 / fpsBase; //how long it stays on screen

//Misc
const float g_stick_x_deadzone = .52f; //deadzones range from 0 to 1
const float g_stick_y_deadzone = .46f;

//State
const bool g_attributes_are_reals = true; 
const int g_slice_num = 8; // Number of slices for radar
const int g_slice_widths[] = {2, 3, 4, 6, 4}; //width for slices on upper half in 16ths of pi. 1st = front, last = back. 
//...Should be (g_slice_num/2 + 1) values, which sum to 16 (except for front and back)
const float g_slice_ast_speed = g_asteroid_max_speed/4; // How fast asteroid must be going to register as moving
 const float g_slice_distance = g_width / 2;


/************************************************************************/
/* MATH                                                                     */
 /************************************************************************/
 int randIntExcludingHigh(int low, int high) {
	 return ( rand() % (high-low) ) + low;
 }

float randFloat( float a, float b ) {
	return ((b-a)*((float)rand()/RAND_MAX))+a;
}

//Return whether rand float between 0 and 1 is < oddsTrue
bool randBool(float oddsTrue) {
	return (float)rand()/RAND_MAX < oddsTrue;
}

boost::mt19937                     eng;    // Mersenne Twister
boost::normal_distribution<double> dist(0,1);   // Normal Distribution
boost::variate_generator<boost::mt19937,boost::normal_distribution<double>> gen(eng,dist);    // Variate generator

double gaussianSample(double mean, double var) {
	return gen() * var + mean;
}


double expOf(double base, double result) {
	return std::log(result) / std::log(base);
}

double baseOf(double exponent, double result) {
	return std::pow( result, 1.0 / exponent );
}


float loopAngle(float angle) {
	return loopFloatInRange(angle, 0.0f, 2 * M_PI);
}


float loopFloatInRange(float value, float low, float high) {
	float range = high - low;
	while (value < low) {
		value += range;
	}
	while (value > high) {
		value -= range;
	}
	return value;
}


float mapFromRange1to2(float value, float low1, float high1, float low2, float high2) {
	return (value - low1) / (high1 - low1) * (high2 - low2) + low2;
	//Y = (X-A)/(B-A) * (D-C) + C
}

int mapFromRangeToEvenSlices(float value, float low, float high, int numSlices) {
	return floor( (value - low) / (high - low) * numSlices );
}

float mapSliceCenterToRange(int slice, int numSlices, float low, float high) {
	float sliceWidth = (high - low) / numSlices;
	return (slice * sliceWidth) + low + (sliceWidth / 2.0f);
}
