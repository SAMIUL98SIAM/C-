#include <iostream>

using namespace std;

#define SIZE 6
int rear = - 1 ;
int front = - 1 ;
char *A = new char [SIZE] ;

bool isFull()
{
    if(rear == SIZE - 1 && rear == front - 1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

void enQueue(char value)
{
    if(isFull())
    {
        cout << "QUEUE IS FULL!!" << endl ;
    }
    else
    {
        if(front == -1)
            front = 0 ;
            rear = (rear+1)%SIZE ;
            A [rear] = value ;
    }
}

bool isEmpty()
{
    if(front == - 1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

char deQueue()
{
    if(isEmpty())
    {
        cout << "QUEUE IS EMPTY!!" << endl ;
    }
    else
    {
        if(front == rear)
        {

            front = rear = -1 ;

        }
        else
        {
            front = (front+1)%SIZE ;
        }
    }
    return A [front] ;
}

void show()
{
    if(isEmpty())
    {
        cout << "WRONG!!" << endl ;
    }
    else
    {
        cout << "FRONT SIDE: " << front << endl ;
        cout << "CIRCULAR QUEUE IS [ " ;
        for(int i=front ; i<=rear ; i=(i+1)%SIZE)
        {
            cout << A [i] << " " ;

        }
        cout << " ] \n" ;

        cout << "REAR SIDE: " << rear << endl ;
    }
}

int main()
{
    int key = 0 ;
    while (true)
    {
        cout << "1.INSERT 2.DELETE 3.TRAVERSE 4.EXITS" << endl ;
        cin >> key ;

        switch(key)
            {
              case 1 :
                       char ele ;
                       cout << "INSERT ALL: " ;
                       cin >> ele ;
                       enQueue(ele) ;
                       break ;

              case 2 :
                       cout << "DELETE ALL: " << deQueue() << endl ;

              case 3 :
                      show();
                      break ;

              case 4 :
                       return 0 ;

            }
    }
    return 0 ;
}
