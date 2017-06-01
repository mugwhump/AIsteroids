#pragma once
#include <string>

class Player;
struct RGBA;

// Functions responsible for managing controls, colors for various Players. STATIC.
namespace Defaults {

	void giveDefaultControls(int playerNum, Player& player);
	void playerQuits(int playerNum);
	RGBA getDefaultColor(int playerNum);
	std::string getColorString(int playerNum);
	std::string getPlayerString(int playerNum);

};

