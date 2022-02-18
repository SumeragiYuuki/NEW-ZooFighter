#pragma once
#include "GAME_OBJECT.h"
#include"libOne.h"
class MAP :
    public GAME_OBJECT
{
public:
    struct DATA {
        COLOR backColor;
        
    };
private:
    DATA Map;
public:
    MAP(class GAME* game);
    ~MAP();

    void create();
    void updata();
    void draw();
    
};
