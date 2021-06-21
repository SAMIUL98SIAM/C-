#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *front=NULL;
void enqueue(int n)
{
    if(front==NULL){
    node *newnode=new node();
    newnode->data=n;
    newnode->next=front;
    front=newnode;
    }
    else{
        node *curr=front;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        node *newnode=new node();
        newnode->data=n;
        newnode->next=NULL;

        curr->next=newnode;
    }
}
void display()
{
    node *curr=front;
    if(curr==NULL)
    {
        cout<<"Link List Is Empty.So Nothing To Show!!"<<endl;
    }
    while(curr!=NULL)
    {
        cout<<endl;
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}

void dequeue(){
    node *temp=front;
    if(temp==NULL)
    {
        cout<<"Sorry nothing to delete.Please Insert First Then Delete"<<endl;
        return;
    }
    front=front->next;
    delete(temp);
}
float avgOfNodes( node* front)
{
    if (front==NULL){
        return -1;
    }
    int count = 0;
    int sum = 0;
    float avg;
    while (front != NULL) {
        count++;
        sum += front->data;
        front = front->next;
    }
    avg = (double)sum / count;

    return avg;
}
bool search( node* front, int x)
{
     node* current = front;
    while (current != NULL)
    {        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}
int main()
{
    int e,r,d;
    cout<<"How many elements to insert"<<endl;
    cin>>e;
    cout<<"Enter elements"<<endl;
    for(int i=1;i<=e;i++)
    {
        cin>>r;
        enqueue(r);
    }
    int choice;
    while(true)
    {
        cout<<"1:enqueue 2:dequeue 3:average 4:search 5:show"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Insert Elements : "<<endl;
            cin>>r;
            enqueue(r);
            break;
        case 2:
            cout<<"After Dequeue"<<endl;
            dequeue();
            break;
        case 3:
            cout << "Average of nodes = " << avgOfNodes(front)<<endl;
            break;
        case 4:
            int se;
            cout<<"Which elements to search for?"<<endl;
            cin>>se;
            if(search(front,se)){
                cout<<"Found"<<endl;
            }
            else{
            cout<<"Not Found"<<endl;
            }
            break;
            case 5:
            display();
            break;
        }
    }
    return 0;
}
