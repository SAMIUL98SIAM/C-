#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num1,num2;

	int key = 0;
	cout << "TAKE THE KEY: ";
	cin >> key;
	if (key == 1)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> num1;
		if (num1> 0)
			cout << "POSITIVE NUMBER" << endl;
		else cout << "NEGATIVE NUMBER" << endl;
		main();
	}
	else if (key == 2)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> num1;
		if (num1 % 2 == 0)
			cout << "EVEN NUMBER!!" << endl;
		else cout << "ODD NUMNBR!!" << endl;
		main();
	}
	else if (key == 3)
	{
		cout << "ENTER TWO NUMBER'S: ";
		cin >> num1 >> num2;
		if (num1 > num2)
		{
			cout << "LAREGEST NUMBER: " << num1 << endl;
		}
		else cout << "LAREGEST NUMBER: " << num2 << endl;
		main();
	}
	else if (key == 4)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> num1;
		if (num1 < 0)
			cout << -num1 << endl;
		else cout << num1 << endl;
		main();
	}
	else
	{
		cout << "THE END" << endl;
	}
}