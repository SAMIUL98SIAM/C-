#include<iostream>

using namespace std;

class B3
{
    float ph,pl,m,e,total;
public:
    void result ();

}siam,nabil;

void  B3 :: result ()
{
    cout << "ENTER THE PHYSICS GPA:" <<endl;

    cin >>ph;

    cout << "ENTER THE PROGRAMMING GPA:" <<endl;

    cin >>pl;

    cout << "ENTER THE MATH GPA:" <<endl;

    cin >>m;

    cout << "ENTER THE ENGLISH GPA:" <<endl;

    cin >>e;

    total=(ph+pl+m+e)/4;

    cout << "TOTAL CGPA:" << total <<endl;

}

int main()
{
    cout << "MD SAMIUL HOQUE(18-38844-3)"<<endl;
    siam.result();

    cout << "NABIL SIDDIQ(18-38839-3)" <<endl;
    nabil.result();

    return 0;


    //odrib.result();

}
