/*#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j + 1;
		}
		arr[j + 1] = key;
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

	//int b[] = { 24,56,78,88,567 , 24 , 55 };
   	int *A, MAX, N;
	cout << "ENTER THE SIZE OF ARRAY: ";
	cin >> MAX;
	A = new int[MAX];
	cout << "ENTER THE INPUT THE ARAY: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "ARRAY INDEX: [ " << i << " ] = ";
		cin >> A[i];
	}

	InsertionSort(A, N);
//	InsertionSort(b, N);
	cout << "INSERTION SORTED ARRAY ARE: ";
	print(A, N);
	//cout << "INSERTION SORTED ARRAY ARE {ASSAIGNING}: ";
	//print(b, N);

}*/

// C++ program for insertion sort
#include <bits/stdc++.h>
using namespace std;

/* Function to sort an array using insertion sort*/
void InsertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// A utility function to print an array of size n
void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
       {
         cout << arr[i] << " ";
       }
    cout << endl;
}

/* Driver code */
int main()
{
   int b[] = { 12, 11, 13, 5, 6 };
    //int n = sizeof(arr) / sizeof(arr[0]);

   	int *A, MAX, N;
	cout << "ENTER THE SIZE OF ARRAY: ";
	cin >> MAX;
	A = new int[MAX];
	cout << "ENTER THE INPUT THE ARAY: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "ARRAY INDEX: [ " << i << " ] = ";
		cin >> A[i];
	}


    InsertionSort(A, N);
    InsertionSort(b, N);
    cout << "INSERTION SORTING ARE: " ;
    print(A, N);
    cout << "INSERTION SORTING ARE: (ASSAIGNING)" ;
    print(b, N);


     return 0;
}

// This is code is contributed by rathbhupendra

