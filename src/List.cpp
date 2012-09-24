#include "List.h"
#include "Rect.h"

void List::toFront(Node* node) {
	node->prev->next = node->next;
    node->next->prev = node->prev;
    sentinel->next->prev = node;
    node->next = sentinel->next;
    sentinel->next = sentinel->next->prev;
    node->prev = sentinel;
}

Node* List::insertAfter(Node* after_, Rect r) {
    Node* temp = new Node;
    temp->next = after_->next;
    temp->prev = after_;
    after_->next = temp;
    temp->next->prev = temp;
	temp->rect = r;
	return temp;
}

void List::reverse() {
    Node* cur = sentinel;
	Node* temp;
    do {
        temp = cur->prev;
        cur->prev = cur->next;
        cur->next = temp;
        cur = cur->prev;
    } while(cur != sentinel);
}