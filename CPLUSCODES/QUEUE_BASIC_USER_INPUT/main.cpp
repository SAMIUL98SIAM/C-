#include <iostream>

using namespace std;
#define SIZ 6
int r = - 1 ;
int f = - 1 ;
char ch [SIZ] ;

bool isFull()
{
    if(f == (r+1))
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
bool isEmpty
{
    if(f == -1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

void enQueue(char v)
{
    if(isEmpty())
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
        if(f == -1)
            f = 0 ;
            r = (r+1)%SIZ ;
            ch [r] = v ;
    }
}

void deQueue()
{
    if(isEmpty())
    {
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        if(f == r)
            f = - 1 ;
            r = - 1 ;
            f = (f+1)%SIZ ;
            cout << "DELETED ALL: " << ch [f] << endl ;
    }
}

void Show()
{
    if(isEmpty())
    {
        int i ;
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        cout << "FRONT: " << f << endl ;
        cout << "QUEUE : [ " ;
        for(i = f ; i!=r ; i=(i+1)%SIZ){
            cout << " " << ch [i] << " " ;
        }
        cout << " " << ch [i] << " " ;
        cout << "REAR: " << r << endl ;

    }
}

int main()
{
    int key=0 ;
    while(true)
    {
        cout << "1.INSERT 2.DELETE 3.SHOW 4.EXITS" << endl ;
        cout << "TAKE THE KEY: " ;
        cin >> key ;

        switch (key)
           {
              case 1 :
                    char c ;
                    cout << "INSERTED ALL: " ;
                    cin >> c ;
                    enQueue(c) ;

                    break ;

              case 2 :
                      deQueue() ;
                      break ;
              case 3 :
                    Show();
                    break ;
              case 4 :
                    return 0 ;

           }
    }
    return 0 ;
}
