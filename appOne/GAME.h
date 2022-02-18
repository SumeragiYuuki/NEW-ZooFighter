#pragma once
class GAME
{
	//ƒRƒ“ƒeƒi
private:
	class CONTAINER* Container;
public:
	class CONTAINER* getcontainer() { return Container; }

	enum SCENE_ID {
		TITLE_ID,
		STAGE_ID,
		GAME_CLEAR_ID,
		NUM_SCENES
	};
private:
	class MAP* Maps;
	class SCENE* Scenes[NUM_SCENES];
	SCENE_ID CurSceneId;
public:
	GAME();
	~GAME();

	void ran();
	void chengeScene(SCENE_ID sceneId);
};

