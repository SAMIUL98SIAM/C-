#include<iostream>
using namespace std;
struct node
{
	int data;
	node* prev;
	node* next;
}*head=NULL,*tail = NULL;

node *createnode()
{
	node* newNode,*curr;
	
	int N;
	cout << "HOW MANY NODE'S YOU WANT TON CREATE IN: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		newNode = new node;
		cout << "ELEMANT'S: [ " << i << " ] = ";
		cin >> newNode->data;
		newNode->next = NULL;
		newNode->prev = NULL;
		if (head == NULL || tail == NULL)
		{
			head = newNode;
			tail = newNode;
			curr = newNode;
		}
		else
		{
			curr->next = newNode;
			newNode->prev = curr;
			curr = newNode;
			tail = curr;
		}
	}
}

int Searchdata(int s_key)
{
	node* curr = head;
	int pos = 0;
	while (curr != NULL)
	{
		pos++;
		if (s_key == curr->data)
		{
			return pos;
		}
		curr = curr->next;
	}
	return -1;
}

node* f_insert()
{
	node* newNode = new node;
	node* curr;
	cout << "ENTER THE VALUE OF FIRST INSERTION: ";
	cin >> newNode->data;
	newNode->next = NULL;
	newNode->prev = NULL;
	curr = head;
	curr->next = newNode;
	newNode->prev = curr;
	tail = newNode;
}

node* m_n_l_insert()
{
	node* newNode = new node;
	node* curr;
	node* temp;
	cout << "ENTER THE VALUE OF MIDDLE AND FIRST INSERTION: ";
	cin >> newNode->data;
	newNode->next = NULL;
	newNode->prev = NULL;
	int key, pos;
	cout << "FIND THE POSITION TO BE INSERTED: ";
	cin >> key;
	pos = Searchdata(key);
	curr = head;
	for (int i = 1; i <= pos - 1; i++)
	{
		curr = curr->next;
	}
	temp = curr->next;
	curr->next = newNode;
	newNode->prev = curr;
	newNode->next = temp;
	temp->prev = newNode;
}

node* Delete()
{
	node *struc
}

void Traverse()
{
	node* curr = head;
	cout << "DOUBLY LINK LIST ARRAY: [ ";
	while (curr != NULL)
	{
		cout << curr->data << "->";
		curr = curr->next;
	}
	cout << "NULL ] " << endl;
	
}

void Reverse()
{
	node* curr = tail;
	cout << "DOUBLY LINK LIST REVERSE ARRAY: [ ";
	while (curr != NULL)
	{
		cout << curr->data << "->";
		curr = curr->prev;
	}
	cout << "NULL ] " << endl;
	
}


int main()
{
	int pos, elem;
	createnode();
	int k = 0;
	while (true)
	{
		cout << "1.SEARCHING 2.INSERT AT MIDDLE AND LAST 3.INSERT AT HEAD 4.DELETE 5.TRAVERS 6.REVERS 7.EXITS" << endl;
		cout << "ENTER TAKE THE KEY: ";
		cin >> k;
		if (k == 1)
		{
			cout << "ENTER THE VALUE OF SEARCHING: ";
			cin >> elem;
			pos = Searchdata(elem);
			if (pos == -1) cout << "NOT FOUND!!" << endl;
			else
			{
				cout << "FOUND!!!" << endl;
			}
		}
		else if (k == 2)
		{
			m_n_l_insert();
		}
		else if (k == 3)
		{
			f_insert();
		}
		/*else if (k == 4)
		{
			l_delete();
		}*/
		else if (k == 5)
		{
			Traverse();
		}
		else if (k == 6)
		{
			Reverse();
		}
		else
		{
			return 0;
		}
	}

}
