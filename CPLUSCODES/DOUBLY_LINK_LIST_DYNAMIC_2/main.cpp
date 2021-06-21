#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};
node *head = NULL ;
node *tail = NULL ;

node *createNode()
{
    node *newNode , *curr ;
    int N ;
    cout << "HOW MANY NODE'S YOU WANT TO CREAT IN: " ;
    cin >> N ;
    for(int i=0;i<N;i++)
    {
        newNode = new node ;
        cout << "ELEMANT'S: [ " << i << " ] = " ;
        cin >> newNode->data;
        newNode->next=NULL;
        newNode->prev=NULL;
        if(head == NULL || tail == NULL)
        {
            head = newNode ;
            tail = newNode ;
            curr = newNode ;
        }
        else
        {
            curr->next = newNode;
            newNode->prev = curr ;
            curr = newNode ;
            tail = curr ;
        }

    }
}

int searchdata(int s_key)
{
    node *curr = head ;
    int pos=0;
    while(curr != NULL)
    {
        pos++;
        if(s_key == curr->data)
        {
            return pos;
        }
        curr = curr->next ;
    }
    return -1;
}

node *f_insert()
{
    node *newNode = new node , *curr ;
    cout << "ENTER THE VALUE OF FIRST INSERTION: " ;
    cin >> newNode->data ;
    newNode->next=NULL ;
    newNode->prev=NULL ;
    curr = head ;
    newNode->next = curr ;
    curr->prev = newNode ;
    head = newNode ;
}

node *m_insert_A()
{
    node *newNode = new node , *curr ;
    node *temp;
    cout << "ENTER THE VALUE OF MIDDLE INSERTION: " ;
    cin >> newNode->data ;
    newNode->next=NULL ;
    newNode->prev=NULL ;
    int key,pos;

    cout << "FIND THE POSTION TO BE INSERTED: " ;
    cin >> key ;
    pos = searchdata(key);
    curr = head ;
    for(int i=1;i<pos;i++)
    {
        curr = curr->next ;
    }
    temp = curr->next;
    curr->next = newNode;
    newNode->prev =curr ;
    newNode->next =temp;
    temp->prev=newNode;
}

node *l_delete()
{
    node *curr , *temp ,*temp1 , *temp2 ;
    int key,pos;
    cout << "FIND THE POSITION TO BE DELETED: " ;
    cin >> key ;
    pos = searchdata(key);
    curr = head ;
    for(int i=1;i<pos;i++)
    {
        curr = curr->next ;
    }
    if(curr == head || curr->prev == NULL)
    {
        temp = curr->next;
        head = temp;
        temp->prev=NULL ;
    }
    else if(curr->next == NULL || curr == tail)
    {
        temp = curr->prev ;
        tail = temp;
        temp->next=NULL ;
    }
    else
    {
        temp1=curr->prev;
        temp2=curr->next;
        temp1->next=temp2;
        temp2->prev=temp1;
    }
}

node *f_show()
{
    node *curr = head ;
    cout << "DOUBLY LINKED LIST : [ " ;
    while(curr!=NULL)
    {
        cout << curr->data<< "->" ;
        curr = curr->next ;
    }
    cout << "NULL ] " << endl;
}

node *l_show()
{
    node *curr = tail ;
    cout << "REVERSE DOUBLY LINKED LIST : [ " ;
    while(curr!=NULL)
    {
        cout << curr->data<< "->" ;
        curr = curr->prev ;
    }
    cout << "NULL ] " << endl;
}

int main()
{
    int s_key,pos=0,k;
    createNode();
    while(true)
     {
            cout << "1.SEARCHING 2.INSERT AT MIDDLE AND LAST 3.INSERT AT HEAD 4.DELETE 5.TRAVERS 6.REVERS 7.EXITS" << endl ;
            cout << "ENTER TAKE THE KEY: " ;
            cin >> k ;

            if(k==1)
            {
                cout<<"Enter the value search for: ";
                cin>>s_key;
                pos=searchdata(s_key);
                if(pos==-1)
                    cout<<"NOT Found!!"<<endl;
                else
                    cout<<"Found!!"<<endl;
            }
            else if(k==2)
            {
                m_insert_A();
            }
            else if(k ==3)
            {
                f_insert();
            }
            else if(k == 4)
            {
                l_delete();
            }
            else if(k == 5)
            {
                f_show();
            }
            else if(k == 6)
            {
                l_show();
            }
            else
            {
                return 0 ;
            }
        }

}
