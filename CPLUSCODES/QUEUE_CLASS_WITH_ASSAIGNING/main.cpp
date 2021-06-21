#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std ;

class B3
{
	char q[4];
	int rear ;
	int fron ;
public:
	void init()
	{
		rear = 0;
		fron = 0;
	}
	void insert(char ch)
	{
		if (rear >= 4)
		{
			cout << "QUEUE IS OVERFLOW." << endl;
			return;
		}
		q[rear] = ch;
		cout << "INSERTED: " << q[rear] << endl;
		rear++;
	}
	void deleted()
	{
		if (fron == rear)
		{
			cout << "QUEUE IS UNDERFLOW." << endl;
			return;
		}
		cout << "DELETED: " << q[fron] << endl;
		fron++;
	}
	void show()
	{
		if (rear == fron)
		{
			cout << "QUEUE IS EMPTY." << endl;
			return;
		}
		for (int i = fron; i < rear; i++)
		{
			cout << "EXTENSION: " << q[i] << endl;
		}
	}

}O;

int main()
{
    system("color 0F") ;
    O.init() ;

    getch() ;

	O.insert('A');
	O.insert('Q');
	O.insert('U');
	O.insert('R');

	getch();

	for (int i = 0; i < 4; i++)
	{
		O.deleted();
	}

	getch();

	O.show();
	getch() ;
	system("cls") ;
	system("color 08") ;
	cout << "\t\t\t\t\tTHANK YOU." << endl;

	return 0;
}
