///Bubble Sort

#include <iostream>

using namespace std;

void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void BubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
			}
		}
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
	int B[] = { 23,4,57,456,8 };
	int* A;
	int MAX;
	cout << "ENTER THE SIZE OF ARRAY: ";
	cin >> MAX;
	A = new int[MAX];
	int N;
	cout << "TAKING INPUT'S OF ARRAY: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "ARRAY INDEX: [ " << i << " ] = ";
		cin >> A[i];
	}
	BubbleSort(B, N);
	BubbleSort(A, N);
	cout << "BUBBLE SORTED ARRAY(ASSAIGNING): ";
	print(B, N);
	cout << "BUBBLE SORTED ARRAY: ";
	print(A, N);
	return 0;
}