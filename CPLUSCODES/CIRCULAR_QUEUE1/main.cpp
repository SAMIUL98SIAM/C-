#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std ;

#define SIZE 7
int front = - 1 ;
int rear = - 1 ;
char A [SIZE] ;


void enQueue(char item)
{
    if(front == SIZE - 1 || rear == front - 1)
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
        if(front == - 1)
        {
            front = 0 ;
        }
        rear = (rear+1)%SIZE ;
        A [rear] = item ;
    }
}

char deQueue()
{
    if(front == - 1)
    {
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        char elem = A [front] ;
        if(front == rear)
        {
            front = - 1 ;
            rear = - 1 ;
        }
        front = (front+1)%SIZE ;
        return elem ;
    }
}

void show()
{
    if(front == - 1)
    {
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        cout << "FRONT: " << front << endl ;
        cout << "CIRCULAR QUE: FRONT <- [ " ;
        for(int i=front ; i<=rear ; i++)
        {
            cout << A [i] << " " ;
        }
        cout << " ] -> REAR " << endl ;
        cout << "REAR: " << rear << endl ;
    }
}

int main()
{
    int key = 0 ;
    while(true)
    {
        cout << "1.INSERT 2.DELETE 3.SHOW 4.OFF" << endl ;
        cout << "CHOOSE YOUR OPTION: " ;
        cin >> key ;
        if(key == 1)
        {
            char elem ;
            cout << "INSERT: " ;
            cin >> elem ;
            enQueue(elem) ;

        }
        else if(key == 2)
        {
            cout << "DELETE: " << deQueue() << endl ;
        }
        else if(key == 3)
        {
            show() ;
        }
        else
        {
            return 0 ;
        }
    }
}
