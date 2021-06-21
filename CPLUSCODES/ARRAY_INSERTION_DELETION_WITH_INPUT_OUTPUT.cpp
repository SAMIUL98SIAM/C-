#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std ;

void insertdle()
{
    ///INSERTION PART:

    int a [100] , siz , ins , pos ;
    cout << "ENTER THE SIZE OF ARRAY: " << endl ;
    cin >> siz ;
    cout << "ENTER THE ARRAY ELEMANT'S: " << endl ;
    for(int i=0 ; i<siz ; i++)
    {
        cin >> a [i] ;
    }
    cout << "ENTER THE VALUE OF INSERTION: " << endl ;
    cin >> ins ;
    cout << "SEARCHING THE POSITION WHEN YOU INSERTED: " << endl ;
    cin >> pos ;
    for(int i = siz ; i>pos ; i--)
    {
        a [i] = a [i-1] ;
    }
    a [pos] = ins ;
    cout << "ARRAY INSERTED SUCCESSFULLY." << endl ;
    cout << "THE NEW ARRAY LINE IS: " << endl ;
    for(int i=0 ; i<siz + 1 ; i++)
    {
        cout << a [i] << " " ;
    }

    cout << endl ;

    ///DELETION PART:
     cout << "WHICH POSITION CAN BE DELETE NOW: " << endl ;

    int dpos ;
    cin >> dpos ;

    for(int i = dpos ; i < siz ; i++)
    {
        a [i] = a [i+1] ;
    }
    cout << "ARRAY DELETED SUCCESFULLY." << endl ;
    cout << "THE NEW ARRAY LINE IS: " << endl ;
    for(int i=0 ; i<  siz  ; i++)
    {
        cout << a [i] << " " ;
    }
    cout << endl ;

}

void outputins()
{
    int pos ;
    int a [9] = {14,55,21,78,765,9} ;
    int n = 6 ;
    pos = 3 ;

    for(int i=n ; i>pos ; i--)
    {
        a [i] = a [i-1] ;
    }
    a [pos] = 69 ;
    cout << "ARRAY INSERTED SUCCESSFULLY." << endl ;
    cout << "THE NEW ARRAY LINE IS: " << endl ;
    for(int i=0 ; i<n + 1 ; i++)
    {
        cout << a [i] << " " ;
    }


}

void outputdel()
{
    int posa ;
    int a [9] = {14,55,21,78,765,9} ;
    int n = 6 ;
       posa = 5 ;
    for(int i= posa ; i < n ; i++)
    {
        a [i] = a [i+1] ;
    }

    cout << "ARRAY DELETED SUCCESSFULLY." << endl ;
    cout << "THE NEW ARRAY LINE IS: " << endl ;
    for(int i=0 ; i<n - 1 ; i++)
    {
        cout << a [i] << " " ;
    }


}

int main()
{
    system("color 08") ;
    cout << "\t\t\t\t\tWELCOME TO ARRAY WORLD" << endl ;
    getch();
    system("cls");
    system("color 0F") ;
    cout << "ARRAY INSERTION DELETION WITH USER TAKING" << endl ;
    insertdle() ;
    getch();
    system("cls");
    system("color 07") ;
    cout << "ARRAY INSERTION WITHOUT USER TAKING" << endl ;
    outputins() ;
    getch();
    system("cls");
    system("color 0B") ;
    cout << "ARRAY DELETION WITHOUT USER TAKING" << endl ;
    outputdel() ;
    getch();
    system("cls");
    system("color 0A") ;
    cout << "\t\t\t\tTHANK YOU " << endl ;

    return 0 ;



}
