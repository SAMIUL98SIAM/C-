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

node *create()
{
    node *newNode , *curr ;
    int N ;
    cout << "HOW MANY NODE'S YOU WANT TO CREATE IN: " ;
    cin >> N ;
    for(int i=0;i<N;i++)
    {
        newNode = new node ;
        cout << "ELEMANT'S: [ " << i << " ] = " ;
        cin >> newNode->data;
        newNode->next=NULL ;
        newNode->prev=NULL ;
        if(head == NULL || tail == NULL)
        {
            head = newNode;
            tail = newNode;
            curr = newNode;
        }
        else
        {
            curr->next=newNode;
            newNode->prev=curr;
            curr=newNode;
            tail = curr;
        }
    }
    return newNode;
}

node *f_insert()
{
    node *newNode = new node , *curr ;
    cout << "ENTER THE VALUE OF FIRST INSERTION: " ;
    cin >> newNode->data ;
    curr =  head ;
    newNode->next = curr ;
    curr->prev = newNode;
    head = newNode;
}

int searchdata(int s_key)
{
    node *curr = head ;
    int pos = 0 ;
    while(curr != NULL)
    {
        pos++;
        if(curr->data == s_key)
        {
            return pos;
        }
        curr = curr->next ;
    }
    return -1;
}

node *m_insert_A()
{
    node *newNode = new node , *curr , *temp ;
    cout << "ENTER THE VALUE OF MIDDLE AND LAST INSERTION: " ;
    cin >> newNode->data;
    newNode->next=NULL;
    newNode->prev=NULL;
    curr = head ;
    int s_key,pos;
    cout << "FIND THE NODE'S TO BE INSERTED: " ;
    cin >> s_key;
    pos = searchdata(s_key);
    for(int i=1;i<pos;i++)
    {
        curr = curr->next;
    }
    temp = curr->next;
    curr->next=newNode;
    newNode->prev=curr;
    newNode->next=temp;
    temp->prev=newNode;
}

node *l_delete()
{
    node *curr , *temp , *temp1 ,*temp2;
    int pos,s_key;
    curr = head ;
    cout << "FIND THE NODE'S TO BE DELETED: " ;
    cin >> s_key;
    pos = searchdata(s_key);
    for(int i=1;i<pos;i++)
    {
        curr = curr->next;
    }
    if(curr == head || curr->prev == NULL)
    {
        temp = curr->next ;
        head = temp;
        temp->prev=NULL ;
    }
    else if(curr == tail || curr->next == NULL)
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
    struct node *current;
    cout<<"The link list by forward display:"<<endl;
    current=head;
    while(current!=NULL)
    {
        cout<<current->data<<"-->";
        current=current->next;
    }
    cout<<"NULL\n";
}
void l_show()
{
    struct node *current;
    cout<<"The link list by backward display:"<<endl;
    current=tail;
    while(current!=NULL)
    {
        cout<<current->data<<"-->";
        current=current->prev;
    }
    cout<<"NULL\n";
}

int main()
{
    int s_key,pos=0,k;
    create();
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
