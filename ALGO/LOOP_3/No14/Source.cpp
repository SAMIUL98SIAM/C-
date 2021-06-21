#include <iostream>

using namespace std;

int main()
{
	int *Student , MAX , sum = 0 ;
	cout << "ENTER THE STUDENT SIZE: ";
	cin >> MAX;
	Student = new int [MAX];
	for (int i = 0; i < MAX; i++)
	{
		cout << "ENTER THE NAME STUDENT'S: ";
		cin >> Student[i];
		//sum += Student[i];
	}
	for (int i = 0; i < MAX; i++)
	{
		sum += Student[i];
		
	}
	double avg;
	avg = (double)sum / MAX;
	
	for (int i = 0; i < MAX; i++)
	{
		cout << "STUDENT MARKS: " << Student[i] << " " << endl;
	}
	cout << "TOTAL NUMBER: " << avg << endl;
	int max = Student[1];
	int min = Student[2];
	for (int i = 0; i < MAX; i++)
	{
		if (max < Student[i])
		{
			max = Student[i];
		}
		if (min > Student[i])
		{
			min = Student[i];
		}
	}
	cout << "MAXIMUM: " << max << endl;
	cout << "MINIMUM: " << min << endl;
}