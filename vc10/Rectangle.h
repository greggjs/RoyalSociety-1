#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Rectangle {
public:
	int xCoord;
	int yCoord;
	int width;
	int height;
	Color8u color;
private:
	static const int appWidth = 800;
	static const int appHeight = 600;
	static const int textureSize = 1024;
	Rectangle();
	Rectangle(int x, int y, int width, int height, Color8u color);
	void draw(uint8_t* pixels);
}