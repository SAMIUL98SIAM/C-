#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data ;
    node *next ;
};
node *front = NULL ;
node *rear = NULL ;

void enQueue(int item)
{
    node *curr = new node ;
    if(curr == NULL)
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
        curr->data = item ;
        if(front == NULL)
        {
            front = curr ;
            rear = curr ;
            front->next = curr ;
            rear->next = curr ;
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
    node *curr ;
    if(front == NULL)
    {
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        curr = front ;
        front = front->next ;
        cout << "DELETE: " << curr->data << endl ;
    }
}

void show()
{
    node *curr = front ;
    while(curr != NULL)
    {
        cout << curr->data << "->" ;
        curr = curr->next ;
    }
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

void average()
{
    double avg = 0 ;
    int sum = 0 , count = 0 ;

    node *curr = front ;
    while(curr != NULL)
    {
        sum+=curr->data ;
        count++ ;
        curr = curr->next ;
    }
    cout << "SUMMETION: " << sum << endl ;
    avg = (double)sum/count ;
    cout << "AVERAGE: " << avg << endl ;
}

int main()
{
    int elem , n ;
    cout << "ENTER THE SIZE OF QUEUE LINKED LIST: " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "ELEMANT: [ " << i << " ] = " ;
        cin >> elem ;
        enQueue(elem) ;
    }
    int key = -99 ;
    while(true)
    {
        cout << "1.PUSH 2.POP 3.SEARCHING 4.TRAVERSE 5.AVERAGE 6.EXITS" << endl ;
        cout << "TAKE THE KEY: " ;
        cin >> key ;

        if(key == 1)
        {
            cout << "ENTER THE SEARCHING VALUE: " ;
            cin >> elem ;
            sear(elem) ;
            if(sear(elem)==NULL) cout << "NOT FOUND!!" << endl ;
            else cout << "FOUND!!" << endl ;
        }
        else if(key == 2)
        {
            cout << "ENTER THE VAUE INSERTING: " ;
            cin >> elem ;
            enQueue(elem) ;
        }
        else if(key == 3)
        {
            deQueue() ;

        }
        else if(key == 4)
        {
            show() ;
        }
        else  if(key == 5)
        {
            average() ;
        }
        else
        {
            return 0 ;
        }

    }
}
