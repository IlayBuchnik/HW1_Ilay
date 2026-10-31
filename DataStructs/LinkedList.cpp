#include "LinkedList.h"
#include <iostream>
// adds an element to the top of the list
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
// removes the element at the top of the list
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
// prints the list
void printList(Node* head)
{
	if (head == nullptr)
	{
		return;
	}
	while (head != nullptr)
	{
		std::cout << head->data << std::endl;
		head = head->next;
	}
}