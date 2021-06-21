#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

#define SIZ 6
int rear = -1;
int front = -1;
char *A = new char[SIZ];

bool full()
{
	if (front == rear + 1 || rear == SIZ - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void enQeue(char X)
{
	if (full())
	{
		cout << "OVERFLOW!!" << endl;
	}
	else
	{
		if (front == -1)
		{
			front = 0;
		}

		rear = (rear + 1) % SIZ;
		A[rear] = X;
	}
}

bool null()
{
	if (front == - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void deQeue()
{
	char ch;
	if (null())
	{
		cout << "UNDERFLOW!!" << endl;
	}
	else
	{
		ch = A[front];
		if (front == rear)
		{
			front = - 1;
			rear = -1;
		}

		front = (front + 1) % SIZ;

		cout << "DELETE: " << ch << endl;
	}
}

void display()
{
	if (front <= rear)
	{
		cout << "FRONT: " << front << endl;
		cout << "CIRCULAR QUEUE: [ ";
		for (int i = front; i <= rear; i = (i + 1) % SIZ)
		{
			cout << A[i] << " ";
		}
		cout << " ] " << endl;
		cout << "REAR: " << rear << endl;
	}
	else
	{
		cout << "NUL!!" << endl;
	}
}


int main()
{
	int key = 0;
	while (true)
	{
		cout << "TAKE THE KEY: ";
		cin >> key;
		switch (key)
		{
			case 1 :
				    char ele;
					cout << "INSERT: ";
					cin >> ele;
					enQeue(ele);
					break;

			case 2 :
					deQeue();
					break;

			case 3 :
					 display();
					 break;

			case 4 :
				     cout << "WRONG INPUT!!\nPRESS THE RIGHT KEY: ";
					 main();
					 break;






		}
	}
	return 0;
}
