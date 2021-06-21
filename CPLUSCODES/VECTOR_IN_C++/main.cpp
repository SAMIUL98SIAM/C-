#include<vector>
#include <iostream>
using namespace std;
int main()
{
	int n;
	vector<int> v(6);


	for(int i=0;i<6;i++)
	{
		cin>>n;
		v[i]=n;
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	return 0;
}

