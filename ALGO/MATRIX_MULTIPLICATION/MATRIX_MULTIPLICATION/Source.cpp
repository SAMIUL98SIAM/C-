// Matrix Multipulation Code
#include<iostream>
using namespace std;
int main()
{
	int N;
	cout << "ENTER THE SIZE MATRIX MULTIPLICATION: ";
	cin >> N;
	int met1[N][N];
	cout << "SIZE OF MATRIXE NUMBER 1: \n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> met1[i][j];
		}
	}
	cout << "SIZE OF MATRIXE NUMBER 2: \n";
	int met2[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> met2[i][j];
		}
	}
	int res[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			res[i][j] = 0;
			for (int k = 0; k < N; k++)
			{
				res[i][j] += met1[i][k] * met2[k][j];
			}
		}
	}
	cout << "RESULTANT MATRIX IS: \n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
