#include "RoyalSocietyApp.h"

void RoyalSocietyApp::prepareSettings(Settings* settings){
	(*settings).setWindowSize(appWidth,appHeight);
	(*settings).setResizable(false);
}

void RoyalSocietyApp::setup() {
	mySurface_ = new Surface(appWidth, appHeight, false);
	help_ = true;
	helpMenu();
	my_List_ = new List;
	// Creates sentinel_ node
	my_List_->sentinel_ = new Node;
    my_List_->sentinel_->next_ = my_List_->sentinel_;
    my_List_->sentinel_->prev_ = my_List_->sentinel_;
	// Inserts new nodes
	Node* lastNode;
	Rect* r;
	r = new Rect(100, 100, 50, 50, Color8u(255, 0, 0));
	lastNode = my_List_->insertAfter(my_List_->sentinel_, r);
	r = new Rect(100, 100, 50, 50, Color8u(0, 255, 0));
	lastNode = my_List_->insertAfter(lastNode, r);
	r = new Rect(100, 100, 50, 50, Color8u(0, 0, 255));
	lastNode = my_List_->insertAfter(lastNode, r);
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
	uint8_t* data = (*mySurface_).getData();
}

void RoyalSocietyApp::draw() {
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) );
	gl::draw(*mySurface_);
}

CINDER_APP_BASIC( RoyalSocietyApp, RendererGl )