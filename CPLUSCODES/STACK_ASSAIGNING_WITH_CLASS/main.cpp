#include <iostream>

using namespace std;

#define s 6
int top = -1 ;
char ch [s] ;

void push(char x)
{
    if(top > s-1)
    {
        cout << "OVERFLOW!!" << endl ;
       return ;
    }
    else
    {
        ch [top] = x ;
        top++ ;
    }

}

char pop()
{
    if(top < 0)
    {
        cout << "UNDERFLOW!!" << endl ;
       return '!';
    }
    else
        {
            top-- ;
  return ch [top] ;
        }
}

void dis()
{
    if(top >= 0)
    {
        cout << "STACK ELEMANT'S ARE: " ;
        for(int i=top ; i>=-1 ; i--)
        {
            cout << ch [i] << " " ;
            cout << endl ;
        }
    }
    else
        {
            cout << "NULL" << endl ;
        }
}

int main()
{

    int k ;
    while(true)
    {

        cout << "\n\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXITS\n\n" << endl ;
         cout << "PLEASE TAKE THE KEY: " ;
        cin >> k ;
        switch(k){
            case 1:{
                        char ele ;
                        cout << "PUSH ALL: " ;
                        cin >> ele ;
                        push(ele) ;
                        break ;
                   }
            case 2:{
                        cout << "POP ALL: " << pop() << endl ;
                        break ;
                   }
            case 3:{
                        dis();
                        break ;
                   }
            case 4 :{
                        cout << "GOOD NIGHT" << endl ;
                        return 0 ;
                    }
            default :
                {
                    cout << "MATH ERROR" << endl ;
                }
        }
    }

    return 0;
}
