#include <iostream>
using namespace std;
int main()
{
	int fact = 1, count = 0, num;

	int key = 0;
	cout << "ENTER THE KEY: ";
	cin >> key;
	if (key == 1)
	{
		cout << "\t\t\tWELVOME TO FACTORIAL" << endl;
		cout << "ENTER THE NUMBER: ";
		cin >> num;
		for (int i = 1; i <= num; i++)
		{
			fact = fact * i;
		}
		cout << fact << endl;
	 }
	else if (key == 2)
	{
		cout << "\t\t\tWELCOME TO MULTIPLICATION" << endl;
		cout << "ENTER THE NUMBER: ";
		cin >> num;
		for (int i = 1; i <= 10; i++)
		{
			cout << num << "X" << i << " = " << num * i << endl;
		}
	}
	else if (key == 3)
	{
		cout << "\t\t\tWELCOME TO PRIME NUMBER: ";
		cout << endl;
		cout << "ENTER THE NUMBER: ";
		cin >> num;
		for (int i = 2; i < num; i++)
		{
			while (num % i == 0)
			{
				count++;
				break;
			}
		}
		if (count == 0) cout << "PRIME NUMBER" << endl;
		else cout << "NON-PRIME NUMBER" << endl;
		
	}
	
}