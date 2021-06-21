#include<iostream>
using namespace std;
int main()
{
	int mat_1[100][100], mat_2[100][100], mat_3[100][100], row, column;
	int sum[100][100];
	cout << "enter take the row : ";
	cin >> row;
	cout << "enter take the column : ";
	cin >> column;
	cout << "Enter take the 1st matrix: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> mat_1[i][j];
		}
	}
	cout << "Enter take the 2nd matrix: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> mat_2[i][j];
		}
	}
	cout << "Enter take the 3rd matrix: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> mat_3[i][j];
		}
	}
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			sum[i][j] = mat_1[i][j] + mat_2[i][j] + mat_3[i][j];
		}
	}
	cout << "Here below the sum of mat_1 + mat_2 + mat_3 = " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
}