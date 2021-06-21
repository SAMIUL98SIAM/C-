#include<iostream>
using namespace std;
#define MAXSIZE 5

int s[MAXSIZE]; // array to store the stack elements
int top; 		// index for the top element

//function prototype declaration
void push(int value);
int pop();
int topp();
int isStackEmpty();
int isStackFull();
void display_stack();
int stackSize();
void stack_initialize();

//functions implementations are from here

void push(int value)
{
    //your code here
    //push will be done if array is not full
    // before push check whether array of Stack is full or not. If full then show a message to user that
    // Stack is full. Otherwise push the value.

    // use isStackFull() function here to implement the push()
    topp();
    if(isStackFull)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++ ;
        s[top] = value ;
    }

}

int pop()
{
    //your code here
   //pop will be done if array is not empty
    // before pop check whether array of Stack is empty or not. If empty then show a message to user that
    // Stack is empty. Otherwise pop the value & return it.

    // use isStackEmpty() function here to implement the pop()
    topp();
    if(isStackEmpty)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        return s[top] ;
        top--;
    }
}

int isStackEmpty()
{
    //your code here
    // return 1 if Stack is empty 0 otherwise
    topp();
    if(top<-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isStackFull()
{
      //your code here
    // return 1 if Stack is full 0 otherwise
    topp();
    if(top>MAXSIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

/*int stackSize()
{
    //your code here
   //return current allocated size of the Stack
}*/

void display_stack()
{
    //your code here
    // display all elements of Stack from top to bottom.
   topp();
   if(top>-1)
   {
       cout << "Stack Element: [ " ;
       for(int i=0;i<=top;i++)
       {
           cout << s[i] << " " ;
       }
       cout << " ] " << endl;
   }

}
int topp()
{
    //return top value here
    stack_initialize();
    return top;
}
void stack_initialize()
{
    top=-1;
}
int main()
{
    int option,n, value;
    stack_initialize();
    cout<<"C program to implement stack operations\n";
    do
    {
        cout<<"\n\n 1.Push an element in stack";
        cout<<"\n 2.Pop an element from stack";
        cout<<"\n 3.Display stack";
        cout<<"\n 4.Display current stack size ";
        cout<<"\n 5.Display top element ";
        cout<<"\n 6.Exit";
        cout<<"\n Enter your choice: ";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"\n Insert an element in stack : ";
            cin>>n;
            push(n);
            break;
        case 2:
            value = pop();
            if(value!=0)
            cout<<"\n \tPopped element is: "<<value<<endl;
            break;
        case 3:
            display_stack();
            break;
      /*  case 4:
            value=stackSize();
            cout<<" \n\tCurrently number of element in stack is "<<value;
            break;*/
        case 5:
            value=topp();
            cout<<"\n\tCurrent top element is "<<value;
            break;
        case 6:
            return 0;
        }

    }
    while(option<=6);

    return 0;
}
