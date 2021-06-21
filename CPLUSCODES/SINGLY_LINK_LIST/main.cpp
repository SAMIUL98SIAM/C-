#include<iostream>

using namespace std ;

struct node
{
    int data ;
    node *next ;
};
node *head = NULL ;

node *addnode (int item , node *prev = NULL)
{
    node *nn = new node ;
    nn->data = item ;
    nn->next = NULL ;

    if(prev == NULL)
    {
        nn->next = head ;
        head = nn ;
    }
    else
    {
        nn->next = prev->next ;
        prev->next = nn ;
    }
    return nn ;
}

void show()
{
    node *curr = head ;

    while(curr != NULL)
    {
        cout << curr->data << "->" ;
        curr = curr->next ;
    }
   cout << "NULL" << endl ;
}

int sear(int s_key)
{
    node *curr = head ;
    int pos = 0 ;
    while(curr != NULL)
    {
        pos++ ;
        if(s_key == curr->data)
        {
            return pos ;
        }
        curr =  curr->next ;
    }
    return -1 ;
}

void inseertion()
{
    node *curr , *temp , *nn ;
    nn = new node ;
    int pos , i_key ;
    cout << "ENTER VALUE OF MIDDLE AND LAST INSERTION: " ;
    cin >> nn->data ;
    nn->next = NULL ;
    cout << "FIND THE POSITION TO BE DELETED: " ;
    cin >> i_key ;
    pos = sear(i_key);
    if(pos == -1)cout << "NOT INSERTED!!" << endl ;
    curr  = head ;
    for(int i=1 ; i<= pos -1 ; i++)
    {
        curr = curr->next ;
    }
     temp = curr->next ;
     curr->next = nn ;
     nn->next = temp ;
}

void deletion()
{
    node *curr = head , *tmp ;
    int pos , d_key ;
    cout << "FIND THE POSITION TO BE DELETED: " ;
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
    cout << "DELETE SUCCESSFULLY: " << d_key << endl ;
}

int main()
{
    int pos = 0 , elem , s_key , n ;
    node *p = NULL , *tmp ;
    cout << "ENTER THE SIZE OF NODE'S: " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "ELEMANT'S : [ " << i << " ] = " ;
        cin >> elem ;
        p = addnode(elem,p) ;
    }

    int choice = 0 ;

    while(true)
    {
         cout << "1.SEARCHING 2.INSERTION AT MIDDLE AND LAST 3.INSERTION AT HEAD 4.DELETION 5.TRAVERSE 6.EXITS" << endl ;
         cout << "TAKE THE KEY: " ;
         cin >> choice ;

         switch(choice)
            {
                case 1 :
                          cout << "ENTER THE SEARCHING VALUE: " ;
                          cin >> s_key ;
                          pos = sear(s_key);
                          if(pos == -1)cout << "NOT FOUND!!" << endl ;
                          else cout << "FOUND AT: " << pos << endl ;



                case 2 :
                        inseertion() ;
                        break ;



                case 3 :
                         cout << "ENTER THE VALUE OF INSERTION HEADING: " ;
                         cin >> elem ;
                         addnode(elem) ;
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

