#include "RoyalSocietyApp.h"

void RoyalSocietyApp::prepareSettings(Settings* settings){
	(*settings).setWindowSize(appWidth,appHeight);
	(*settings).setResizable(false);
}

void RoyalSocietyApp::setup() {
	mySurface = new Surface(appWidth, appHeight, false);
	help = true;
	helpMenu();
	myList = new List;
	// Creates sentinel node
	myList->sentinel = new Node;
    myList->sentinel->next = myList->sentinel;
    myList->sentinel->prev = myList->sentinel;
	// Inserts new nodes
	Node* lastNode;
	Rect* r;
	r = new Rect(100, 100, 50, 50, Color8u(255, 0, 0));
	lastNode = myList->insertAfter(myList->sentinel, r);
	r = new Rect(100, 100, 50, 50, Color8u(0, 255, 0));
	lastNode = myList->insertAfter(lastNode, r);
	r = new Rect(100, 100, 50, 50, Color8u(0, 0, 255));
	lastNode = myList->insertAfter(lastNode, r);
}

void RoyalSocietyApp::helpMenu() {
	Font menu_font = Font("Arial",32);
	string menu = "Help Menu\n\n Keys: \n";
	TextBox tbox = TextBox().alignment( TextBox::CENTER ).font(menu_font).size( Vec2i( 512, 511) ).text( menu );
	tbox.setColor( Color( 1.0f, 1.0f, 1.0f ) );
	tbox.setBackgroundColor( ColorA( 0.5, 0, 0, 1 ) );
	gl::draw(tbox.render());
}

void RoyalSocietyApp::mouseDown( MouseEvent event ) {

}

void RoyalSocietyApp::update() {
	uint8_t* data = (*mySurface).getData();
}

void RoyalSocietyApp::draw() {
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) );
	gl::draw(*mySurface);
}

CINDER_APP_BASIC( RoyalSocietyApp, RendererGl )