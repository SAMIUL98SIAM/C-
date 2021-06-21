#include <iostream>
#include <conio.h>

using namespace std ;

class B3
{
    char q [5] ;
    int r ;
    int f ;
public:
    void init ()
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
    void dleted ()
    {
        if(f == r)
        {
            cout << "QUEUE IS UNDERFLOW." << endl ;
            return ;

        }
        cout << "DELETED: " << q [f] << endl ;
        f++ ;
    }


}s;

int main()
{
    s.init() ;
    s.insert('A') ;
    s.insert('N') ;
    s.insert('L') ;
    s.insert('F') ;
    s.insert('E') ;

    s.dleted() ;
    s.dleted() ;
    s.dleted() ;
    s.dleted() ;
    s.dleted() ;



    return 0 ;

}
