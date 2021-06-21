#include <iostream>

using namespace std;
#define s 7
int r = 0 ;
int f = 0 ;
char ch [s] ;

void enQueue(char X)
{
    if(r > s)
    {
        cout << "OVERFLOW!!" << endl ;
        return ;
    }
    ch [++r] = X ;
}

char deQueue()
{
    if(f == r)
    {
        cout << "UNDERFLOW!!" << endl ;
        return '!';
    }
    return ch [++f]  ;
}

void display()
{
    if(f <= r)
    {
       cout << "STACK ELEMANT'S ARE: " ;
       for(int i=f ; i<=r ; i++)
       {
           cout << ch [i] << " " ;
           cout << endl ;

       }



    }
     else{
        cout << "EMPTY!!" << endl ;
    }

}


int main()
{
    int key = 0 ;
    while(true)
    {
        cout << "1.INSERT 2.DELETE 3.SHOW 4.EXITS" << endl ;
        cout << "PLEASE ENTER THE KEY: " ;
        cin >> key ;

        switch (key)
        {
            case 1 :
                  char elemant ;
                  cout << "INSERT ALL: " ;
                  cin >> elemant ;
                  enQueue(elemant) ;
                  break ;

            case 2 :
                   cout << "DELETE ALL: " << deQueue() << endl ;
                   break ;

            case 3 :
                   display() ;
                   break ;

            case 4 :
                   return 0 ;

        }

    }

    return 0;
}

