#include<bits/stdc++.h>
using namespace std ;


int Matrix_Chain_Rule(int Matrix[],int Row,int Column)
{
    if(Row == Column)
    {
        return 0 ;
    }
    int min = INT_MAX ;
    int count ;
    for(int i=Row;i<Column;i++)
    {
        count = Matrix_Chain_Rule(Matrix,Row,i)+Matrix_Chain_Rule(Matrix,i+1,Column)+Matrix[Row-1]*Matrix[i]*Matrix[Column] ;
        if(min>count)
        {
            min = count ;
        }
        return min ;
    }
}

int main()
{
    //int M[] = {1, 2, 3, 4, 3} ;
   int M[] = {1,4,6,4,9} ;
    int N = sizeof(M)/sizeof(M[0]);
    cout << "MATRIX CHAIN RULE MULTIPLICATION IS: " << Matrix_Chain_Rule(M,1,N-1) << endl;
    return 0;
}

