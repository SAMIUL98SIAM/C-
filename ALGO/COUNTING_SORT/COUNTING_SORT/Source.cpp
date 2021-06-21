
///Counting Sort

#include<iostream>

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
	int *a , A_MAX ;
	cout << "ENTER THE SIZE OF ARRAY:(A) ";
	cin >> A_MAX;
	a = new int[A_MAX];
	int *b, B_MAX;
	cout << "ENTER THE SIZE OF ARRAY:(A) ";
	cin >> B_MAX;
	b = new int[B_MAX];
	int *c, C_MAX;
	cout << "ENTER THE SIZE OF ARRAY:(A) ";
	cin >> C_MAX;
	c = new int[C_MAX];
	int N;
	cout << "TAKING INPUT;S OF ARRAY: ";
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
	cout << "GIVEN ARRAY IS: \n";
	print(a, N);
	for (i = 0; i <= k; i++)
		c[i]= 0;
	for (j = 1; j <= N; j++)
		c[a[j]]+= 1;
	for (i = 1; i <= k; i++)
		c[i]+= c[i-1];
	for (j = N; j >= 1; j--)
	{
		b[a[c[j]]] = a[j];
		c[a[j]]-= 1;
	}
	cout << "COUNTING SORTED ARRAY IS: \n";
	print(b, N);
	return 0;
}
/*#include<iostream>

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
	int* a, * b, * c, A_MAX, B_MAX, C_MAX, n, i, j, k = 0;
	cout << "ENTER SIZE OF ARRAY:(A) ";
	cin >> A_MAX;
	a = new int[A_MAX];
	cout << "ENTER SIZE OF ARRAY:(B) ";
	cin >> B_MAX;
	b = new int[B_MAX];
	cout << "ENTER SIZE OF ARRAY:(C) ";
	cin >> C_MAX;
	c = new int[C_MAX];

	cout << "TAKING INPUT'S OF ARRAY: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
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

	for (i = 1; i <= n; i++)
		c[a[i]] = c[a[i]] + 1;

	for (i = 1; i <= k; i++)
		c[i] += c[i - 1];

	for (i = n; i >= 1; i--)
	{
		b[c[a[i]]] = a[i];
		c[a[i]] -= 1;
	}


	print(b, n);
	return 0;
}*/
