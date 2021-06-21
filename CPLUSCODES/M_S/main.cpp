#include <bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;


void print(int arr[],int n)
{
    cout << "ARRAY: [ " ;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << " ] " << endl ;
}

void merg(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;

    /*int *LEFT ;
    LEFT = new int [n1] ;

    int *RIGHT ;
    RIGHT = new int [n2] ;*/
    int L[n1], R[n2];

    for(i=0;i<n1;i++)
    L[i] = arr[l+1] ;

    for(j=0;j<n2;j++)
    R[j] = arr[m+1+j] ;


    i=0;
    j=0;
    k=1;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i] ;
            i++;
        }
        else
        {
            arr[k] = R[j] ;
            j++ ;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = L[i] ;
        i++;
        k++;
    }

    while (j < n2)
    {
      arr[k] = R[j];
       j++;
       k++;
  }
}

void MergeSort(int arr[],int l,int r)
{
    if(l<r)
    {

         int m = l+(r-l)/2;
          MergeSort(arr, l, m);
         MergeSort(arr, m+1, r);
          merg(arr, l, m, r);
    }
}

int main()
{
    cout << "\t\t\tWELCOME TO FUCKIN' MERGE SORT!!" << endl;
    int *A ;
    int MAX  ;
    cout << "ENTER THE SIZE OF ARRAY: " ;
    cin >> MAX ;
    A = new int [MAX] ;
    int N ;
    cout << "TAKING INPUT'S OF ARRAY: " ;
    cin >> N ;
    for(int i=0;i<N;i++)
    {
        cout << "ARRAY INDEX: [ " << i << " ] = " ;
        cin >> A [i] ;
    }
    cout << "GIVEN ARRAY IS: " ;
    print(A,N) ;

    cout << "MERGE SORTED IS: " ;
    MergeSort(A,0,N-1) ;
    print(A,N) ;

    return 0;
}
