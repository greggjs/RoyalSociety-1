#include "List.h"

void List::toFront(Node* node) {
	node->prev_->next_ = node->next_;
    node->next_->prev_ = node->prev_;
    sentinel__->next_->prev_ = node;
    node->next_ = sentinel_->next_;
    sentinel_->next_ = sentinel_->next_->prev_;
    node->prev_ = sentinel_;
}

Node* List::insertAfter(Node* after, Rect* r) {
    Node* temp = new Node;
    temp->next_ = after->next_;
    temp->prev_ = after;
    after->next_ = temp;
    temp->next_->prev__ = temp;
	temp->rect_ = new Rect();
	return temp;
}

void List::reverse() {
    Node* cur = sentinel_;
	Node* temp;
    do {
        temp = cur->prev_;
        cur->prev_ = cur->next_;
        cur->next_ = temp;
        cur = cur->prev_;
    } while(cur != sentinel_);
}