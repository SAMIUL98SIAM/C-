#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std ;

struct node
{
    int data ;
    node *next ;
};
node *front = NULL ;
node *rear = NULL ;

void enQue(int item)
{
    node *curr = new node ;
   if(curr == NULL)
   {
       cout << "OVERFLOW!!" << endl ;
   }
   else
   {
       curr->data = item ;
       if(front == NULL)
       {
           front = curr ;
           rear = curr ;
           front->next = curr ;
           rear->next = curr ;
       }
       else
       {
           rear->next = curr ;
           rear = curr ;
           rear->next = NULL ;
       }
   }
}

void deQue()
{
    node *curr = front ;
    if(front == NULL)
    {
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        curr = front ;
        front = front->next ;
        free(curr) ;
        cout << "DELETED: " << curr->data << endl ;
    }
}

node *searchdata(int s_key)
{
    node *curr = front ;
    while(curr != NULL)
    {
        if(s_key == curr->data)
        {
            return curr ;
        }
        curr = curr->next ;
    }
}

void show()
{
    node *curr = front ;
    cout << "QUEUE LINK LIST: [ " ;
    while(curr != NULL)
    {
        cout << curr->data << "->" ;
        curr = curr->next ;
    }
    cout << " ] " << endl ;
}

void average()
{
    int sum = 0 , count = 0 ;
    double avg = 0 ;
    node *curr = front ;
    while(curr != NULL)
    {
        sum+=curr->data;
        count++;
        curr=curr->next;
    }
    cout << "SUMMESION: " << sum << endl;
    avg = (double)sum/count;
    cout << "AVERAGE: " << avg << endl ;
}

int main()
{
    int n , elem ;
    cout << "ENTER THE SIZE QUEUE LIST: " ;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cout << "ARRAY LIST: [ " << i << " ] = " ;
        cin >> elem ;
        enQue(elem) ;
    }
    int key = 0 ;
    while(true)
    {
        cout << "1.INSEERT 2.DELETE 3.SEARCHING 4.TRAVERSE 5.AVERAGE 6.OFF" << endl ;
       cout << "PRESS THE BUTTON: " ;
       cin >> key ;
       if(key == 1)
       {
           cout << "ENTER THE VALUE OF INSERTION: " ;
           cin >> elem ;
           enQue(elem) ;
       }
       else if(key == 2)
       {

           deQue() ;
       }
       else if(key == 3)
       {
           cout << "ENTER THE VALUE OF SEARCHING: " ;
           cin >> elem ;
           searchdata(elem) ;
           if(searchdata(elem)==NULL) cout << "NOT FOUND!!!" << endl;
           else
           {
               cout << "FOUND!!" << endl ;
           }
       }
       else if(key == 4)
       {
           show() ;
       }
       else if(key == 5)
       {
           average();
       }
       else
       {
           cout << "AGGHH!!FUCK OUTTAH HERE!!" << endl ;
           return 0 ;
       }
    }
}
