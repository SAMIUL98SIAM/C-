#include<stdio.h>
#include<stdlib.h>
struct std
{
    int id;
    struct std *next;
    struct std *prev;
}*start=NULL,*end=NULL;

void create()
{
    struct std *newnode,*current;
    int n,i;
    printf("How many nodes do you want to create: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct std*)malloc(sizeof(struct std));
        printf("Enter the ID: ");
        scanf("%d",&newnode->id);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(start==NULL||end==NULL)
        {
            start=newnode;
            end=newnode;
            current=newnode;
        }
        else
        {
            current->next=newnode;
            newnode->prev=current;
            current=newnode;
            end=current;
        }
    }
}

void f_insert()
{
    struct std *newnode,*current;
    newnode=(struct std*)malloc(sizeof(struct std));
    printf("Enter the ID for first node: ");
    scanf("%d",&newnode->id);
    newnode->next=NULL;
    newnode->prev=NULL;
    current=start;
    newnode->next=current;
    current->prev=newnode;
    start=newnode;
}

void l_insert()
{
    struct std *newnode,*current;
    newnode=(struct std*)malloc(sizeof(struct std));
    printf("Enter the ID for last node: ");
    scanf("%d",&newnode->id);
    newnode->next=NULL;
    newnode->prev=NULL;
    current=end;
    current->next=newnode;
    newnode->prev=current;
    end=newnode;
}

void count()
{
    struct std *current;
    int count=0;
    current=start;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    printf("\nThere are %d number of nodes.\n\n",count);
}

int search(int s_key)
{
    struct std *current;
    int pos=0;
    current=start;
    while(current!=NULL)
    {
        pos++;
        if(s_key==current->id)
        {
            return pos;
        }
        current=current->next;
    }
    return -1;
}

void m_insert_A()
{
    int key,pos,i;
    struct std *newnode,*current,*temp;
    newnode=(struct std*)malloc(sizeof(struct std));
    printf("Enter the ID for middle node: ");
    scanf("%d",&newnode->id);
    newnode->next=NULL;
    newnode->prev=NULL;
    printf("\nEnter the value of the node after you inserting: ");
    scanf("%d",&key);
    pos=search(key);
    current=start;
    for(i=1;i<=pos-1;i++)
    {
        current=current->next;
    }
    temp=current->next;
    current->next=newnode;
    newnode->prev=current;
    newnode->next=temp;
    temp->prev=newnode;
}
void m_insert_B()
{
    int key,pos,i;
    struct std *newnode,*current,*temp;
    newnode=(struct std*)malloc(sizeof(struct std));
    printf("Enter the ID for middle node: ");
    scanf("%d",&newnode->id);
    newnode->next=NULL;
    newnode->prev=NULL;
    printf("\nEnter the value of the node before you inserting: ");
    scanf("%d",&key);
    pos=search(key);
    current=start;
    for(i=1;i<=pos-1;i++)
    {
        current=current->next;
    }
    temp=current->prev;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=current;
    current->prev=newnode;
}

void l_delete()
{
    struct std *current,*temp,*temp1,*temp2;
    int pos,i,d_key;
    printf("\nEnter the id for delete: ");
    scanf("%d",&d_key);
    pos=search(d_key);
    current=start;
    for(i=1;i<=pos-1;i++)
    {
        current=current->next;
    }
    if(current==start||current->prev==NULL)
    {
        temp=current->next;
        start=temp;
        temp->prev=NULL;
    }
    else if(current->next==NULL||current==end)
    {
        temp=current->prev;
        end=temp;
        temp->next=NULL;
    }
    else
    {
        temp1=current->prev;
        temp2=current->next;
        temp1->next=temp2;
        temp2->prev=temp1;
    }
    printf("\n%d is deleted successfully\n",d_key);
}

void max()
{
    struct std *current;
    int max;
    current=start;
    max=current->id;
    while(current!=NULL)
    {
        if(current->id>max)
        {
            max=current->id;
        }
        current=current->next;
    }
    printf("\nThe max value of the link list is %d",max);
}

void min()
{
    struct std *current;
    int min;
    current=start;
    min=current->id;
    while(current!=NULL)
    {
        if(current->id<min)
        {
            min=current->id;
        }
        current=current->next;
    }
    printf("\nThe min value of the link list is %d",min);
}

void avg()
{
    struct std *current;
    int sum=0,count=0;
    float avg=0;
    current=start;
    while(current!=NULL)
    {
        sum+=current->id;
        count++;
        current=current->next;
    }
    printf("\nThe summation of the link list is %d",sum);
    avg=(float)sum/count;
    printf("\nThe average of the link list is %.2f\n",avg);
}

void sorting()
{
    struct std *current1,*current2;
    int temp;
    for(current1=start;current1->next!=NULL;current1=current1->next)
    {
        for(current2=start;current2->next!=NULL;current2=current2->next)
        {
            if((current2->next)->id<current2->id)
            {
                temp=current2->id;
                current2->id=(current2->next)->id;
                (current2->next)->id=temp;
            }
        }
    }
}

void display()
{
    struct std *current;
    printf("\nThe link list by forward display:\n");
    current=start;
    while(current!=NULL)
    {
        printf("%d-->",current->id);
        current=current->next;
    }
    printf("NULL\n");
    printf("\nThe link list by backward display:\n");
    current=end;
    while(current!=NULL)
    {
        printf("%d-->",current->id);
        current=current->prev;
    }
    printf("NULL\n");
}

int main()
{
    int s_key,pos=0;
    create();
    display();
    count();
    f_insert();
    display();
    count();
    l_insert();
    display();
    count();
    printf("Enter the value search for: ");
    scanf("%d",&s_key);
    pos=search(s_key);
    if(pos==-1) printf("\nThe value was not found\n\n");
    else printf("\nThe value is at %d\n\n",pos);
    m_insert_A();
    display();
    count();
    m_insert_B();
    display();
    count();
    l_delete();
    display();
    count();
    max();
    min();
    avg();
    sorting();
    printf("\nThe Link List After Shorting In Ascending Order:\n");
    display();
}
