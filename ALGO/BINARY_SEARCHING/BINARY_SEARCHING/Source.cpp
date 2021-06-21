///Binary Search

#include<iostream>
using namespace std;

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
	cout << "ARRAY INDEX: [ 0 ] = ";
	cin >> A[0];
	for (int i = 1; i < N; i++)
	{
		cout << "ARRAY INDEX: [  " << i << " ] = ";
		cin >> A[i];
		if (A[i] < A[i - 1])
		{
			i--;
			cout << "DECREASING ORDER!!" << endl;
			continue;
		}
	}
	print(A, N);
	int left = -1, right = N, item, flag = 0;
	int mid = (left + right) / 2;
	cout << "ENTER THE VALUE OF BINARY SEARCHING: ";
	cin >> item;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (A[mid] == item)
		{
			flag++;
			break;
		}
		if (A[mid] < item)
		{
			left = mid + 1;
			continue;
		}
		else
		{
			right = mid - 1;
			continue;
		}
	}
	if (flag == 1) cout << item << " :IS FOUND!!" << endl;
	else cout << item << " :ISN'T FOUND!!" << endl;
	
}