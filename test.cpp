
#include "LinkedList.h"
int main()
{
	Node* head = nullptr;
	head = addElement(head, 5);
	head = addElement(head, 7);
	head = addElement(head, 8);
	printList(head);
	return 0;
}