#include <iostream>

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

int main()
{
    int *A , MAX  ;
    while(true)
    {
        cout << "ENTER THE ARRAY SIZE: " ;
        cin >> MAX ;
        if(MAX < 1 || MAX > 10)
        {
            cout << "ERROR!!" << endl ;
        }
        else
        {
            break ;
        }
    }
    A = new int [MAX] ;

    cout << "ENTER TAKING THE INPUT'S OF ARRAY: " ;
    cout << endl;
    cout << "ARRAY INDEX: [ 0 ] = " ;
    cin >> A [0] ;
    for(int i=1;i<MAX;i++)
    {
        cout << "ARRAY INDEX: [ "<< i << " ] = " ;
        cin >> A [i] ;
        if(A [i] < A [i-1])
        {
            i-- ;
            cout << "PLEASE DO INCREASE THE ORDER!!!" << endl;
            continue ;
        }
    }
    print(A,MAX) ;
    int key = 0 , left , right , middle , pos , item ;
    while(true)
    {
        cout << "1.SEARCHING 2.EXIT" << endl ;
        cout << "TAKE THE KEY: " ;
        cin >> key ;
        if(key == 1)
        {
            left = 0 ;
            right = MAX-1 ;
            pos = - 1 ;
            middle = (left+right)/2 ;
            cout << "ENTER THE SEARCHING VALUE: " ;
            cin >> item ;
            for(;left<=right;)
            {
                middle = (left+right)/2 ;
                if(A[middle]==item)
                {
                    pos = middle ;
                    break ;
                }
                if(A[middle]<item)
                {
                    left = middle + 1 ;
                }
                else
                {
                    right = middle - 1 ;
                }
            }
            if(pos >= 0)
            {
                int i ;
                cout << "FOUND AT INDEX: [ " << i << " ] = " << item << endl;
            }
            else
            {
                cout << "NOT FOUND!!" << endl;
            }
        }
        else
        {
            return 0 ;
        }
    }
}
