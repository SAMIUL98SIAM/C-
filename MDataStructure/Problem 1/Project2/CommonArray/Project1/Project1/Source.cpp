#include<iostream>
using namespace std;
int main()
{
	int Array_1[6] = { 1,4,6,3,6,9 };
	int Array_2[6] = { 5,3,7,1,2,6 };
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (Array_1[i] == Array_2[j])
			{
				cout << Array_1[i] << " ";
			}
			else
			{
				cout << "No common element!" << endl ;
			}
		}
	}


}