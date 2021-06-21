#include <iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* head = NULL;

node* createnode(int item)
{
	node* newNode = new node;
	newNode->data = item;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int item)
{
	node* newNode = createnode(item);
	newNode->next = head;
	head = newNode;
}
void InsertAtTail(int item)
{
	node* newNode = createnode(item);
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	node* curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = newNode;
}

void InsertAtAnyPostion(int n,int item)
{
	node* newNode = createnode(item);
	if (n == 1)
	{
		newNode->next = head;
		head = newNode;
		return;
	}
	node* curr = head;
	for (int i = 1; i < n - 1; i++)
	{
		curr = curr->next;
	}
	newNode->next = curr->next;
	curr->next = newNode;
}

void DeleteHead(int n)
{
	if (head == NULL)
	{
		cout << "ERROR!!" << endl;
		return;
	}
	node* curr = head;
	if (n == 1)
	{
		head = curr->next;
		delete curr;
		return;
	}
	for (int i = 1; i < n - 1; i++)
	{
		curr = curr->next;
	}
	node* temp = curr->next;
	curr->next = temp->next;
	delete temp;
	return;
}

void DeleteTail()
{
	node* curr = head;
	node* temp = curr;
	int i = 0;
	while (curr->next != NULL)
	{
		if (i > 0)
		{
			temp = temp->next;
		}
		++i;
		curr = curr->next;
	}
	temp->next = NULL;
	delete curr;
	return;
}

void Travers()
{
	node* curr = head;
	cout << "ARRAY: [ ";
	while (curr != NULL)
	{
		cout << curr->data << "->";
		curr = curr->next;
	}
	cout << " ] " << endl;
}

void Search(int s_key)
{
	node* curr = head;
	while (curr != NULL)
	{
		if (s_key == curr->data)
		{
			cout << "FOUND!!" << endl;
			return;
		}
		curr = curr->next;
	}
	cout << "NOT FOUND!!" << endl;
}



int main()
{
	head = NULL;
	InsertAtHead(5);
	InsertAtHead(6);
	InsertAtHead(7);
	InsertAtHead(8);
	Travers();

	InsertAtTail(9);
	InsertAtTail(10);
	Travers();

	InsertAtAnyPostion(2, 11);
	Travers();
	DeleteHead(5);
	Travers();
	Search(10);
	Search(100);
	DeleteHead(1);
	Travers();
	DeleteTail();
	Travers();
}
