#include <iostream>

using namespace std;

#define q_size 10

class prime_queue
{
    int queue_prime[q_size];
    int i,x,f,r,n, choice,result;

public:
    prime_queue();
    void Enqueue();
    void Dequeue();
    void show_queue();
};

prime_queue::prime_queue()
{
    f=-1;
    r=-1;
    n=0;

    for (i=0; i=-1; i++)
    {
        cout<<"1. Enter data"<<endl<<"2. Delete Data"<<endl<<"3. Show Queue"<<endl<<"0. Stop Program"<<endl<<"choice: ";
        cin>>choice;

        if (choice==1)
            Enqueue();
        else if (choice==2)
            Dequeue();
        else if (choice==3)
            show_queue();
        else if (choice==0)
            break;
        else
            cout<<"!!Invalid Choice!!"<<endl;

        cout<<endl<<endl;
    }

}

void prime_queue::Enqueue()
{
    result =0;

    cout<<endl<<"Enter a prime number: ";
    cin>>x;

    for(i=1; i<x/2; i++)
    {
        if(x%(i+1)==0)
            result=1;
    }

    if(result==0)
    {
            if(r==q_size)
        {
            cout<<"Queue is full"<<endl;
        }

        else
        {
            if (f==-1)
            f++;
            r++;
            queue_prime[r]=x;
            n++;
            cout<<endl<<"Prime Number inserted"<<endl;;
        }
    }

    else
        cout<<endl<<x<<" is not prime"<<endl;



}

void prime_queue::Dequeue ()
{
    if (n==0)
        cout<<"Queue is empty"<<endl;
    else
    {
        f++;
        n--;
        cout<<endl<<"Element Deleted"<<endl<<endl;
    }
}

void prime_queue::show_queue()
{
    cout<<endl<<endl<<"Showing Queue: "<<endl;
    for (i=f; i<=r; i++)
    {
        cout<<queue_prime[i]<<endl;
    }
    cout<<endl<<endl;
}

int main()
{

    prime_queue ob;

    return 0;
}
