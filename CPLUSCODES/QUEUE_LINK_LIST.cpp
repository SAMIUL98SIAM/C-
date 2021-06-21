#include <iostream>
#include <stdlib.h>

using namespace std ;

struct node
{
    int data ;
    node *next ;
};
node *front = NULL ;
node *rear = NULL ;

void enQueue(int value)
{
    node *curr = new node ;
    if(curr == NULL)
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
        curr->data = value ;
        if(front == NULL)
        {
            front->next = curr ;
            rear->next = curr ;
            front = curr ;
            rear = curr ;
        }
        else
        {
            rear->next = curr ;
            rear = curr ;
            rear->next = NULL ;
        }
    }
}

void deQueue()
{
    node *curr = front ;
    if(front == NULL)
    {
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        curr = front ;
        front = front->next ;
        free(curr) ;
        cout << "DELETE: " << curr->data << endl ;
    }
}

void show()
{
    node *curr = front ;
    cout << "QUEUE: [ " ;
    while(curr != NULL)
    {
        cout << curr->data << "->" ;
    }
    cout << "NULL ]" << endl ;
}

node *sear(int s_key)
{
    node *curr = front ;
    while(curr != NULL)
    {
        if(s_key == curr->data)
        {
            return curr ;
        }
        curr = curr->next ;
    }
    return NULL ;
}

int main()
{
    int elem , n ;
    cout << "ENTER THE SIZE OF QUEUE NODE'S: " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "ELEMANT: [ " << i << " ] = " ;
        cin >> elem ;
        enQueue(elem) ;
    }
    int key = 0 ;
    while(true)
    {
        cout << "1.INSERT 2.DELETE 3.SEARCH 4.TRAVERSE 5.EXITS" << endl ;
        cout << "ENTER THE KEY: " ;
        cin >> key ;
        if(key == 1)
        {
            cout << "INSERT: " ;
            cin >> elem ;
            enQueue(elem) ;
        }
        else if(key == 2)
        {
            deQueue();
        }
        else if(key == 3)
        {
            show() ;
        }
        else {return 0 ;}
    }
}
