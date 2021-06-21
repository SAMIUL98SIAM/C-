#include <iostream>
#include <conio.h>

using namespace std;

void inpins()
{
    int a [100] , n , pos , item ;
    cout << "ENTER THE ARRAY SIZE: " << endl ;
    cin >> n ;
    cout << "ENTER THE ARRAY ELEMANT'S: " << endl ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a [i] ;
    }
    cout << "ENETER THE ITEM VALUE: " << endl ;
    cin >> item ;
    cout << "FIND THE POSITION WHICH YOU INSERTED: " << endl ;
    cin >> pos ;
    for(int i = n ; i>=pos ; i--)
    {
        a [i] = a [i-1] ;
    }
    a [pos] = item ;
    cout << "ARRAY INSERTED SUCCESSFULLY." << endl ;
    cout << "THE NEW ARRAY LINE IS: " << endl ;
    for(int i=0 ; i<n+1 ; i++)
    {
        cout << a [i] << " " ;
    }

}

void outins()
{
    int a [70] = {5346,547,8578,468,36,6} ;
    int n = 6 ;
    int pos = 5 ;
    int item = 90 ;
    for(int i = n ; i>=pos ; i--)
    {
        a [i] = a [i-1] ;
    }
    a [pos] = item ;

    cout << "NEW ARRAY LINE IS: " << endl ;
    for(int i=0 ; i<n + 1 ; i++)
    {
        cout << a [i] << " " ;
    }
}
void outdel()
{
    int a [70] = {5346,547,8578,468,36,6} ;
    int n = 6 ;
    int pos = 5 ;

    for(int i = pos ; i<n ; i++)
    {
        a [i] = a [i+1] ;
    }

    cout << "NEW ARRAY LINE IS: " << endl ;
    for(int i=0 ; i<n - 1 ; i++)
    {
        cout << a [i] << " " ;
    }
}

void inpdel()
{
    int a [100] , n , pos ;
    cout << "ENTER THE ARRAY SIZE: " << endl ;
    cin >> n ;
    cout << "ENTER THE ARRAY ELEMANT'S: " << endl ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a [i] ;
    }
    cout << "FIND THE POSITION WHICH YOU DELETED: " << endl ;
    cin >> pos ;
    for(int i = pos ; i < n ; i++)
    {
        a [i] = a [i+1] ;
    }
    cout << "ARRAY DELETED SUCCESSFULLY." << endl ;
    cout << "THE NEW ARRAY LINE IS: " << endl ;
    for(int i=0 ; i<n -1; i++)
    {
        cout << a [i] << " " ;
    }

}
void arrpoi()
{
    int  a [4] = {2334,46,577,66} ;
    int *o ;
    o = & a [0] ;
    cout << "first ind add: " << o << endl ;
    cout << "first ind val: " << *o << endl ;
    cout << "fourth ind add: " << o+3 << endl ;
    cout << "fourth ind val: " << *(o+3) << endl;
    cout << "third ind add: " << a+2 << endl ;
    cout << "third ind val: " << *(a+2) << endl;


}



int main()
{
   inpins() ;
    getch();
    cout << endl ;
    inpdel();
    outins();
    cout << endl ;
    outdel();
    getch();
    arrpoi();
    getch() ;

    return 0;
}
