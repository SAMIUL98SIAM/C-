#include <iostream>

using namespace std;

int main()
{
	int n, row, col;

	int key = 0;
	cout << "TAKE THE KEY: ";
	cin >> key;
	if (key == 1)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row; col++)
			{
				cout << col << " ";
			}
			cout << endl;
		}
	}
	else if (key == 2)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row; col++)
			{
				cout << row << " ";
			}
			cout << endl;
		}
	}
	else if (key == 2)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row; col++)
			{
				cout << row << " ";
			}
			cout << endl;
		}
	}
	else if (key == 3)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row; col++)
			{
				cout << col % 2 << " ";
			}
			cout << endl;
		}
	}
	else if (key == 4)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row; col++)
			{
				cout << row % 2 << " ";
			}
			cout << endl;
		}
	}
	else if (key == 5)
	{
		int roww, coll;
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (roww = 1; roww <= n; roww++)
		{
			for (coll = 1; coll <= roww; coll++)
			{
				//cout << (char)coll+64 << " ";
				printf("%c ", coll + 64);
			}
			cout << endl;
		}
	}
	else if (key == 6)
	{
		int roww, coll;
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (roww = 1; roww <= n; roww++)
		{
			for (coll = 1; coll <= roww; coll++)
			{
				//cout << (char)roww+64<< " ";
				printf("%c ", roww + 64);
			}
			cout << endl;
		}
	}
	else if (key == 7)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = n; row >= 1; row--)
		{
			for (col = 1; col <= row; col++)
			{
				cout << col << " ";
			}
			cout << endl;
		}
	}
	else if (key == 8)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = n; row >= 1; row++)
		{
			for (col = 1; col <= row; col++)
			{
				cout << row << " ";
			}
			cout << endl;
		}
	}
	else if (key == 10)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = n; row >= 1; row--)
		{
			for (col = 1; col <= row; col++)
			{
				cout << col % 2 << " ";
			}
			cout << endl;
		}
	}
	else if (key == 11)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = 1; row <= n; row--)
		{
			for (col = 1; col <= row; col++)
			{
				cout << row % 2 << " ";
			}
			cout << endl;
		}
	}
	else if (key == 12)
	{
		int roww, coll;
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (roww = n; roww >= 1; roww--)
		{
			for (coll = 1; coll <= roww; coll++)
			{
				//cout << (char)coll+64 << " ";
				printf("%c ", coll + 64);
			}
			cout << endl;
		}
	}
	else if (key == 13)
	{
		int roww, coll;
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (roww = n; roww >= 1; roww--)
		{
			for (coll = 1; coll <= roww; coll++)
			{
				//cout << (char)roww+64<< " ";
				printf("%c ", roww + 64);
			}
			cout << endl;
		}
	}
	 else if (key == 14)
	  {
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (int row = n; row >= 1; row--)
		{
			for (col = 1; col <=row; col++)
			{
				cout << " * " << " ";
			}
			cout << endl;
		}
	  }
   
 }
	
