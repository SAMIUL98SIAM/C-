#include <iostream>

using namespace std;

int main()
{
	int *ARR, MAX, n;
	cout << "ENTER THE SIZE OF ARRAY: ";
	cin >> MAX;
	ARR = new int[MAX];
	cout << "ENTRE THE NUMBER: ";
	cin >> n;
	ARR[0] = 0;
	ARR[1] = 1;
	for (int i = 2; i < n; i++)
	{
		ARR[i] = ARR[i - 1] + ARR[i - 2];
	}
	cout << " ";
	for (int i = 0; i < n; i++)
	{
		cout << ARR[i] << " ";
	}

}