#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

#define SIZ 3
int top = - 1 ;
char *ARRAY = new char [SIZ] ;

bool Full()
{
    if(top > SIZ - 1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
bool Null()
{
    if(top < - 1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

void push(char value)
{
    if(Full())
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
        top++ ;
        ARRAY [top] = value ;
    }
}

char pop()
{
    if(Null())
    {
        cout << "UNDERFLOW!!" << endl ;
        return '!' ;
    }
    else
    {
        return ARRAY [top] ;
        top-- ;
    }
}


void show()
{
    if(top > -1)
    {
        cout << "STACK ELEMANT'S: [ " ;
        for(int i=0 ; i<=top ; i++)
        {
            cout << ARRAY [i] << " " ;

        }
        cout << " ] " << endl ;
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
        cout << "1.PUSH 2.POP 3.SHOW 4.EXITS" << endl ;
        cout << "TAKE THE KEY: " ;
        cin >> key ;

        switch(key)
          {
           case 1 :
                   system("color 0F") ;
                   char ele ;
                   cout << "PUSH: " ;
                   cin >> ele ;
                   push(ele) ;
                   break ;

           case 2 :
                   system("color 0E") ;
                   cout << "POP: " << pop() << endl ;
                   break ;


           case 3 :
                   system("color 07") ;
                   show() ;
                   break ;

           case 4 :
                   system("color 03") ;
                   system("cls") ;
                   getch();
                   main() ;

           case 5 :
                   return 0 ;


          }
    }
    return 0 ;
}
