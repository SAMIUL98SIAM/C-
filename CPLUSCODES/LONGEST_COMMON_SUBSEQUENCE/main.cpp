#include <bits/stdc++.h>

using namespace std;

int max(int a,int b)
{
    if(a>b)return a;
    else return b ;
}

int Longest_Common_Subsequence(char X[],char Y[],int M,int N)
{
    if(M==0 || N==0)
    {
        return 0;
    }
    else if(X[M-1]==Y[N-1])
    {
        return (1 + Longest_Common_Subsequence(X,Y,M-1,N-1)) ;
    }
    else
        {
            return max(Longest_Common_Subsequence(X,Y,M-1,N),Longest_Common_Subsequence(X,Y,M,N-1));
        }

}

int main()
{
    char S1[] = "WRTUPW" ;
    char S2[] = "EORWP" ;
    int m = strlen(S1) ;
    int n = strlen(S2) ;
   cout << "LONGEST COMMON SUBSEQUENCE IS: " <<  Longest_Common_Subsequence(S1,S2,m,n) ;
    return 0;
}
