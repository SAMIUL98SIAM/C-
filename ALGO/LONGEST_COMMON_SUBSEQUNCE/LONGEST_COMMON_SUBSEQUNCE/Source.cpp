//LCS Code
#include<iostream>
using namespace std;
int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int LongestCommonSubsequence(char X[], char Y[], int M, int N)
{
	if (M == 0 || N == 0)
	{
		return 0;
	}
	else if (X[M - 1] == Y[N - 1])
	{
		return 1 + LongestCommonSubsequence(X, Y, M - 1, N - 1);
	}
	else
	{
		return Max(LongestCommonSubsequence(X, Y, M - 1, N), LongestCommonSubsequence(X, Y, M, N - 1));
	}
}

int main()
{
	char S1[] = "AGGTAB";
	char S2[] = "GXTXAYB";

	int m = strlen(S1);
	int n = strlen(S2);

	cout << "LENGHT OF LONGEST COMMON SUBSEQUENCE IS: " << LongestCommonSubsequence(S1, S2, m, n) << endl;
	return 0;
}