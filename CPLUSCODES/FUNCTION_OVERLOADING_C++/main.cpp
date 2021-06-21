#include <iostream>

using namespace std;

void f ()
{
    cout << " nothing " << endl;
}

void f ( int a)
{
    cout << " Number :  " << a << endl;
}

void f (double a)
{
    cout << " Floating Number : " << a << endl;
}

void f ( char a )
{
    cout << " Chat : " << a << endl;
}

void f (string a)
{
    cout << " String Vale : " << a << endl;
}



int main()
{

   f();
f(12);
f(5.9);
    f('A');
f("S A I M");
    return 0;
}
