#include "Stack.h"
#include "LinkedList.h"
void push(Stack* s, unsigned int element) // add the last
{
	s->head = addElement(s->head, element);
}
int pop(Stack* s)
{
    int element;
    Node* temp, *prev;
    if (isEmpty(s))
    {
        return -1;
    }
    temp = s->head;
    prev = nullptr;
    while (temp->next != nullptr)
    {
        prev = temp;
        temp = temp->next;
    }
    element = temp->data;

    if (prev == nullptr)
    {
        s->head = nullptr;
    }
    else
    {
        prev->next = nullptr;
    }

    delete temp;
    return element;
}
void initStack(Stack* s)
{
	s->head = nullptr;
}
void cleanStack(Stack* s)
{
	Node* temp;
    while (s->head != nullptr)
    {
        temp = s->head;
        s->head = s->head->next;
        delete temp;
    }
}

bool isEmpty(Stack* s)
{
	return s->head == nullptr;
}