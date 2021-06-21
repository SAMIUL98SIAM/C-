#include <bits/stdc++.h>

using namespace std;
void activityselection(int Start[],int Finish[],int N)
{
    int i,j;
    i = 0 ;
    cout << i << " " ;
    for(j=1;j<N;j++)
    {
        if(Start[j]<=Finish[i])
        {
            cout << j << " " ;
            i = j ;
        }
    }
}

int main()
{

    int S[] = {1,3,0,5,8,5};
    int F[] = {2,4,6,7,9,9};
    int N = sizeof(S[0]);
    activityselection(S,F,N) ;
    return 0 ;
}
