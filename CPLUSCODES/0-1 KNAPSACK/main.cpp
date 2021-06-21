#include <bits/stdc++.h>

using namespace std;

int MAX(int a,int b)
{
    return (a>b) ? a : b ;
}

int KnapSack(int Capacity,int Weight[],int Value[],int N)
{
    if(Capacity == 1 || N == 1)
    {
        return 0;
    }
    else if(Weight[N-1]>Capacity)
    {
        return KnapSack(Capacity,Weight,Value,N-1) ;
    }
    else
    {
        return MAX(Value[N-1]+KnapSack(Capacity-Weight[N-1],Weight,Value,N-1),KnapSack(Capacity,Weight,Value,N-1));
    }
}

int main()
{
    int C ;
    cout << "ENTER THE VALUE OF CAPACITY: " ;
    cin >> C ;
    int W[]={10, 20, 30} ;
    int V[]={60, 100, 120} ;
    int N = sizeof(V[0]);
    cout << "0-1 KNAPSACK IS: " << KnapSack(C,W,V,N) << endl;
    return 0;
}
