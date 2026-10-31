#include "Stack.h"
#include "LinkedList.h"
// adds an element to the top of the stack
void push(Stack* s, unsigned int element) 
{
	s->head = addElement(s->head, element);
}
// removes an element from the top of the list and returns it
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
	s->head = nullptr; // when addElement gets a null stack array it allocates memory to it
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