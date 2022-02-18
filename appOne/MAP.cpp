#include"libOne.h"
#include"CONTAINER.h"
#include "GAME.h"
#include "MAP.h"
MAP::MAP(class GAME* game) :
	GAME_OBJECT(game) {
}
MAP::~MAP() {
}
void MAP::create() {
	Map = getgame()->getcontainer()->getmap();
}   
void updata() {
}
void MAP::draw() {
	clear(Map.backColor);
}
