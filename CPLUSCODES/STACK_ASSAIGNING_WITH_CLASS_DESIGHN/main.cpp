#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

#define s 8

class stck
{
	int  ch[8] ;
	int top;
public:
	void init()
	{
		top = 0;
	}
	void push(int x)
	{
		if (top >= 8)
		{
			cout << "STACK IS FULL." << endl ;
			return ;
		}
		ch[top] = x;
		cout << "ALL PUSH CHARACTER: " << ch [top] << endl;
		top++;
	}
	int pop()
	{
		if (top <= 0)
		{
			cout << "STACK IS EMPTY." << endl ;
			return 0;
		}
		top-- ;
		return ch [top] ;
	}
}obj;

int main()
{
	system("color 0F");
	cout << "\t\t\t\t\t\tWELCOME TO STACK" << endl ;
	obj.init() ;
	getch() ;
	cout << "\t\tPUSH STATEMENT'S" << endl;
	cout << "\t\t---------------" << endl;

	obj.push(1) ;
	getch();
	obj.push(2) ;
	getch();
	obj.push(3);
	getch();
	obj.push(4);
	getch();
	obj.push(5);
	getch();
	obj.push(6);
	getch();
	obj.push(7);
	getch();
	obj.push(8);
	getch();

	system("color 07") ;
	cout << "\t\tPOP STATEMENT'S" << endl ;
	cout << "\t\t---------------" << endl;
	for (int i =0 ; i<8; i++)
	{
		cout << "POP OBJ: " << obj.pop()   << endl ;

	}
	getch() ;
	system("cls") ;
	system("color 0B") ;

	cout << "\t\t\t\t\t\tTHANK YOU" << endl;
	cout << "\t\t\t\t\t\t---------" << endl;

	return 0;

}
