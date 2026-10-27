#include "Queue.h"



void initQueue(Queue* q, unsigned int size)
{
	q->arr = new unsigned int[size];
	q->maxSize = size;
	q->currentSize = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->arr;
	q->arr = 0;
	q->maxSize = 0;
	q->currentSize = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		return;
	}
	q->arr[q->currentSize] = newValue;
	q->currentSize++;
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	unsigned int element = q->arr[0];
	int i;

	if (isEmpty(q))
	{
		return -1;
	}
	
	for (i = 0; i < q->currentSize - 1; i++)
	{
		q->arr[i] = q->arr[i + 1];
	}
	q->currentSize--;
	return element;
}

bool isEmpty(Queue* s)
{
	return s->currentSize == 0;
}

bool isFull(Queue* s)
{
	return s->currentSize == s->maxSize;
}