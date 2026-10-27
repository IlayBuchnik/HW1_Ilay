#include "LinkedList.h"
#include <iostream>
void removeElement(Node* head)
{
	if (head == nullptr)
	{
		return;
	}

	if (head->next == nullptr)
	{
		delete head;
		head = nullptr;
		return;
	}

	while (head->next->next != nullptr) // cycling to the element that's before the last
	{
		head = head->next;
	}
	delete head->next;
	head->next = nullptr;
}
void addElement(Node* head, unsigned int data)
{
	if (head == nullptr)
	{
		return;
	}

	while (head->next != nullptr)
	{
		head = head->next;
	}
	head->next = new Node;
	head->next->data = data;
	head->next->next = nullptr;
}
void printList(Node* head)
{
	while (head != nullptr)
	{
		std::cout << head->data << std::endl;
		head = head->next;
	}
}