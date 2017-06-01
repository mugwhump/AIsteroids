#include "Level.h"
#include "Game.h" // here instead of header to remove circular dependency
#include "Laser.h"
#include "globals.h"
#include "GraphicsUtil.h"
#include "Asteroid.h"
#include "Ship.h"
#include "Controller.h"
#include <boost/foreach.hpp>
#include <GL/freeglut.h>



Level::Level(Game* game, int numShips) : game(game)
{
	//myGame = game; //Must use initializer list, since myGame is a const pointer!
	init(numShips);
	giveStateAndSetup(randomSetup(difficulty));
}


Level::Level(Game* game, int numShips, CompleteState* setup) : game(game)
{
	init(numShips);
	giveStateAndSetup(setup);
}


Level::~Level(void) {
	BOOST_REVERSE_FOREACH(Controller* controller, myControllers){ // reverse loops faster for deletion... except it's just pointers.
		delete controller;
	}
	delete mySetup;
}

// Create new ship and Asteroid vector, which stay until level destroyed
void Level::init(int _numShips) {

	mySetup = NULL;
	difficulty = 0;
	numShips = _numShips;

	// Make state that's synched with level
	myCurrentState = CompleteState(difficulty, &myPowerUps, &myShips, &myAsteroids);

	myPowerUps.reserve(10);

	myShips.reserve(g_ship_num_max);
	myControllers.reserve(g_ship_num_max);
	makeControllersForShips(_numShips);

	myAsteroids.reserve(g_asteroids_num); //Just one vector already grown to max size
}

/************************************************************************/
/* CONTROLLERS AND SHIPS                                                                     */
/************************************************************************/

//adds a new ship, also adds it to the setup
void Level::addShip() {
	if (numShips == g_ship_num_max){
		std::cout << "Already " << numShips << " ships, cannot add another." << std::endl;
		return;
	}

	numShips++;
	int playerNum = numShips-1;

	// Add new random ship to myShips and mySetup
	myShips.push_back(Ship());
	mySetup->randomizeShip(myShips[playerNum]);
	mySetup->saveShipsCopy(myShips);

	// Make controller
	Controller* controller = new Controller(game, playerNum);
	myControllers.push_back(controller);

	// Sync it up
	syncAllControllersAndShips();
}

//removes ship indexed by playerNum from play (deletes object, removes from setup)
void Level::removeShip(int playerNum) {
	if ( numShips == 1 ){
		std::cout << "Only 1 ship, cannot remove!" << std::endl;
		return;
	}
	if ( playerNum >= numShips ){
		std::cout << "Cannot remove Player " << playerNum << ", player does not exist." << std::endl;
		return;
	}

	numShips--;

	// Remove from myShips and mySetup
	myShips.erase( myShips.begin() + playerNum );
	mySetup->saveShipsCopy(myShips);

	// Remove Controller
	delete myControllers[playerNum]; // erase() doesn't call destructor
	myControllers.erase( myControllers.begin() + playerNum );

	// Adjust playernums of Controllers that got shifted down (they'll still have old defaults, besides color, though)
	for( int i = playerNum; i < numShips-1; i++ ){
		myControllers[i]->setPlayerNum(i);
	}

	// Sync it up
	syncAllControllersAndShips();
}


// Done at startup, creates controllers and sets defaults. Doesn't sync them.
void Level::makeControllersForShips(int numShips) {
	//Create controllers
	for( int i = 0; i < numShips; i++ ){
		myControllers.push_back(new Controller(game, i)); //controller pointer copied into vector
	}
}


void Level::syncAllControllersAndShips() {
	if(myControllers.size() != myShips.size()){ //size check
		throw std::exception("Error in Game::linkControllersToShips(): different numbers of controllers and ships!");
	}

	for( int i=0; i<myShips.size(); i++ ){
		myControllers[i]->setAllPointers( &(myShips[i]), &myCurrentState ) ;
	}
}


/************************************************************************/
/* STATE AND STARTING SETUP                                              */
/************************************************************************/

// Create random level setup (w/new seed),
CompleteState* Level::randomSetup(int _difficulty) {

	difficulty = _difficulty;

	//number of objects
	int numAsteroids = static_cast<int>( g_asteroids_num + ( g_asteroids_num_increase * difficulty ) ); 

	CompleteState* setup = new CompleteState(difficulty);
	setup->randomAll(numShips, numAsteroids);

	return setup;
}

 // load given state and set it as level's starting setup
