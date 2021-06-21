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
        cout << curr->data <<  " -> " ;
        curr = curr->next ;
    }
    cout << " NULL " << endl ;
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
    return - 1 ;
}

void insertion()
{
    int pos  , s_key ;
    node *newNode , *curr , *temp ;
    newNode = new node ;
    cout << "ENTER THE MIDDLE AND LAST NODE TO BE INSERT: " ;
    cin >> newNode->data ;
    newNode->next = NULL ;
    cout << "FIND THE POSITION TO BE INSERTED: " ;
    cin >> s_key ;
    pos = sear(s_key) ;
    if(pos == -1)
    {
        cout << "NOT INSERTED!!" << endl ;
        return ;
    }
    curr = head ;
    for(int i=1 ; i<= pos - 1 ; i++)
    {
        curr = curr->next ;
    }
    temp = curr->next ;
    curr->next = newNode ;
    newNode->next = temp ;

}

void deletion()
{
    int pos = 0 , d_key ;
    node *curr = head , *temp ;
    cout << "FIND THE POSITION TO BE DELETED: " ;
    cin >> d_key ;
    pos = sear(d_key) ;
    curr = head ;
    for(int i=1 ; i<= pos - 1 ; i++)
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
        for(int i=1 ; i<= pos - 2 ; i++)
        {
             curr = curr->next ;
        }
        curr->next = head ;
    }
    else
    {
        temp = curr->next ;
        for(int i=1 ; i<= pos - 2 ; i++)
        {
            curr = curr->next ;
        }
        curr->next = temp ;
    }

    cout << "DELETED SUCCESSFULLY: " << d_key << endl ;

}


int main()
{
    node *p = NULL , *tmp ;
    int pos = 0 , n , elem , s_key ;
    p = NULL ;
    cout << "ENTER THE SIZE OF NODE'S: " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "ELEMANT'S [ " << i << " ] = " ;
        cin >> elem ;
        p = createadd(elem,p);
    }

    int key = 0 ;
    while(true)
    {
        cout << "1.SEARCHING 2.MIDDLE AND LAST INSERTION 3.HEAD INSERTION 4.DELETION 5.TRAVERSE 6.EXITS"  << endl;
        cout << "TAKE THE KEY: ";
        cin >> key ;
        switch(key)
           {
              case 1 :
                       cout << "ENTER THE SEARCHING VALUE: " ;
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
                      cin >> elem ;
                      createadd(elem) ;
                      break ;

              case 4 :
                       deletion();
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

