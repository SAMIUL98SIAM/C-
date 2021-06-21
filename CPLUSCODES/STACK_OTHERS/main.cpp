#include <iostream>

using namespace std ;
#define MAX 8
int top = -1 ;
char *A = new char [MAX] ;

void push(char X)
{
    if(top > MAX)
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
        A [++top] = X ;
    }
}

char pop()
{
    if(top < -1)
    {
        cout << "UNDERFLOW!!!" << endl ;
    }
    else
    {
        return A [top--] ;
    }
}

void show()
{
    if(top >= -1)
    {
        cout << "STACK ELEMANT'S: " ;
        for(int i=0 ; i<=top ; i++)
        {
            cout << A [i] << " " ;
            cout << endl ;
        }
    }
    else
    {
        cout << "NULL!!" << endl ;
    }
}

int main()
{
    int key = 0 ;
    while(true)
    {
        cout << "1.PUSH 2.POP 3.TRAVERSE 4.EXITS" << endl ;
        cout << "ENTER THE KEY: " ;
        cin >> key ;
        switch(key)
         {
           case 1 :
                   char elem ;
                   cout << "PUSH: " ;
                   cin >> elem ;
                   push(elem) ;
                   break ;
           case 2 :
                   cout << "POP: " << pop() << endl ;
                   break ;
           case 3 :
                   show() ;
                   break ;
           case 4 :
                   return 0 ;
         }
    }
    return 0 ;
}

