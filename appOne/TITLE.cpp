#include"libOne.h"
#include"CONTAINER.h"
#include "GAME.h"
#include "TITLE.h"
TITLE::TITLE(class GAME* game) :
	SCENE(game) {
}
TITLE::~TITLE() {
}
void TITLE::create() {
	Title = getgame()->getcontainer()->gettitle();
}
void TITLE::draw() {
	fill(Title.textColor);
	textSize(Title.textSize);
	text(Title.str, Title.pos.x, Title.pos.y);
}
void TITLE::nextScene() {
	if (isTrigger(KEY_Z)) {
		getgame()->chengeScene(GAME::STAGE_ID);
	}
}