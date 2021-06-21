S#include <iostream>

using namespace std;

struct node
{
    int data ;
    node *next ;
    node *pre;
};
node *head =NULL;
node *tail=NULL;

node *insertdata(int item , node *curr = NULL)
{
    node *newNode = new node ;
    newNode->data = item ;
    newNode->next = NULL ;
    newNode->pre = NULL ;
    if(curr == NULL)
    {
        newNode->next = head ;
        newNode->pre = tail ;
        head = newNode ;
        tail = newNode ;
    }
    else
    {
        newNode->next = curr->next ;
        curr->next = newNode ;
        newNode->pre = curr ;
        tail = newNode ;
    }
    return newNode ;
}

node *deletion()
{
    node *curr , *tmp , *tmp1 , *tmp , *pos ;
    int item ;
    cout << "ENTER THE POS TO BE DEL: " ;
    cin >> item ;
    pos = searchdata(item) ;
    curr = head ;
    for(int i=1 ; i<=NULL ; i++)
    {
        curr= curr->next ;
    }
    if(curr == head || curr->next == NULL)
    {
        tmp = tmp->next ;
        head = tmp ;
        tmp->prev = NULL
    }
}

void f_show()
{
    node *curr;
    curr = head ;

    while(curr != NULL)
    {
        cout << curr->data << "->" ;
        curr = curr->next ;
    }
    cout << "NULL" << endl ;
}

void l_show()
{
    node *curr;
    curr=tail;
    while(curr != NULL)
    {
        cout << curr->data << "->" ;
        curr = curr->pre;
    }
    cout << "NULL" << endl ;

}

node *searchdata(int s_key)
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

node *deletion()
{
    node *tmp , *tmp1 . *tmp2 , *curr , *pos ;
    int item  ;
    cout << "FIND THE POS TO BE DEL: " ;
    cin >> item ;
    pos = searchdata(item) ;
    curr = head ;
    for(int i=1 ; i<= NULL ; i++)
    {
        curr  = curr->next ;
    }
    if(curr == head || curr->next == NULL)
    {
        tmp = curr->next ;
        tail = curr ;
        tmp->next = NULL ;
    }
    else if()
    else
    {
        tmp1 = curr->pre ;
        tmp2 = curr->next ;
        tmp1->next = curr ;

    }
    cout<<"\n";
}



int main()
{
    node *p = NULL , *tmp ;
    int n ,elem,pos;
    cout << "ENTER THE SIZE OF NODE'S: " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "ELEMANT'S: [ " << i << " ] = " ;
        cin >> elem ;
        p = inserdata(elem,p) ;
    }
    int key = 0 ;
    while(true)
    {
         cout << "1.SEARCHING 2.INSERT AT MIDDLE AND LAST 3.INSERT AT HEAD 4.DELETE 5.TRAVERS 6.REVERS 7.EXITS" << endl ;
        cout << "ENTER TAKE THE KEY: " ;
        cin >> key ;

        if(key == 1)
        {
            cout << "ENTER THE SEARCHING VALUE: " ;
            cin >> elem ;
            searchdata(elem) ;
            if(searchdata(elem)==NULL) cout << "NOT FOUND!" << endl ;
            else cout << "FOUND!!" << endl ;
        }
        else if(key == 2)
        {
            cout << "FIND THE PSOITION TO BE INSERTED: " ;
            cin >> elem ;
            tmp = searchdata(elem) ;
            if(tmp==NULL) cout << "NOT INSERTED!!" << endl ;
            else
            {
                cout << "ENTER THE VALUE OF MIDDLE AND LAST INSERTION: " ;
                cin >> elem ;
                inserdata(elem,tmp) ;
            }
        }
        else if(key ==3)
        {
            cout << "ENTER THE VALUE OF HEAD INSERTION: " ;
            cin >> elem ;
            inserdata(elem) ;
        }
        else if(key == 4)
        {
            deletion() ;
        }
        else if(key == 5)
        {
            f_show();
        }
        else if(key == 6)
        {
            l_show();
        }
        else
        {
            return 0 ;
        }
    }
}
