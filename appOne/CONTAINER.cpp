#include "CONTAINER.h"
void CONTAINER::load() {
	setData();
}
void CONTAINER::setData() {
	Data.map.backColor = COLOR(200, 0, 0);
	Data.title.textColor = COLOR(0, 255, 0);
	Data.title.textSize = 400;
	Data.title.pos.x = 180;
	Data.title.pos.y = 700;
	strcpy_s(Data.title.str, "KUNOICHI");
}