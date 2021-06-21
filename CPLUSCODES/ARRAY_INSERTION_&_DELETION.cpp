#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void insertiondel()
{
    int a [50] , siz , ins , pos ;
    cout << "ENTER THE SIZE OF ARRAY: " << endl ;
    cin >> siz ;
    cout << "\nENTER ADDING THE ELEMANT'S OF ARRAY: " << endl ;
    for(int i=0 ; i<siz ; i++)
    {
        cin >> a [i] ;
    }
    cout << "\nENTER THE VALUE OF INSERTION: " << endl ;
    cin >> ins ;
    cout << "\nWHICH POSITION YOU CAN BE ADDING ON INDEX: " << endl ;
    cin >> pos ;
    for(int i=siz ; i>=pos ; i--)
    {
        a [i] = a [i-1] ;
    }
    a [pos] = ins ;
    //cout << "\nARRAY INSERT SUCCESSFULLY." << a [pos] << endl ;
    cout << "\nNEW ARRAY LINE IS: " << endl ;
    for(int i=0 ; i< siz + 1 ; i++)
    {
        cout << a [i] << " " ;
    }

}


void pointer()
{
    int a [4] ;
    int *q ;
    for(int i=0 ; i<4 ; i++)
    {
        cin >> a [i] ;
    }

    q = &a [0] ;

    cout << "INDEX 1 NO ADDRESS: " << q << endl ;
    cout << "INDEX 1 NO VALUE: " << *q  << endl ;
    cout << "INDEX 2 NO ADDRESS: " << q + 1 << endl ;
    cout << "INDEX 2 NO VALUE: " << *(q + 1) << endl ;
    cout << "INDEX 3 NO ADDRESS: " << q + 2  << endl ;
    cout << "INDEX 3 NO VALUE: " << *(q + 2) << endl ;
    cout << "INDEX 4 NO ADDRESS: " << q + 3 << endl ;
    cout << "INDEX 4 NO VALUE: " << *(q + 3) << endl ;

}

int main()
{
    getch();
    system("color 0F") ;
    cout << "\t\t\t\t\t\tWELCOME TO INSERTION" << endl ;
    insertiondel();
    getch();
    system("color 0E") ;
    cout << "\t\t\t\t\t\tWELCOME TO POINTER" << endl ;
    pointer();

    getch();
    system("cls");
    system("color 0e") ;
    cout << "FUCK OFF" << endl ;
    return 0;
}

