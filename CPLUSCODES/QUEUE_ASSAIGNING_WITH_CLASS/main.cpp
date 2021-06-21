#include <iostream>

using namespace std;

class Queue
{
    char a [4] ;
    int r ;
public:
    Queue()
    {
        r = 0 ;

    }
    void insert (char ch)
    {
        if(r >= 4)
        {
            cout << "STACK IS FULL." << endl ;
            return ;
        }
        a [r] = ch ;
        cout << "PUSH UP: " << a [r] << endl ;
        r++ ;
    }
    char pop()
    {
      if(r <= 0)
        {
            cout << "STACK IS EMPTY." << endl ;
            return 5;
        }
        r-- ;
        return a [r] ;
  }


}siam;


int main()
{
    siam.insert('a') ;
    siam.insert('i') ;
    siam.insert('W') ;
    siam.insert('Z') ;

    cout << "\n" << endl ;

    for(int i=0 ; i<4 ; i++)
    {
        cout << "POP ALL: " << siam.pop() << endl ;
    }

    /*siam.pop() ;
    siam.pop() ;
    siam.pop() ;
    siam.pop() ; */

    return 0 ;
}
