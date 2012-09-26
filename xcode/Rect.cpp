#include "Rect.h"

Rect::Rect() {
	xCoord_ = 0;
	yCoord_ = 0;
	width_ = 0;
	height_ = 0;
	color_ = Color8u(0,0,0);
}

Rect::Rect(int x, int y, int w, int h, color_8u c) {
	xCoord_ = x;
	yCoord_ = y;
	width_ = w;
	height_ = h;
	color_ = c;
}

void Rect::draw(uint8_t* pixels) {
	int xBeg = xCoord_;
	int xEnd = xCoord_ + width_;
	int yBeg = yCoord_;
	int yEnd = yCoord_ + height_;

	for(int y = yBeg; y < yEnd; y++) {
		for(int x = xBeg; x < xEnd; x++){
			pixels[3*(x + y*appwidth_)] = color_.r;
			pixels[3*(x + y*appwidth_)+1] = color_.g;
			pixels[3*(x + y*appwidth_)+2] = color_.b;
		}
	}
}