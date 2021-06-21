#include <bits/stdc++.h>

using namespace std ;

struct node
{
    int data ;
    node *next ;
};
node *top = NULL ;

void push(int item)
{
    node *curr = new node ;
    if(curr == NULL)
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
       curr->data = item ;
       curr->next = top ;
       top = curr ;
       //curr->next = NULL ;




    }
}

void pop()
{
    node *curr = top ;
    if(top == NULL)
    {
        cout << "UNDERFLOW!" << endl ;
    }
    else
    {
        curr = top ;
        top = top->next ;
        free(curr) ;
        cout << "POP: " << curr->data << endl;
    }
}

void show()
{
    //node *curr = top ;
    cout << "STACK LIST: [ " ;
    while(top != NULL)
    {
        //top = top->next ;
        cout << top->data << "->" ;
        top = top->next ;
    }
    cout << "NULL ] " << endl ;

}

node *seachdata(int s_key)
{
    node *curr = top ;
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

void math()
{
    int sum = 0 , count = 0 ;
    double avg = 0 ;
    node *curr = top ;
    while(curr != NULL)
    {
        sum+=curr->data;
        count++;
        curr = curr->next ;
    }
    cout << "SUM: " << sum << endl ;
    avg = (double)sum/count ;
    cout << "AVERAGE: " << avg << endl ;
}



int main()
{
    int n , elem ;
    cout << "ENTER THE SIZE OF LIST: " ;
    cin >> n ;
    for(int i=1; i<=n ; i++)
    {
        cout << "ELEMANT'S: [ " << i << " ] = " ;
        cin >> elem ;
        push(elem) ;
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
            push(elem) ;
        }
        else if(key == 2)
        {
            pop() ;
        }
        else if(key == 3)
        {
            show() ;
        }
        else if(key == 4)
        {
            cout << "ENTER THE VALUE OF SEARCHING: " ;
            cin >> elem ;
            seachdata(elem) ;
            if(seachdata(elem)==NULL) cout << "NOT FOUND!!" << endl ;
            else cout << "FOUND!!" << endl ;
        }
        else if(key == 5)
        {
            math() ;
        }
        else
        {
            return 0 ;
        }
    }
}
