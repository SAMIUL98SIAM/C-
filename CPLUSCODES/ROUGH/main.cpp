#include<iostream>
using namespace std;

int main()
{
	int *A;
	int MAX, N;

		cout << "ENTER THE SIZE OF ARRAY: ";
		cin >> MAX;



	  A = new int[MAX];


		cout << "TAKING INPUT'S OF ARRAY: ";
		cin >> N;



	cout << "\nARRAY INDEX: [ 0 ] = ";
	cin >> A[ 0 ];
	for (int i = 1; i < N; i++)
	{
		cout << "ARRAY INDEX: [ " << i << " ] = ";
		cin >> A[i];
		if (A[i] < A[i - 1])
		{
			i--;
			cout << "SORRY!!ORDER IS DECREASING!!" << endl;
			continue;
		   }
	}


    int flag = 0;

	    int left = -1 , right = N, middle, item;


	    cout << "ENTER THE VALUE OF SEARCHING: ";
	cin >> item;
		for(;left!=right;)
		{
			middle = (left + right) / 2;

			if (A[middle] == item)
			{
				flag++;
				break;
			}
			if (A[middle] < item)
			{
				left = middle + 1;
			}
			else
			{
				right = middle - 1;
				continue;
			}
		}


	if(flag == 1)
    {
        cout << item << " :ITEM IS FOUND"  << endl;
    }
    else
    {
        cout << item << " :ITEM IS NOT FOUND!!" << endl;
    }
}
