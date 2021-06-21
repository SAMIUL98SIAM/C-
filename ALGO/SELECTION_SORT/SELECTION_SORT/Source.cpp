///Selection Sort

#include <iostream>

using namespace std;

/*void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}*/

void SelectionSort(int arr[], int n)
{
	int Min;
	for (int i = 0; i < n - 1; i++)
	{
		Min = i;
		for (int j = i + 1; j < n; j++)
		{
			Min = j;
		}
		int temp = arr[i];
		arr[i] = arr[Min];
		arr[Min] = temp;
	}
}

void print(int arr[], int n)
{
	cout << "\nARRAY: [ ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << " ] " << endl;
}


int main()
{
	int b [] = { 323,345,2,354,56,5,32,24 ,3244};
	int *A , MAX, N;
	
	cout << "ENTER THE ARRAY SIZE: ";
	cin >> MAX;
	A = new int [MAX];
	cout << "ENTER TAKE THE ARRAY INPUT'S: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "ARRAY INDEX: [ " << i << " ] = ";
		cin >> A[i];
	}
	SelectionSort(A, N);
	SelectionSort(b, N);

	cout << "SELECTION SORTING ARE: \n";
	print(A, N);
	cout << "SELECTION SORTING ARE: \n(ASSAIGNING)";
	print(b, N);

}