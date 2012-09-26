#include "Node.h"

class List {
public:
	Node* sentinel_;
	Node* insertAfter(Node* after, Rect* r);
	void toFront(Node* node);
	void reverse();
};