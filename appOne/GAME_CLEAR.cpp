#include"libOne.h"
#include"GAME.h"
#include "GAME_CLEAR.h"
GAME_CLEAR::GAME_CLEAR(class GAME* game) :
	SCENE(game) {
}
GAME_CLEAR::~GAME_CLEAR() {
}

void GAME_CLEAR::draw() {
	printSize(300);
	print("GAME_CLEAR");
}
void GAME_CLEAR::nextScene() {
	if (isTrigger(KEY_Z)) {
		getgame()->chengeScene(GAME::TITLE_ID);
	}
}