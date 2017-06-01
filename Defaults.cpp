#include "Defaults.h"
#include "Player.h"
#include "RGBA.h"
#include "boost/lexical_cast.hpp"
#include <GL/freeglut.h>


namespace Defaults{
	// Anonymous namespace hides privates
	namespace {

		static int schemesUsedBy[] = {-1, -1}; // -1 means free, else player with that number's using it.
		static const int numSchemes = 2;
	}

	void giveDefaultControls(int playerNum, Player& player) {

		if( !player.useGamepad(playerNum) ) { //useGamepad fails if not connected or someone else is using it
			// If no xbox, look for first available keyboard controls
			int chosenScheme = 0;

			while( (schemesUsedBy[chosenScheme] != -1) && (chosenScheme < numSchemes) ) {
				chosenScheme++;
			}

			switch (chosenScheme) {
			case 0:
				player.addSpecial(GLUT_KEY_UP, eInput::UP);
				player.addSpecial(GLUT_KEY_DOWN, eInput::DOWN);
				player.addSpecial(GLUT_KEY_LEFT, eInput::LEFT);
				player.addSpecial(GLUT_KEY_RIGHT, eInput::RIGHT);
				player.addChar(' ', eInput::FIRE);

				schemesUsedBy[0] = playerNum; // remember which player's using it, in case they quit
				break;
			case 1:
				player.addChar('w', eInput::UP);
				player.addChar('s', eInput::DOWN);
				player.addChar('a', eInput::LEFT);
				player.addChar('d', eInput::RIGHT);
				player.addChar('f', eInput::FIRE);

				schemesUsedBy[1] = playerNum; // remember which player's using it, in case they quit
				break;
			case 2: // only P1 and p2 have defaults
				break;
			}
		}
	}


	// Free that player's defaults
	void playerQuits(int playerNum) {
		for( int i = 0; i < numSchemes; i++ ) {
			if(schemesUsedBy[i] == playerNum){
				schemesUsedBy[i] = -1;
			}
		}
	}

	RGBA getDefaultColor(int playerNum) {

		switch (playerNum) {
		case 0:
			return RGBA(1.0f, 0.0f, 0.0f);
		case 1:
			return RGBA(1.0f, 1.0f, 0.0f);
		case 2:
			return RGBA(0.0f, 0.0f, 1.0f);
		case 3:
			return RGBA(0.0f, 1.0f, 0.0f);
		default:
			return RGBA(1.0f, 1.0f, 0.0f);
		}
	}

	std::string getColorString(int playerNum) {
		switch (playerNum) {
		case 0:
			return "red";
		case 1:
			return "yellow";
		case 2:
			return "blue";
		case 3:
			return "green";
		default:
			return "ugly default";
		}
	}

	std::string getPlayerString(int playerNum) {
		return std::string( "P" + boost::lexical_cast<std::string>(playerNum) );
	}


}
