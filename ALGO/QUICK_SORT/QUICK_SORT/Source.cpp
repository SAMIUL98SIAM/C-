///Quick Sort

#include <iostream>
using namespace std;

void Swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int Partition(int arr[], int low, int high)
{
	int i, j;
	i = (low - 1);
	for (j = low; j < high; j++)
	{
		if (arr[j] < arr[high])
		{
			i++;
			Swap(&arr[i], &arr[j]);
		}
	}

	Swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void QuickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int Pi = Partition(arr, low, high);
		QuickSort(arr, low, Pi - 1);
		QuickSort(arr, Pi + 1, high);
	}
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
	int A[100];
	int N;
	cout << "TAKING INPUT'S OF ARRAY: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "ARRAY INDEX: [ " << i << " ] = ";
		cin >> A[i];
	}
	QuickSort(A, 0, N - 1);
	cout << "QUICK SORTED ARRAY IS: \n";
	print(A, N);
	return 0;
}