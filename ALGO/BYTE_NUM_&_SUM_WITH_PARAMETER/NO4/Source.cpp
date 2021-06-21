#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a;
	float b;
	char c;
	string s;

	int w = sizeof(a);
		cout << "INTEGER BYTE: " << w << endl;
		int x = sizeof(b);
		cout << "FLOAT BYTE: " << x << endl;
		int y = sizeof(c);
		cout << "INTEGER BYTE: " << y << endl;
		int z = sizeof(a);
		cout << "INTEGER BYTE: " << w << endl;

		cout << "ENTER TWO NUMBER'S: ";
		cin >> a >> b;
		int sum;
		sum = (a, (int)b, a + b);
		cout << "SUM: " << sum << endl;



}