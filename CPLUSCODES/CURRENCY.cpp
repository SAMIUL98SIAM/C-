#include<iostream>
using namespace std;
 float convert()
{
    double t,d;
    cout<<"enter the taka:"<<endl;
    cin>>t;
    d=t*89.45;
    cout<<endl<<"taka to dollar:"<<endl<<d;
    return 0;
}
float conversion()
{
    double d,e;
    cout<<endl<<"enter the dollar:"<<endl;
    cin>>d;
    e=d/1.234;
    cout<<endl<<"dollar to euro:"<<endl<<e;
    return 0;

}
int main()
{
    convert();
    conversion();
    return 0;
}
