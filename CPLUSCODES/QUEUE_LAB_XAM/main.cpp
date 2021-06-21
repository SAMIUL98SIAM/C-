#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;

struct node
{
	int ins_of_time;
	node* current_ordr;
};
node* front = NULL;
node* rear = NULL;

void add_an_order(int value)
{
	node* curr;
	curr = new node;
	if (curr == NULL)
	{
		cout << "OVERFLOW!!" << endl;
	}
	else
	{
		curr->ins_of_time = value;
		if (front == NULL)
		{
			front = curr;
			rear = curr;
			front->current_ordr = NULL;
			rear->current_ordr = NULL;
		}
		else
		{
			rear->current_ordr = curr;
			rear = curr;
			rear->current_ordr = NULL;
		}
	}
}

void process()
{
	node* curr;
	if (front == NULL)
	{
		cout << "UNDERFLOW!!!" << endl;
	}
	else
	{
		///curr = front ;
	   /// front = front->current_ordr ;
	  ///  if(curr->ins_of_time < front->ins_of_time)
	   ///{

		free(curr);

		///delete curr ;
		cout << "PROCCESSING FOOD ORDER: " << curr->ins_of_time << endl;
		if (curr > front)
		{
			curr = front;
			if (front->ins_of_time > curr->ins_of_time)
			{
				front = front->current_ordr;
				free(curr);
				curr = curr->ins_of_time;
				delete curr;
				cout << "PROCCESSING FOOD ORDER: " << curr << endl;
			}
		}


		///}


	///}
	}

	void show()
	{
		node* curr = front;
		if (front == NULL)
		{
			cout << "NULL!!" << endl;
		}
		else
		{
			cout << "TIME TABLE: [ ";
			while (curr != NULL)
			{
				cout << curr->ins_of_time << "->";
				curr = curr->current_ordr;
			}
			cout << "NULL ] " << endl;
		}

	}

	int main()
	{
		int elemants, n;
		cout << "ENTER VALUE OF TIME DELIVERY: ";
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cout << "FOOD DELIVERY TIME: [ " << i << " ] = ";
			cin >> elemants;
			add_an_order(elemants);
		}
		int choic = 0;
		while (true)
		{
			cout << "1.ADD ORDER 2.PROCCESSING ORDER 3.SHOW ORDER 4.ERROR\nRIGHT PRESS 5.EXITS" << endl;
			cout << "CHOOSE YOU'R OPTION: ";
			cin >> choic;
			if (choic == 1)
			{
				cout << "SHOULD TAKE ORDER: ";
				cin >> elemants;
				add_an_order(elemants);
			}
			else if (choic == 2)
			{
				process();
			}
			else if (choic == 3)
			{
				show();
			}
			else if (choic == 4)
			{
				system("cls");
				getch();
				main(); ///RECURSION !!!
			}
			else
			{
				return 0;
			}
		}
		return 0;
	}
