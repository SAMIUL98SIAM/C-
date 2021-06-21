#include <iostream>

using namespace std;

int main()
{
	int n, row,col;

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
		for (row = n-1; row >= 1; row--)
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
			for (col = 1; col <= row; col++ )
			{
				cout << row << " ";

			}
			cout << endl;
		}
		for (row = n - 1; row >= 1; row--)
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
			for (col = 1; col <= n-row; col++)
			{
				cout << " ";
			}
			for (col = 1; col <= row ; col++)
			{
				cout << col ;
			}
			cout << endl;
		}
	}
	else if(key == 4)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= row; col++)
			{
				cout << (col*row) << " " ;
			}
			cout << endl;
		}

	}
	else if (key == 5)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= n - row; col++)
			{
				cout << " ";
			}
			for (col = 1; col <= 2*row-1; col++)
			{
				cout << row;
			}
			cout << endl;
		}
	}
	else if (key == 6)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = n; row >= 1; row--)
		{
			for (col = 1; col <= n - row ; col++)
			{
				cout << " ";
			}
			for (col = 1; col <=2*row-1; col++)
			{
				cout << col;
			}
			cout << endl;
		}
	}
	else if (key == 7)
	{
	cout << "ENTER THE NUMBER: ";
	cin >> n;
	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= n - row; col++)
		{
			cout << " ";
		}
		for (col = 1; col <= row; col++)
		{
			cout << row << " "; 
		}
		cout << endl;
	}
	}
	else if (key == 8)
	{
		cout << "ENTER THE NUMBER: ";
		cin >> n;
		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= n; col++)
			{
				if (row == 1 || row == n || col == 1 || col == n)
				{
					cout << col;
				}
				else
					cout << " ";
			}
			cout << endl;
		}
	}
	else if (key == 9)
	{
	cout << "ENTER THE NUMBER: ";
	cin >> n;
	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= row; col++)
		{
			if (col == 1 || row == n || row == col) cout << col ;
			else cout << " " ;
		}
		cout << endl;
	}
    }
	else if (key == 10)
	{
	cout << "ENTER THE NUMBER: ";
	cin >> n;
	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= row; col++)
		{
			if (col == row || row +col == n+1) cout << col << " ";
			else cout << " ";
		}
		cout << endl;
	}
	}
	else if (key == 11)
	{
	          
	cout << "ENTER THE NUMBER: ";
	cin >> n;
	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= n-row; col++)
		{
			cout <<  " ";
		}
		for (col = 1; col <=row ; col++)
		{
			cout << col;
		}
		for (col = row-1; col >= 1; col--)
		{
			cout << col;
		}
		cout << endl; 
		
	}
	for (row = n-1; row >= 1; row--)
	{
		for (col = 1; col <= n - row; col++)
		{
			cout << " ";
		}
		for (col = 1; col <=row; col++)
		{
			cout << col;
		}
		for (col = row-1; col >= 1; col--)
		{
			cout << col;
		}
		cout << endl;
	}
    }

 
}