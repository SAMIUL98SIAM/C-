#include<bits/stdc++.h>

using namespace std;

int DENO[] = {1,2,5,10,20,50,100};
int N = sizeof(DENO) / sizeof(DENO[0]);

void FindMinCoins(int TAKA)
{

    vector<int>ans;
    for(int i=N-1;i>=0;i--)
    {
        if(TAKA >= DENO[i])
        {
            TAKA-=DENO[i];
            ans.push_back(DENO[i]) ;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << " " ;
    }
}

int main()
{
    int N1 ;
    cout << "TAKE NOTES OF CURRENCIES: " ;
    cin >> N ;
    FindMinCoins(N1) ;
    return 0;

}
