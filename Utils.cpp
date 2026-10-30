#include "Utils.h"
#include "Stack.h"
#include "iostream"
#define SIZE 10
void reverse(int* nums, unsigned int size)
{
	int i;
	Stack* temp = new Stack;
	temp->head = nullptr;
	for (i = 0; i < size; i++)
	{
		push(temp, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(temp);
	}
	cleanStack(temp);
	delete temp;
}
int* reverse10()
{
	int arr[SIZE], i;
	for (i = 0; i < SIZE; i++)
	{
		std::cin >> arr[i];
	}
	reverse(arr, SIZE);
	return arr;
}