/*
This code define four functions namely insertion, deletion, search and traverse
for linked list data structure.
*/
#include <bits/stdc++.h>

using namespace std;

//Defining the node
struct node
{

   int data;
   node *link;
};

//initializing head (first node) to null
node *head=NULL;
//Defining a function to add a node after a previous node
/*node* addNode(int num, node *prev=NULL)
{
   // creating the node
   node *newNode = new node;
   newNode -> data = num;
   newNode -> link = NULL;

   //adding node at head (prev = null)
   if(prev==NULL){
       newNode->link = head;
       head = newNode;
   }

   //adding node after previous
   else
   {
       newNode->link = prev->link;
       prev->link =newNode;
   }
   return newNode;
}*/

// Now implement a function named deleteNode to delete a node (data)


void show()
{
   node *curr = head;
   while(curr != NULL)
   {
       cout<< curr->data << "->";
       curr = curr->link;
   }
   cout<<"\n\n";
}

/*
Now implement a function named searchData to search a particular value.
The function should return address of the node where the search element is found
otherwise return NULL.
*/
/*node* searchData(int key){
   //COMPLETE THE FUNCTION

   return NULL;
}*/

void del();
void addData();

int sear(int s_key)
{
    node *curr;
    int pos=0;
    curr=head;
    while(curr!=NULL)
    {
        pos++;
        if(s_key==curr->data)
        {
            return pos;
        }
        curr=curr->link;
    }
    return -1;
}

int main()
{
   /// populate linked list with some values
   int n,elem,i,s_key,pos=0;
   head = NULL;

   cout<<"How many elements? ";
   cin>>n;
   node *p=NULL,*tmp;
   for(i=0; i<n; i++)
   {
       cout<<"Element "<<i+1<<": ";
       cin>>elem;
       p = addNode(elem,p);
   }
   show();

   int choice;
   while(true)
   {
       cout<<"\n1) search data\n2) add data\n3) add data at head\n4) delete data\n5) show List\n0) Exit\nEnter option: ";
       cin>>choice;
       switch(choice)
       {
       case 1:
           //use searchData function here
            printf("Enter the value search for: ");
            scanf("%d",&s_key);
            pos=sear(s_key);
            if(pos==-1) printf("\nThe value was not found\n\n");
            else printf("\nThe value is at %d\n\n",pos);
           break;
       case 2:
           //use addData function here
           addData();
           break;
       case 3:
           cout<<"Which element to insert? ";
           cin>>elem;
           addNode(elem);
           break;
       case 4:
           del();
           break;
       case 5:
           show();
           break;
       case 0:
           return 0;
       }
   }


   return 0;
}

void del()
{
    node *curr=head,*tem;
    int pos=0,i,d_key;
    printf("\nEnter the data for delete: ");
    scanf("%d",&d_key);
    pos=sear(d_key);
    curr=head;
    for(i=1;i<=pos-1;i++)
    {
        curr=curr->link;
    }
    if(curr==head)
    {
        head=curr->link;
    }
    else if(curr->link==NULL)
    {
        curr=head;
        for(i=1;i<=pos-2;i++)
        {
            curr=curr->link;
        }
        curr->link=NULL;
    }
    else
    {
        tem=curr->link;
        curr=head;
        for(i=1;i<=pos-2;i++)
        {
            curr=curr->link;
        }
        curr->link=tem;
    }
    printf("\n%d is deleted successfully\n",d_key);
}

void addData()
{
    int key,pos,i;
    struct node *newNode,*curr,*temp;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data for middle node: ");
    scanf("%d",&newNode->data);
    newNode->link=NULL;
    printf("Enter the value of the node after you inserting: ");
    scanf("%d",&key);
    pos=sear(key);
    if(pos==-1){
        printf("\nThe value was not found\n\n");
        return;
    }
    curr=head;
    for(i=1;i<=pos-1;i++)
    {
        curr=curr->link;
    }
    temp=curr->link;
    curr->link=newNode;
    newNode->link=temp;
}
