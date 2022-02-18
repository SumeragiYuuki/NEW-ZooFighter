#include "libOne.h"
#include"CONTAINER.h"
#include"TITLE.h"
#include"STAGE.h"
#include"GAME_CLEAR.h"
#include"MAP.h"
#include "GAME.h"
GAME::GAME() {
	Container = new CONTAINER;
	Maps = new MAP(this);
	Scenes[TITLE_ID] = new TITLE(this);
	Scenes[STAGE_ID] = new STAGE(this);
	Scenes[GAME_CLEAR_ID] = new GAME_CLEAR(this);
	CurSceneId = TITLE_ID;
}

GAME::~GAME() {
	delete Container;
	delete Maps;
	for (int i = 0; i < NUM_SCENES; i++) {
		delete Scenes[i];
	}
}
void GAME::ran() {
	window(1920, 1080);

	Container->load();
	Maps->create();
	Scenes[TITLE_ID]->create();

	while (notQuit) {
		Maps->draw();
		Scenes[CurSceneId]->proc();
	}
}
void GAME::chengeScene(SCENE_ID sceneId) {
	CurSceneId = sceneId;
}
