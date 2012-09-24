#include "Node.h"

class List {
public:
	Node* sentinel;
	Node* insertAfter(Node* after_, Rect* r);
	void toFront(Node* node);
	void reverse();
};