// CALLED EVERY TIME LEVEL CHANGES
void Level::giveStateAndSetup(CompleteState* state) {
	giveSetup(state);

	//Difficulty
	difficulty = mySetup->getDifficulty();

	//Make pretty stars
	makeStars();

	//Reset Goal
	mySetup->loadPowerUpsCopy(myPowerUps);

	// Reset Ships
	mySetup->loadShipsCopy(myShips);

	//Reset Asteroids
	mySetup->loadAsteroidsCopy(myAsteroids);

	//connect ships+controllers
	syncAllControllersAndShips();
	game->reset();
}

 // set level's current starting setup, deleting old one
void Level::giveSetup(CompleteState* state) {
	if(state == NULL) throw std::exception("Null state ptr given to Level::setSetup(state)");

	if(state != mySetup){
		delete mySetup; //Clean up old setup
	}
	mySetup = state;
}

// gets exact state of level right now
CompleteState* Level::getCopyOfCurrentState(){
	CompleteState* state = new CompleteState(difficulty, myPowerUps, myShips, myAsteroids);

	return state;
}

 // gets Level's state which is constantly updated
CompleteState* Level::getUpdatingState() {
	return &myCurrentState;
}


/************************************************************************/
/* CHANGING LEVEL                                                                     */
/************************************************************************/

// Increase Difficulty
void Level::nextLevel() {
	difficulty++;
	differentLevel();
}

 // Level with given difficulty
void Level::newLevel(int diff) {
	difficulty = diff;
	differentLevel();
}

 // Go to different level of same difficulty, erase old setup
void Level::differentLevel() {
	giveStateAndSetup(randomSetup(difficulty)); //start a new random level
}

 // Restart from current setup
void Level::restartLevel() {
	giveStateAndSetup(mySetup);
}

/************************************************************************/
/* RENDERING AND UPDATING                                                                     */
/************************************************************************/

void Level::render() {
	if ( g_player_focus ) {
		//make ship the center of view
		glPushMatrix();
		double shipAngle = myShips[0].rot * 57.295779513082; //glRotatef takes degrees
	
		glTranslatef( (g_width / 2.0f), (g_height / 2.0f), 0.0f ); //LAST, translate so ship in center
		glRotatef( static_cast<GLfloat>(-shipAngle), 0.0f, 0.0f, 1.0f ); //SECOND, rotate world so ship faces right
		glTranslatef( -myShips[0].pos.x, -myShips[0].pos.y, 0.0f ); //FIRST, translate origin to ship for rotation
	}


	drawStars();

	// Draw PowerUps
	BOOST_FOREACH(PowerUp& powerup, myPowerUps){
		powerup.render();
	}

	// Draw Asteroids
	std::vector<Asteroid>::iterator it;
	for(it = myAsteroids.begin(); it != myAsteroids.end(); ++it){
		it->render();
	}

	BOOST_FOREACH(Controller* controller, myControllers){
		controller->renderSelfAndShip();
	}

	if ( g_player_focus ) {
		glPopMatrix(); // Must pop now if we pushed before
	}
}

//Make random field of stars
void Level::makeStars() {
	int numStars = 10 + 2*difficulty;
	myStars.clear();
	myStars.reserve(numStars);

	for( int i = 0; i < numStars; i++ ){
		float x = randFloat( 0.0f, g_width );
		float y = randFloat( 0.0f, g_height );
		myStars.push_back( Position(x, y) );
	}
}

//draw field of purdy stars
void Level::drawStars() {
	float starRad = 3.0f;
	glColor3f( 1.0f, 1.0f, 1.0f );

	BOOST_FOREACH( Position& pos, myStars ){
		DrawCircle( pos, starRad, 5 );
	}
}


