#include <iostream>
#include <conio.h>
using namespace std;
class Queue
{
	int q[5];
	int r, f;
public:
	Queue()
	{
		r = 0;
		f = 0;
	}
	void insert(int x)
	{
		if (r >= 5)
		{
			cout << "queue over flow" << endl;
			return;
		}

		q[r] = x;
		cout << "inserted: " << q[r] << endl;
		r++;

	}
	void deleted()
	{
		if (f == r)
		{
			cout << "QUEUE IS UNDERFLOW." << endl;
			return;
		}
		cout << "DELETED: " << q[f] << endl;
		f++;
	}
	void display()
	{
		if (r == f)
		{
			cout << " queue empty" << endl;
			return;
		}
		for (int i = f; i < r; i++)
			cout << q[i] << endl;
	}

}Q;

int main()
{
	Q.insert(1);
	Q.insert(2);
	Q.insert(3);
	Q.insert(4);
	Q.insert(5);


	for (int i = 0; i < 5; i++)
	{
		Q.deleted();

	}
	Q.display();



	/*
	cout << " \nDeleted part 1 "<< endl;
	Q.deleted();


	cout << " \nStill Value in Array/Queue " << endl;
	Q.display();



	cout << " \nDeleted part 2" << endl;
	Q.deleted();


	cout << " \nStill Value in Array/Queue " << endl;
	Q.display();

	cout << " \nDeleted part 3" << endl;
	Q.deleted();


	cout << " \nStill Value in Array/Queue " << endl;
	Q.display();
	cout << " \nDeleted part 4" << endl;
	Q.deleted();


	cout << " \nStill Value in Array/Queue " << endl;
	Q.display();


	cout << " \nDeleted part 5" << endl;


	Q.deleted();


	cout << " \nStill Value in Array/Queue " << endl;
	Q.display();

	*/
	return 0;
}
