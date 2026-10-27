#include "LinkedList.h"
#include <iostream>
Node* addElement(Node* head, unsigned int data)
{
	Node* current;
	if (head == nullptr)
	{
		head = new Node;
		head->data = data;
		head->next = nullptr;
		return head;
	}
	current = head;
	while (current->next != nullptr)
	{
		current = current->next;
	}
	current->next = new Node;
	current->next->data = data;
	current->next->next = nullptr;
	return head;
}
Node* removeElement(Node* head)
{
	Node* current;

	if (head == nullptr)
	{
		return nullptr;
	}
	if (head->next == nullptr)
	{
		delete head;
		return nullptr;
	}
	current = head;
	while (current->next->next != nullptr)
	{
		current = current->next;
	}

	delete current->next;
	current->next = nullptr;
	return head;
}
void printList(Node* head)
{
	while (head != nullptr)
	{
		std::cout << head->data << std::endl;
		head = head->next;
	}
}