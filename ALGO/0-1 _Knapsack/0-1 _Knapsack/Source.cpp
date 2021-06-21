//0-1 Knapsack

#include<iostream>
using namespace std;

int max(int a, int b)
{
	/*if (a > b)
	{
		return a;
	}
	else return b;*/
	return (a > b) ? a : b;

}

int KnapSack(int Capacity, int Weight[], int Value[], int N)
{
	if (Capacity == 0 || N == 0)
	{
		return 0;
	}
	else if (Weight[N - 1] > Capacity)
	{
		return KnapSack(Capacity, Weight, Value, N - 1);
	}
	else
	{
		return max(Value[N - 1] + KnapSack(Capacity - Weight[N - 1], Weight, Value, N - 1), KnapSack(Capacity, Weight, Value, N - 1));
	}
}

int main()
{
	int C = 50;
	int V[] = { 60, 100, 120 };
	int W[] = { 10, 20, 30 };
	int N = sizeof(V[0]);
	cout << "KNAPSACK IS: " << KnapSack(C, W, V, N);
	return 0;
}