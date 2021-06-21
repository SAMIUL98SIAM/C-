#include <iostream>
using namespace std;

void print(int arr[], int n)
{
	cout << "ARRAY: [ ";
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << " ] " << endl;
}

int main()
{
	int i, j, k = 0;
	int *a, A_MAX;
	cout << "ENTER THE SIZE ARRAY(A): ";
	cin >> A_MAX;
	a = new int[A_MAX];
	int *b, B_MAX;
	cout << "ENTER THE SIZE ARRAY(B): ";
	cin >> B_MAX;
	b = new int[B_MAX];
	int *c, C_MAX;
	cout << "ENTER THE SIZE ARRAY(A): ";
	cin >> C_MAX;
	c = new int[C_MAX];
	int N;
	cout << "TAKING INPUT'S OF ARRAY: ";
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cout << "ARRAY INDEX: [ " << i << " ] = ";
		cin >> a[i];
		if (a[i] > k)
		{
			k = a[i];
		}
	}

	for (i = 0; i <= k; i++)
		c[i] = 0;
	for (j = 1; j <= N; j++)
		c[a[j]] +=1;
	for (i = 1; i <= k; i++)
		c[i] += c[i-1];
	for (j = N; j >= 1; j--)
	{
		b[c[a[j]]] = a[j];
		c[a[j]] -= 1;
	}
	cout << "COUNTED SORTED IS: \n";
	print(b, N);
	return 0;

}