#include <iostream>

using namespace std;

#define SIZ 7
int r = - 1 ;
int f = - 1 ;
char ch [SIZ] ;

void enQueue(char V)
{
    if(r > SIZ-1)
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
        ch [++r] = V ;
    }

}

void deQueue ()
{
    if(f == r)
    {
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        cout << "DELETED ALL: " <<  ch [++f] << endl ;
    }

}

void show()
{
    if(f <= r)
    {
        cout << "QUEUE ELEMANT'S ARE: " << endl ;
        for(int i=f ; i<=r ; i++)
        {
            cout << ch [i] << " " ;
            cout << endl ;
        }
    }
    else
    {
        cout << "EMPTY!!" << endl ;
    }
}

int main()
{
    int key = 0 ;
    while(true)
    {
        cout << "1.INSERT 2.DELETE 3.SHOW 4.EXIT" << endl ;
        cout << "PLESE TAKE THE KEY: " ;
        cin >> key ;

        switch (key)
               {
                    case 1 :
                             char c ;
                             cout << "INSERTED ALL: "  ;
                             cin >> c ;
                             enQueue(c) ;

                             break ;

                    case 2 :
                             deQueue() ;
                             break ;
                    case 3 :
                             show() ;
                             break ;
                    case 4 :
                             return 0 ;

               }
    }
    return 0;
}
