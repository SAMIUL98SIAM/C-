#include <iostream>

using namespace std;

int add();
void sub(double a , double b); // prototype
int dov();


int main()
{

    cout << "ADD:" << add () << endl ;
    sub (12 ,10) ;
    cout << "DIV:" << dov () << endl ;

    return 0;
}

int add()
{
    cout << "ENTER TWO NUMBER'S:" << endl;
    double a , b ;
    cin >> a >> b ;
    return a+b ;
}

void sub(double x , double y)
{
    cout << "SUB:" << x-y << endl;

}

int dov()
{
    cout << "ENTER TWO NUMBER'S:" << endl;
    double c , d ;
    cin >> c >> d ;

    return c/d ;
}
