#include <bits/stdc++.h>

using namespace std ;

void print(const int* arr,int n)
{
    cout << "ARRAY INDEX: [ " ;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << " ] " << endl ;
}

int main()
{
    int *A , MAX , N ;
    while(true)
    {
        cout << "ENTER THE SIZE OF ARRAY: " ;
        cin >> MAX ;
        if(MAX < 1 || MAX > N)
        {
            cout << "WRONG INPUT!!" << endl;
        }
        else
        {
            break ;
        }

    }
    A = new int [MAX] ;
   while(true)
   {
       cout << "TAKING INPUT'S OF ARRAY: " ;
        cin >> N ;
        if(N < 1 || N > MAX)
        {
            cout << "WRONG INPUT!!" << endl;
        }
        else
        {
            break ;
        }
   }
    cout << "ARRAY INDEX [ 0 ] = " ;
    cin >> A [0] ;
    for(int i=1;i<N;i++)
    {
        cout << "ARRAY INDEX [ " << i << " ] = " ;
        cin >> A [i] ;
        if(A[i] < A[i-1])
        {
            i-- ;
            cout << "SORRY !! DECREASING ORDER!!" << endl ;
            continue ;
        }
    }
    print(A,N) ;
    int key = 0 , left , right , middle , item , pos ;
    while(true)
    {
        cout << "1.SEARCHING 2.EXITS " << endl ;
        cout << "PLEASE TAKE THE KEY: " ;
        cin >> key ;
        if(key == 1)
        {
            int i = 0 ;
            pos = - 1 ;
            left = 0 ;
            right = N - 1 ;
            middle = (left+right)/2;
            cout << "ENTER THE VALUE OF SEARCHING: " ;
            cin >> item ;
            for(;left<=right;)
            {
                middle = (left+right)/2;
                if(A[middle]==item)
                {
                    pos = middle ;
                    break ;
                }
                if(A[middle] < item)
                {
                    left = middle + 1 ;
                }
                else
                {
                    right =  middle - 1 ;
                }
            }
            if(pos >= 0)
            {

                cout << item << " IS FOUND [ " << i << " ] " << endl;
                i++ ;
            }
            else
            {
                cout << item << " IS NOT FOUND!!" << endl ;
            }
        }
        else
        {
            return 0 ;
        }
    }

}
