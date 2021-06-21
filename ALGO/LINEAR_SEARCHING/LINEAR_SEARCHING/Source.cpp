///Linear Search

#include <iostream>

using namespace std;

int main()
{
	int *A, MAX, N;
	cout << "ENTER THE SIZE OF ARRAY: ";
	cin >> MAX;
	A = new int[MAX];
	cout << "TAKING INPUT'S OF ARRAY: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "ARRAY INDEX: [ " << i << " ] = ";
		cin >> A[i];
	}
	int item , count = 0;
	cout << "ENTER THE VALUE OF SEARCHING: ";
	cin >> item;
	for (int i = 0; i < N; i++)
	{
		if (A[i] == item)
		{
			count++;
			break;
		}
		else
		{
			continue;
		}

		
	}
	if (count == 1)
	{
		cout << item << " :IS FOUND" << endl;
	}
	else
	{
		cout << item << " :ISN'T FOUND!!" << endl;
	}
	
	
} 