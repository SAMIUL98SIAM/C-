#include <iostream>
#include <conio.h>


using namespace std;

class B3
{
    char q [5] ;
    int r ;
    int f ;
public:
    B3 ()
     {
         r = 0 ;
         f = 0 ;
     }
     void insert (char ch)
     {
         if(r >= 5)
         {
             cout << "QUEUE IS OVERFLOW." << endl ;
             return ;
         }
         q [r] = ch ;
         cout << "INSERTED: " << q [r] << endl ;
         r++ ;
     }
     void deleted ()
     {
         if(f == r)
         {
             cout << "QUEUE IS UNDERFLOW." << endl ;
             return ;
         }
         cout << "DELETED: " << q [f] << endl ;
         f++ ;
     }
     void display ()
     {
         if(r == f)
         {
             cout << "QUEUE IS EMPTY." << endl ;
             return ;
         }
         for(int i=f ; i<r ; i++)
         {
             cout << "SEEN THINGS: " << q [i] << endl ;
         }
     }
}Q;


int main()
{
    Q.insert('A') ;
    Q.insert('I') ;
    Q.insert('O') ;
    Q.insert('V') ;
    Q.insert('X') ;

    getch() ;

    for(int i=0 ; i<5 ; i++)
    {
        Q.deleted () ;
    }

    getch() ;

    Q.display() ;



    return 0;
}
