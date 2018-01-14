#ifndef ASSIGNMENT5_GAME_H
#define ASSIGNMENT5_GAME_H

#include "background_image.h"
#include "game_table.h"
#include "cylinder.h"

class Game {
private:
	Cylinder *puck, *mallet_player, *mallet_ai;
public:
	Game();
	~Game();

	void DisplayGame();
	Cylinder* GetPuck() {return puck;}
	Cylinder* GetMalletPlayer() {return mallet_player;}
	Cylinder* GetMalletAI() {return mallet_ai;}
};

#endif //~ASSIGNMENT5_GAME_H