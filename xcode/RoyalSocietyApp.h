#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "List.h"
#include "cinder/Text.h"
#include "cinder/Font.h"

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
	// Variables
	List* my_List_;
	Surface* my_Surface_;
	bool help_;
	static const int appWidth = 800;
	static const int appHeight = 600;
	static const int textureSize = 1024;

	// Methods
	void helpMenu();
};