#Coint Changes
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int *Deno;
	int MAX;
	cout << "ENTER THE SIZE OF COIN CHOSING ARRAY: ";
	cin >> MAX;
	Deno = new int[MAX];
	int N;
	cout << "TAKING INPUT'S OF COIN CHOSING: ";
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << "CURRENCIES VALUE: [ " << i << " ] = ";
		cin >> Deno[i];
	}
	int tk;
	cout << "ENTER TAKE THE VALUE OF CURRENCIES: ";
	cin >> tk;
	cout << "RETAILS OF THESE CURRENCIES ARE GIVEN BELOW: \n";
	vector<int>ans;
	for (int j = N-1; j >= 0; j--)
	{
		while (tk >= Deno[j])
		{
			tk-= Deno[j];
			ans.push_back(Deno[j]);
		}
	}
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
}