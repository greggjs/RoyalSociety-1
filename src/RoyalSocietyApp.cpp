#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "List.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class RoyalSocietyApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
	void prepareSettings(Settings* settings);
private:
	Surface* mySurface;
	static const int appWidth = 800;
	static const int appHeight = 600;
	static const int textureSize = 1024;
};

void RoyalSocietyApp::prepareSettings(Settings* settings){
	(*settings).setWindowSize(appWidth,appHeight);
	(*settings).setResizable(false);
}

void RoyalSocietyApp::setup() {
	mySurface = new Surface(appWidth, appHeight, false);
}

void RoyalSocietyApp::mouseDown( MouseEvent event )
{
}

void RoyalSocietyApp::update() {
	uint8_t* data = (*mySurface).getData();
}

void RoyalSocietyApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( RoyalSocietyApp, RendererGl )