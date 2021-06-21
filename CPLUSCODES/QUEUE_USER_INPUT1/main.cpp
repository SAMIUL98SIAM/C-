#include <iostream>

using namespace std;

#define size 6
int top = -1 ;
char stack [size] ;

void push(char X)
{
   if(top > size)
   {
       cout << "OVERFLOW!!!" << endl ;
       return ;
   }
   stack[++top] = X ;
}

char pop()
{
    if(top > size)
   {
       cout << "UNDERFLOW!!!" << endl ;
       return '!';
   }
   return stack[top--] ;
}

void dis()
{
    if(top <= size)
   {
       cout << "STACK ELEMANT'S ARE: " << endl ;
       for(int i=0 ; i<=top ; i++)
       {
           cout << stack [i] << " " ;
           cout << endl ;
       }

   }else{
   cout << "EMPTY" << endl ;}
}

int main()
{
    int a ;
    while(1)
    {
        cout << "1.PUSH 2.POP 3.SHOW 4.EXITS" << endl ;
        cin >> a ;

        switch (a){
            case 1:
                  char l ;
                  cout << "PUSH ALL: " ;
                  cin >> l ;
                  push(l) ;
                  break ;
            case 2:
                cout << "POP ALL: " << pop() << endl ;
                break ;
            case 3:
                dis();
                break ;

            case 4:
                cout << "FUCK OFF " << endl;
                return 0 ;
    }
    }
    return 0;
}
