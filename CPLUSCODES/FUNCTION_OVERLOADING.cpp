#include<iostream>

using namespace std;

class B2
{
    int a,b;
    double e,f;
    string yy;
public:
     sam(int x)
    {
        a=x;
        cout << "INTIGER:" << a << endl;
    }
    sam(double q)
    {
        e=q;
        cout << "FLOATING:" << e << endl;
    }
     sam(int p,int w)
    {
        a=p;
        b=w;
        cout << "ADDITION:" << a+b << endl;
    }
     sam(double z,int l)
    {
        e=z;
        b=l;
        cout << "SUBTRACTION:" << e-b << endl;

    }
     sam(string xx)
    {
        yy=xx;
        cout << "STRING:" << yy << endl;
    }


}obj;

int main()
{
    obj.sam("bjj");
   // sam(12.98,10);
    return 0;
}
