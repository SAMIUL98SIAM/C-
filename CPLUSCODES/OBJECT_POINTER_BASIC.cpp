#include<iostream>
using namespace std;
int main()
{
    int a=12;
    int *b;
    b=&a;
    cout<<"add of:i="<<&a<<endl;
    cout<<"add of:i="<<b<<endl;
    cout<<"add of:i="<<&b<<endl;
    cout<<"add of:i="<<b<<endl;
    cout<<"add of:i="<<a<<endl;
    cout<<"add of:i="<<*(&a)<<endl;
    cout<<"add of:i="<<*b<<endl;

    return 0;
}

