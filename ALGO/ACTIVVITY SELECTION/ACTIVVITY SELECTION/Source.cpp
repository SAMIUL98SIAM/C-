//Activity selection

#include<iostream>
using namespace std;
int main()
{
	int mimo[2], a, b, i; // declaration of a new array
	a = 4;
	mimo[2] = a;
	mimo[a] = 3;
	b = mimo[a - 2] + 2;	//use of expression in index
	mimo[mimo[a]] = mimo[2] + b;

	cout << a << " " << b << endl;
}
/*#include <iostream>
using namespace std;

void FindMAxActivitySelection(int Start[], int Finish[], int n)
{
	int i, j;
	i = 0;
	cout << i << " ";
	for (j = 1; j < n; j++)
	{
		while (Start[j] > Finish[i])
		{
			cout << j << " ";
			i = j;
		}
	}
}

int main()
{
	int S[] = { 1, 2, 3, 5, 8, 5 };
	int F[] = { 2, 4, 5, 7, 9, 9 };
	int N = sizeof(S[0]);
	FindMAxActivitySelection(S, F, N);
	return 0;
}*/