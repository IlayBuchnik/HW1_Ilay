typedef struct Node
{
	unsigned int data;
	Node* next;
}Node;
void removeElement(Node* head);
void addElement(Node* head, unsigned int data);
void printList(Node* head);
