#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int num, rem, temp, sum = 0;
	int key = 0;

	cout << "TAKE THE OPTION: ";
	cin >> key;
	if (key == 1)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> num;
		temp = num;
		while (temp != 0)
		{
			rem = temp % 10;
			sum = sum + rem;
			temp = temp / 10;
		}
		cout << "SUM OF DIGIT'S: " << sum << endl;
	}
	else if (key == 2)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> num;
		temp = num;
		while (temp != 0)
		{
			rem = temp % 10;
			sum = sum*10 + rem;
			temp = temp / 10;
		}
		cout << "REVERSE ORDER: " << sum << endl;
	}
	else if(key == 3)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> num;
		temp = num;
		while (temp != 0)
		{
			rem = temp % 10;
			sum = sum * 10 + rem;
			temp = temp / 10;
		}
		if (num == sum) cout << "PELINDROME NUMBER: " << sum << endl;
		else
			cout << "NOT PELINDROME  NUMBER!!" << endl;
	}
	else if (key == 4)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> num;
		temp = num;
		while (temp != 0)
		{
			rem = temp % 10;
			sum = sum + rem * rem * rem;
			temp = temp / 10;
		}
		if (num == sum) cout << "ARMSTRONG NUMBER: " << sum << endl;
		else cout << "NON-ARMSTRONG NUMBER" << endl;

	}
	else if (key == 5)
	{
		int c = 0;
		cout << "ENTER THE NUMBER: ";
		cin >> num;
		while (num != 0)
		{
			num = num / 10;
			++c;
		}
		cout << "COUNTED DIGIT'S: " << c << endl;
	}
	else if (key == 6)
	{
		int fact = 1;
		cout << "ENTER THE NUMBER: ";
		cin >> num;
		temp = num;
		while (temp != 0)
		{
			rem = temp % 10;
			sum = sum + rem;
			for (int i = 1; i <= rem; i++)
			{
				fact = fact * i;
			}
			temp = temp / 10;
		}
		if (sum == num) cout << "STRONG NUMBER!!" << endl;
		else cout << "NON-STRONG NUMBER" << endl;
	} 
	
	return 0;
}