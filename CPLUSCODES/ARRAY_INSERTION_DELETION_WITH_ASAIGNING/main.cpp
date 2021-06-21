#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void print(const *arr,int n)
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
    int *A , MAX , N ;
    while(true)
    {
        cout << "ENTER THE SIZE OF ARRAY: " ;
        cin >> MAX ;
        if(MAX < 1 || MAX > 999)
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
        if(N < 1 || N >= MAX)
        {
            cout << "WRONG INPUT!!" << endl;
        }
        else
        {
            break ;
        }
    }
    for(int i=0;i<N;i++)
    {
        cout << "ARRAY INDEX: [ " << i << " ] = " ;
        cin >> A [i] ;
    }
    int key = 0 , item , pos = 0 , sum = 0 , count = 0 ;
    double avg = 0 ;
    while(true)
    {
         cout << "-------------PRESS 1 FOR INSERTION------------" << endl ;
         cout << "-------------PRESS 2 FOR DELETION------------" << endl ;
         cout << "-------------PRESS 3 FOR SEARCHING------------" << endl ;
         cout << "-------------PRESS 4 FOR TRAVERSAL------------" << endl ;
         cout << "-------------PRESS 5 FOR AVARAGE------------" << endl ;
         cout << "-------------PRESS 6 FOR REVERSE------------" << endl ;
         cout << "-------------PRESS 7 FOR SUM------------" << endl ;
         cout << "-------------PRESS 8 FOR EXITS------------" << endl ;
         cout << "\n\n\n" << endl;
         cout << "PLEASE TAKE THE KEY: " ;
         cin >> key ;
         if(key == 1)
         {
             cout << "\t\t\tINSERTION PART" << endl ;
             if(N == MAX)
             {
                  cout << "WRONG WAY!!YOU CAN'T BE INSERTED!!" << endl ;
             }
             cout << "ENTER THE VALUE OF INSERTION: " ;
             cin >> item ;
             while(true)
             {
                 cout << "FIND THE POSITION TO BE INSERTED: " ;
                 cin >> pos ;
                 if(pos < 0 || pos > N)
                 {
                     cout << "WRONG INPUT'S!!" << endl;
                 }
                 else
                 {
                     break ;
                 }
             }
             print(A,N) ;
             for(int i=N;i>=pos;i--)
             {
                 A [i] = A[i-1] ;
             }
             A[pos]=item ;
             N++ ;
             print(A,N) ;

         }
         else if(key == 2)
         {
             cout << "\t\t\tDELETION PART" << endl ;
             if(N == 0)
             {
                 cout << "WRONG WAY!!YOU CAN'T BE DELETED!!" << endl ;
             }
             while(true)
             {
                 cout << "FIND THE POSITION TO BE DELETED: " ;
                 cin >> pos ;
                 if(pos < 0 || pos >=N)
                 {
                     cout << "WRONG INPUT'S!!" << endl;
                 }
                 else
                 {
                     break ;
                 }
             }
             print(A,N) ;
             for(int i=pos-1 ; i<=N ; i++)
             {
                 A [i] = A [i+1] ;
             }
             N--;
             print(A,N);
         }
         else if(key == 3)
         {
             cout << "\t\t\tSEARCHING PART" << endl ;
             if(N == 0)
             {
                 cout << "WRONG WAY!!YOU CAN'T BE SEARCHED!!" << endl ;
             }
             cout << "ENTER THE VALUE OF SEARCHING: " ;
             cin >> item ;
             for(int i=0 ; i<N ; i++)
             {
                 if(A[i]==item)
                 {
                     cout << item << " :FOUND AT INDEX [ " << i << " ] " << endl ;
                 }
                 else if(A[i]==N)
                 {
                     cout << item << " :NOT FOUND!!" << endl;
                 }
             }
         }
         else if(key == 4)
         {
             print(A,N) ;
         }
         else if(key == 5)
         {
             cout << "\t\t\tAVERAGE PART" << endl ;
             if(N == 0)
             {
                 cout << "WRONG WAY!!YOU CAN'T BE AVERAGE!!" << endl ;
             }
             for(int i=0 ; i<N ; i++)
             {
                 sum = sum + A [i] ;
                 count++ ;
             }
             avg = (double)sum/count ;
             cout << "AVERAGE: " << avg << endl;
         }

         else if(key == 6)
         {
             cout << "\t\t\tREVERSE PART" << endl ;
             if(N == 0)
             {
                 cout << "WRONG WAY!!YOU CAN'T BE REVERSE!!" << endl ;
             }
             print(A,N) ;
             reverse(A,A+N) ;
             print(A,N) ;
         }
         else if(key == 7)
         {
              cout << "\t\t\tSUMMESION PART" << endl ;
             if(N == 0)
             {
                 cout << "WRONG WAY!!YOU CAN'T BE SUM!!" << endl ;
             }
             for(int i=0 ; i<N ; i++)
             {
                 sum = sum + A [i] ;
             }
             cout << "SUMMESION: " << sum << endl;
         }
         else
         {
             return 0 ;
         }
    }
    return 0 ;
}
