//Job Schedulling
#include <iostream>
#include <algorithm>
using namespace std;

struct Job
{
	int Start, Finish, Profit;
};

bool Comparator(Job Banker, Job Police)
{
	return (Banker.Profit < Police.Profit);
}

int LatestConflict(Job arr[], int i)
{
	for (int j = i - 1; j >= 0; j--)
	{
		if (arr[j].Finish <= arr[i - 1].Start)
		{
			return j;
		}
	}
	return -1;
}

int FindMaxProfitRec(Job arr[], int n)
{
	if (n == 1) return arr[n - 1].Profit;

	int inclprof = arr[n - 1].Profit;
	int i = LatestConflict(arr, n);
	if (i != -1)
	{
		inclprof += FindMaxProfitRec(arr, i + 1);
	}
	int exclprof = FindMaxProfitRec(arr, n - 1);
	return max(inclprof, exclprof);
}

int FindMaxProfit(Job arr[], int n)
{
	sort(arr, arr + n, Comparator);
	return FindMaxProfitRec(arr, n);
}

int main()
{
	Job arr[] = { {3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 500} };
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "OPTIMAL PROFIT: " << FindMaxProfit(arr, n) << endl;
	return 0;
}