#include <bits/stdc++.h>

using namespace std ;

struct node
{
    int data ;
    node *next ;
};
node *front = NULL ;
node *rear = NULL ;

void enQue(int item)
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
            front->next = NULL ;
            rear->next = NULL ;
        }
        else
        {
            rear->next = curr ;
            rear = curr ;
            rear->next = NULL ;
        }
    }
}

int deQue()
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
    cout << "QUE LIST: [ " ;
    while(curr != NULL)
    {
        cout << curr->data << "->" ;
        curr = curr->next ;
    }
    cout << "NULL ] " << endl ;
}


node *searchdata(int s_key)
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
    int sum = 0 , count = 0 ;
    double avg = 0 ;
    node *curr = front ;
    while(curr != NULL)
    {
        sum+=curr->data ;
        count++ ;
        curr = curr->next ;
    }
    cout << "SUMMESION: " << sum << endl ;
    avg = (double)sum/count ;
    cout << "AVERAGE: " << avg << endl ;
}


int main()
{
    int elem , n ;
    cout << "ENTER THE SIZE OF LL QUE: " ;
    cin >> n;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "ELEMANT'S: [ " << i << " ] = " ;
        cin >> elem ;
        enQue(elem) ;
    }
    int key = 0 ;
    while(true)
    {
        cout << "1.PUSH 2.POP 3.TRAVERSE 4.SEARCHING 5.AVERAGE 6.EXITS" << endl ;
        cout << "CHOOSE YOUR OPTION: " ;
        cin >> key ;
        if(key == 1)
        {
            cout << "PUSH: " ;
            cin >> elem ;
            enQue(elem) ;
        }
        else if(key == 2)
        {
            deQue() ;
        }
        else if(key == 3)
        {
            show() ;
        }
        else if(key == 4)
        {
            cout << "ENTER THE VALUE OF SEARCHING: " ;
            cin >> elem ;
            searchdata(elem) ;
            if(searchdata(elem)==NULL) cout << "NOT FOUND!!" << endl ;
            else cout << "FOUND!!" << endl ;
        }
        else if(key == 5)
        {
            average() ;
        }
        else
        {
            return 0 ;
        }
    }
}
