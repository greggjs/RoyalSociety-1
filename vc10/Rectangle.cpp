#include "Rectangle.h"

Rectangle::Rectangle(){
	xCoord = 0;
	yCoord = 0;
	width = 0;
	height = 0;
	color = Color8u(0,0,0);
}

Rectangle::Rectangle(int x, int y, int w, int h, Color8u c){
	xCoord = x;
	yCoord = y;
	width = w;
	height = h;
	color = c;
}

void Rectangle::draw(uint8_t* pixels) {
	int xBeg = xCoord;
	int xEnd = xCoord + width;
	int yBeg = yCoord;
	int yEnd = yCoord + height;

	for(int y = yBeg; y < yEnd; y++){
		for(int x = xBeg; x < xEnd; x++){
			pixels[3*(x + y*appWidth)] = color.r;
			pixels[3*(x + y*appWidth)+1] = color.g;
			pixels[3*(x + y*appWidth)+2] = color.b;
		}
	}
}