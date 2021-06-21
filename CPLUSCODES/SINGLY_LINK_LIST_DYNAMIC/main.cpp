#include <bits/stdc++.h>

using namespace std ;

struct node
{
    int data  ;
    node *next ;
};
node *head = NULL ;

node *insertd(int item , node *curr = NULL)
{
    node *newNode = new node ;
    newNode->data = item ;
    newNode->next = NULL ;

    if(curr == NULL)
    {
        newNode->next = head ;
        head = newNode ;
    }
    else
    {
        newNode->next = curr->next ;
        curr->next = newNode ;
    }
    return newNode ;
}

node *deleted(int pos)
{
    node *curr = head ;
    if(curr == NULL)
    {
        return curr ;
    }
    else if(pos == 0)
    {
        node *curr ;
        curr = curr->next ;
        return curr ;
    }
    else
    {
        node *temp = curr ;
        for(int i=0 ; i<=
        pos ; i++)
        {
            temp = temp->next ;
        }
        temp->next = (temp->next)->next ;
        return curr ;
    }
}

void show()
{
    node *curr = head ;
    cout << "SINGLY LINKED LIST: [ " ;
    while(curr != NULL)
    {
        cout << curr->data << "->" ;
        curr = curr->next ;
    }
    cout << " ] " << endl ;
}

node *sear(int s_key)
{
    node *curr = head ;
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

void avarage()
{
    double avg = 0 ;
    int sum = 0 , count = 0 ;
    node *curr = head ;
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
    node *p = NULL , *temp ;
    int elem , n ;
    cout << "ENTER THE SIZE OF NODE'S: " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "ELEMANT'S: [ " << i << " ] = " ;
        cin >> elem ;
        p = insertd(elem,p) ;
    }
    int key = 0 ;
    while(true)
    {
        cout << "1.SEARCHING 2.INSERTION AT MIDDLE AND LAST 3.INSERTION AT HEAD 4.TRAVERSE 5.AVERAGE 6.DELETION 8.EXITS" << endl ;
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
            cout << "FIND THE POSITION TO BE MIDD AND LAST INSERTION: " ;
            cin >> elem ;
            temp = sear(elem) ;
            if(temp == NULL) cout << "NOT INSERTED!!!" << endl ;
            else
            {
                cout << "ENTER THE VALUE OF INSERTION: " ;
                cin >> elem ;
                insertd(elem,temp) ;
            }
        }
            else if(key == 3)
            {
                cout << "ENTER THE VALUE OF HEAD INSERTION: " ;
                cin >> elem ;
                insertd(elem) ;
            }
            else if(key == 4)
            {
                show() ;
            }
            else if(key == 5)
            {
                avarage() ;
            }
            else if(key == 6)
            {
                cout << "ENTER THE VALUE OF INSERTION: " ;
                cin >> elem ;
                deleted(elem) ;
            }
            else
            {
                return 0 ;
            }
        }
    }


