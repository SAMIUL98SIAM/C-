#include <iostream>

using namespace std ;

struct node
{
    int data ;
    node *next ;
};
node *head = NULL ;

node *createadd(int item , node *prev = NULL)
{
    node *newNode = new node ;
    newNode->data = item ;
    newNode->next = NULL ;

    if(prev == NULL)
    {
        newNode->next = head ;
        head = newNode ;
    }
    else
    {
        newNode->next = prev->next ;
        prev->next = newNode ;
    }
    return newNode ;
}

void show()
{
    node *curr = head ;

    while(curr != NULL)
    {
        cout << curr->data << " -> " ;
        curr = curr->next ;
    }
    cout << "NULL" << endl ;
}

int sear(int s_key)
{
    int pos = 0 ;
    node *curr = head ;

    while(curr != NULL)
    {
        pos++ ;

        if(s_key == curr->data)
        {
            return pos ;
        }
        curr = curr->next ;
    }
    return -1 ;
}

void insertion()
{
    int i_key , pos ;
    node *curr , *newNode , *temp ;
    newNode = new node ;
    cout << "ENTER THE VALUE OF MIDDLE AND LAST INSERTION: " ;
    cin >> newNode->data ;
    newNode->next = NULL ;
    cout << "FIND THE POSITION TO BE INSERTION: " ;
    cin >> i_key ;
    pos = sear(i_key) ;
    if(pos == -1)
    {
        cout << "NOT INSERTED!!" << endl ;
        return ;
    }
    curr = head ;
    for(int i=1 ; i<=pos - 1 ; i++)
    {
        curr = curr->next ;
    }
    temp = curr->next ;
    curr->next = newNode ;
    newNode->next = temp ;
}

void deletion()
{
    int d_key , pos ;
    node *curr = head , *tmp ;
    cout << "FIND THE POSITION TO BE DELETION: " ;
    cin >> d_key ;
    pos = sear(d_key) ;
    curr = head ;
    for(int i=1 ; i<=pos -1 ; i++)
    {
        curr = curr->next ;
    }
    if(curr == head)
    {
        head = curr->next ;
    }
    else if(curr->next == NULL)
    {
        curr = head ;
        for(int i=1 ; i<= pos-2 ; i++)
        {
            curr = curr->next ;

        }
        curr->next = head ;
    }
    else
    {

        tmp = curr->next ;
        for(int i=1 ; i<= pos-2 ; i++)
        {
            curr = curr->next ;

        }
        curr->next = tmp ;
    }
    cout << "DELETED SUCCESSFULYY: " <<  d_key << endl ;

}


int main()
{
    int pos = 0 , n , s_key , elemants;
    node *p = NULL , *temp ;
    cout << "ENTER THE SIZE OF NODE: " ;
    cin >> n ;
    for(int i=1 ; i<= n ; i++)
    {
        cout << "ELEMANT'S : [ " << i << " ] = " ;
        cin >> elemants ;
        p = createadd(elemants,p) ;
    }

    int choice = 0 ;

    while(true)
    {
        cout << "1.SEARCHING 2.MIDDLE AND LAST INSERTION 3.HEAD INSERTION 4.DELETION 5.TRAVERSE 6.EXITS " << endl ;
        cout << "PRESS THE KEY: " ;
        cin >> choice ;

        switch(choice)
        {
            case 1 :
                     cout << "ENTER THE SEARCHING VALEUE: " ;
                     cin >> s_key ;
                     pos = sear(s_key) ;
                     if(pos == -1)cout << "NOT FOUND!!" << endl ;
                     else cout << "FOUND AT : " << pos << endl ;
                     break ;

            case 2 :
                     insertion() ;
                     break ;

            case 3 :
                    cout << "ENTER THE VALUE OF HEAD INSERTION: " ;
                    cin >> elemants ;
                    createadd(elemants) ;
                    break ;

            case 4 :
                    deletion() ;
                    break ;

            case 5 :
                    show() ;
                    break ;

            case 6 :
                    return 0 ;

        }

    }

    return 0 ;
}
