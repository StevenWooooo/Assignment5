#include "game.h"
#include "defines.h"

Game::Game() {
	puck = new Cylinder(PUCK_RADIUS, 1.0, 0.0, 0.0);
	mallet_player = new Cylinder(MALLET_RADIUS, 1.0, 1.0, 0.0);
	mallet_ai = new Cylinder(MALLET_RADIUS, 0.58, 0.0, 0.827);
	puck->SetCylinderPosition(0.0, 3.1, 0.0);
	mallet_player->SetCylinderPosition(0.0, 3.1, 3.0);
	mallet_ai->SetCylinderPosition(0.0, 3.1, -3.0);
}

Game::~Game() {
	delete puck;
	delete mallet_player;
	delete mallet_ai;
}

void Game::DisplayGame() {
	DisplayBackgroundImage();
	DisplayGameTable();
	puck->DisplayCylinder();
	mallet_player->DisplayCylinder();
	mallet_ai->DisplayCylinder();
}