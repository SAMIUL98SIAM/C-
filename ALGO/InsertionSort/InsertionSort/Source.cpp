///Insertion Sort

#include <iostream>

using namespace std;

void InsertionSort(int arr[], int n)
{
	int i, j, key;
	for (i = 1; i <= n; i++)
	{
		key = arr[i];
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
		}
	}
	arr[j + 1] = key;
}

void print(int arr[], int n)
{
	cout << "ARRAY: [ ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << " ] " << endl;
}

int main()
{
	int B[] = { 24,345,456,57,68,678,6 };
	int* A;
	int  MAX, N;
	cout << "ENTER THE SIZE OF ARRAY: ";
	cin >> MAX;
	cout << "ENTER TAKING THE INPUT'S: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "ARRAY INDEX: [ " << i << " ] = ";
		cin >> A[i];
	}
	InsertionSort(A, N);
	InsertionSort(B, N);

	cout << "INSERTION SORTED ARRAY ARE GIVEN BELOW: ";
	InsertionSort(A, N);
	cout << "INSERTION SORTED ARRAY ARE GIVEN BELOW: \n";
	InsertionSort(B, N);
}