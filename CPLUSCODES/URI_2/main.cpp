#include<iostream>
using namespace std;
int main()
{
	int N ;
	cin >> N ;
	if(N == 1 || N%2 == 1)
    {
        cout << "NO" << endl ;
    }
    else if(N%2 == 0)
    {
        cout << "YES" << endl;
    }
}

