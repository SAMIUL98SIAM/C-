#include <iostream>

using namespace std;

#define size 6
int r = -1;
int f = -1;
char queue[size];

void enQueue(char X)
{
	if (r > size-1)
	{
		cout << "OVERFLOW!!" << endl;
		return;
	}
	else {
		queue[r++] = X;

	}
}
char deQueue()
{
	if (f == r)
	{
		cout << "UNDERFLOW!!" << endl;

	}
	else{

	return queue[f++] ;
	}
}

void display()
{
	if (f <= r) /// (if (F < R))
	{
		cout << "QUEUE INTRUMENT'S ARE: " << endl;
		//return;
		for (int i = f; i <= r; i++)
		{
			cout << queue[i] << " ";
			cout << endl;
		}
	}
	else
	{
		cout << "EMPTY!!" << endl;
	}

}

int main()
{
	int key;
	while (true)
	{
		cout << "1.INSERT 2.DELETE 3.SHOW 4.EXITS" << endl;
		cin >> key;

		switch (key)
		{
			case 1:
				char ele;
				cout << "INSERT ALL: ";
				cin >> ele;
				enQueue(ele);
				break;

			case 2:
				cout << "DELETED ALL: " << deQueue() << endl ;
break;
			case 3:
				display();
				cout << endl;
				break;
		case 4:
			return 0;

			break;
		}
	}

	return 0;
}
