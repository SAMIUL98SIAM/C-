#include<iostream>
#include<conio.h>
#include <bits/stdc++.h>

using namespace std;
#define MAX 11
char *ARR = new char [MAX] ;
int top = - 1 ;

bool ALL()
{
    if(top > MAX - 1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

bool nULL()
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

void push(int item)
{
    if(ALL())
    {
        cout << "OVERLOADING!!" << endl ;
    }
    else
    {
        ARR [top++] = item ;
    }
}

char pop()
{
    if(nULL())
    {
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        return ARR[--top] ;
    }
}

void show()
{
    if(nULL())
    {
        cout << "EMPTY" << endl ;
    }
    else
    {
        cout << "STACK LIST: [ " ;
        for(int i=-1 ; i<=top ; i++)
        {
            cout << ARR [i]   ;

        }
        cout << " ] " << endl ;
    }
}

int main()
{
    int key = 0 ;
    while(true)
    {

        cout << "1.PUSH 2.POP 3.SHOW  4.EXISTS" << endl ;
        cout << "ENTER THE KEY: " ;
        cin >> key ;
        if(key == 1)
        {
            char elem ;
            cout << "PUSH: " ;
            cin >> elem ;
            push(elem) ;
        }
        else if(key == 2)
        {
            cout << "POP: " << pop() << endl ;
        }
        else if(key == 4)
        {
            show() ;
        }
        else
        {
            return 0;
        }
    }
