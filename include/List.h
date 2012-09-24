#include "Node.h"
#include "Rect.h"

class List {
public:
	Node* sentinel;
private:
	void toFront(Node* node);
	Node* insertAfter(Node* after_, Rect* r);
	void reverse();
};