#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
	unsigned int data;
	Node* next;
}Node;

Node* addElement(Node* head, unsigned int data);
Node* removeElement(Node* head);
void printList(Node* head);

#endif