void Level::update()
{
	// Spawn powerup possibly
	if( randBool(g_powerup_spawn_chance) && myPowerUps.size() < g_powerup_num ){
		myPowerUps.push_back( myCurrentState.randomPowerUp() );
	}

	// Update Controllers first so they can control ships well
	BOOST_FOREACH(Controller* controller, myControllers){
		controller->updateSelfAndShip(); 
	}

	// Update Goal (does basically nothing)

	auto itPowerUp = myPowerUps.begin();
	while( itPowerUp != myPowerUps.end() ){
		itPowerUp->update();
		if ( itPowerUp->isDisappeared() ){
			itPowerUp = myPowerUps.erase(itPowerUp);
			continue; //powerup erased, don't increment
		}
		++itPowerUp;
	}

	BOOST_FOREACH(Asteroid& asteroid, myAsteroids){
		asteroid.update();
	}

	//COLLISIONS
	BOOST_FOREACH(Ship& currentShip, myShips){
		Controller& currentController = *currentShip.getController();

		//GETTING POWERUP
		//myPowerUps.runFrom(currentShip.pos);			std::vector<Laser>& lasers = currentShip.getLasers(); 
		auto itPowerUp = myPowerUps.begin();
		while( itPowerUp != myPowerUps.end() ){
			if( itPowerUp->collidesWith(currentShip) ){
				currentController.gotPowerUp(*itPowerUp);
				if( itPowerUp->getType() == PowerUp::REVIVE ){
					reviveShips();
				}

				itPowerUp = myPowerUps.erase(itPowerUp);
				continue; //powerup erased, don't increment
			}
			++itPowerUp;
		}

		//SHOOTING ANOTHER SHIP
		BOOST_FOREACH(Ship& shotShip, myShips){
			//Ship can't shoot itself, or an invincible ship
			if( (&currentShip == &shotShip) || (shotShip.isInvincible()) ) continue;

			std::vector<Laser>& lasers = currentShip.getLasers(); 
			auto itLaser = lasers.begin();
			while( itLaser != lasers.end() ){
				if( itLaser->collidesWith(shotShip) ){
					shotShip.getController()->gotShotBy(currentShip);
					itLaser = lasers.erase(itLaser);
					continue; //laser erased, don't increment
				}
				++itLaser;
			}
		}

		//SHIP-ASTEROID COLLISIONS 
		std::vector<Asteroid>::iterator itAst;
		for(itAst = myAsteroids.begin(); itAst != myAsteroids.end(); ){
			bool astDestroyed = false; //whether asteroid got destroyed this loop

			//SHOOTING ASTEROIDS. If asteroid destroyed, go to next one in loop.
			std::vector<Laser>& lasers = currentShip.getLasers();
			auto itLaser = lasers.begin();
			while( itLaser != lasers.end() ){
				if( itLaser->collidesWithLooped(*itAst) ){
					itLaser = lasers.erase(itLaser);
					currentController.destroyedAsteroid(*itAst);
					astDestroyed = true; // Asteroid gets destroyed
					break; //break out of laser loop
				}
				++itLaser;
			} //end laser loop

			// If asteroid got destroyed, don't check ship collisions or increment asteroid iterator.
			if(astDestroyed){
				itAst = myAsteroids.erase(itAst);
				continue;
			}

			//check collision with ship. DON'T skip to next ship if ship destroyed, cuz its lasers may still be there.
			if( currentController.canBeKilled() && currentShip.collidesWith(*itAst) ){
				currentController.hitByAsteroid();
			}

			++itAst;
		} //end asteroid loop
	}//end ship loop

	// Check if finished level or got game over, and return
	if( isFinished() ){
		finishedLevel();
		return;
	}
	else if( isGameOver() ){
		gameOver();
		return;
	}

}

/************************************************************************/
/* EVENTS                                                                     */
/************************************************************************/


int Level::playOneTestGame() {
	runningTest = true;

	myControllers[0]->gameOver(); //resets score

	while(runningTest){
		update();
	}

	//game now over
	int result = myControllers[0]->getScore();

	return result;
}


// If all ships dead, game over
bool Level::isGameOver() {
	BOOST_FOREACH(Controller* controller, myControllers){
		if( !controller->isDead() ){
			return false;
		} 
	}
	return true;
}

// If all asteroids destroyed, you won
bool Level::isFinished() {
	return ( myAsteroids.size() == 0 );
}

// Reset scores, go to new level.
// If running a test, stop.
void Level::gameOver() {
	if (runningTest) {
		runningTest = false;
	} 
	else {
		std::cout << "GAME OVER. Final Scores: " << std::endl;
		BOOST_FOREACH(Controller* controller, myControllers){
			std::cout << controller->getScoreString() << "  ";
			controller->gameOver();
		}
		std::cout << std::endl;
	
		newLevel(0); // back to the start
	}
}

void Level::finishedLevel() {
	nextLevel();
}

void Level::reviveShips() {
	BOOST_FOREACH(Controller* controller, myControllers){
		if( controller->isDead() ){
			controller->respawn();
		} 
	}
}
