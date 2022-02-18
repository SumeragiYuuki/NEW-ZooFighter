#include"libOne.h"
#include"GAME.h"
#include "STAGE.h"
STAGE::STAGE(class GAME* game) :
	SCENE(game) {
}
STAGE::~STAGE() {
}

void STAGE::draw() {
	printSize(300);
	print("Stage");
}
void STAGE::nextScene() {
	if (isTrigger(KEY_Z)) {
		getgame()->chengeScene(GAME::GAME_CLEAR_ID);
	}
}