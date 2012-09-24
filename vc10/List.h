#include "Node.h"
#include "Rectangle.h"

class List {
public:
	Node* sentinel;
private:
	void toFront(Node* node);
	void insertAfter(Node* after_, Rectangle rect);
	void reverse();
};