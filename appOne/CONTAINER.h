#pragma once
#include"TITLE.h"
#include"MAP.h"
class CONTAINER
{
private:
	struct DATA {
		TITLE::DATA title;
		MAP::DATA map;
	};
	DATA Data;
public:
	void load();
	void setData();
	const TITLE::DATA& gettitle() { return Data.title; }
	const MAP::DATA& getmap() { return Data.map; }
};

