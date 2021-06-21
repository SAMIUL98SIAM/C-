#include<iostream>
using namespace std;
int main()
{
	int T, N, i, j;
	cin >> T;
	for (i = 1; i <= T; i++)
	{
		cin >> N;
		for (j = 1; j <= N*N; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}