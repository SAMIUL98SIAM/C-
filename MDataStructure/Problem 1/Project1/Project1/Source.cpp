#include <iostream>

using namespace std;

void odd_number(int start_number, int finish_number)
{
	for (int i = start_number+1; i <= finish_number; i++)
	{
		if(i%2==1)cout << i << endl;
	}
}

int main()
{
	int s=12, f=23;

	cout << "Starting value" << s << endl;
	cout << "Ending value" << f << endl;
	odd_number(s, f);
}