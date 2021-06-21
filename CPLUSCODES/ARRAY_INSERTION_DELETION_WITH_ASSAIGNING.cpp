#include <iostream>
#include <conio.h>

using namespace std;

int insertr()
{
    int a [9] = {34,5646,212,886,331,90} ;
    int siz = 6 ;
    int inser;
    inser = 100 ;
    int pos = 0 ;
    for(int i = siz ; i>pos ; i--)
    {
      a [i] = a [i-1] ;
    }
    a[pos] = inser ;

    for(int i=0 ; i<siz + 1 ; i++)
    {
        cout << a [i] << " " ;
    }
    cout << endl ;
    return 0;
}

int dleted()
{
    int b [10] = {34,54,213,13,513,75,21} ;
    int sizz = 7 ;
    int dpos ;
    dpos = 3 ;
    for(int i = dpos  ; i<sizz ; i++)
    {
        b [i] = b [i+1] ;
    }
    for(int i=0 ; i<sizz - 1 ; i++)
    {
        cout << b [i] << " " ;
    }

    return 12 ;
}

int main()
{
    insertr() ;
    dleted() ;

    return 0 ;
}


