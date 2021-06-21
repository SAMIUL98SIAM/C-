#include <iostream>
using namespace std;

#define SIZE 5
int items[SIZE];
int front = -1, rear =-1;

int isFull()
{
   if( (front == rear + 1) || (front == 0 && rear == SIZE-1)) return 1;
   return 0;
}

int isEmpty()
{
   if(front == -1) return 1;
   return 0;
}

void enQueue(int element)
{
   if(isFull()) cout << "\n Queue is full!! \n";
   else
   {
       if(front == -1) front = 0;
       rear = (rear + 1) % SIZE;
       items[rear] = element;
   }
}


int deQueue()
{
   int element;
   if(isEmpty()) {
       cout << "\n Queue is empty !! \n";
       return(-1);
   } else {
       element = items[front];
       if (front == rear){
           front = -1;
           rear = -1;
       }
       else {
           front = (front + 1) % SIZE;

       }
       cout << "\n Deleted element -> " << element;
       return(element);
   }
}




void display()
{
   int i;
   if(isEmpty()) cout << " \n Empty Queue\n";
   else
   {
       cout << "\n Front -> " << front ;
       cout << "\n In Queue : [ ";
       for( i = front; i!=rear; i=(i+1)%SIZE) {
           cout << " " << items[i] << " ";
       }
       cout << " "<< items[i] << " " ;
       cout << "]";
       cout << "\n Rear -> " << rear;
   }
}

int main()
{
  int key = 0 ;
  while(true)
  {
      cout << "\n\n1.INSERT 2.DELETE 3.SHOW 4.EXITS" << endl ;
      cout << "PLEASE ENTER THE KEY: " ;
      cin >> key ;

      switch (key)
      {
          case 1 :
                int elemant ;
                cout << "\nINSERT : " ;
                cin >> elemant ;
                enQueue(elemant) ;
                break ;

          case 2 :
               deQueue() ;
               break ;

          case 3 :
               display() ;
               break ;

          case 4 :
               return 0 ;

      }

  }

  return 0;
}

