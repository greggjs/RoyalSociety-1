#include "List.h"
#include "Rectangle.h"

void List::toFront(Node* node) {
	node->prev->next = node->next;
    node->next->prev = node->prev;
    sentinel->next->prev = node;
    node->next = sentinel->next;
    sentinel->next = sentinel->next->prev;
    node->prev = sentinel;
}

void List::reverse(){
    Node* cur = sentinel;
	Node* temp;
    do {
        temp = cur->prev;
        cur->prev = cur->next;
        cur->next = temp;
        cur = cur->prev;
    } while(cur != sentinel);
}

void List::insertAfter(Node* after_me, Rectangle r){
    Node* temp = new Node;
    temp->next = after_me->next;
    temp->prev = after_me;
    after_me->next = temp;
    temp->next->prev = temp;
    temp->rect = r;
}