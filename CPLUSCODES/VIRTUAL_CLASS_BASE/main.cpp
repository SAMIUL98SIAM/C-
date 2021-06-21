#include <iostream>

using namespace std;

class A
{
private:
    int a ;
public:
    void print_A()
    {
        a = 10 ;
        cout << "CLASS A: " << a << endl;
    }
};

class B : public virtual A
{
private:
 int b ;
public:
    void print_B()
    {
        b = 20 ;
        cout << "CLASS B: " << b << endl;
    }
};

class C : public virtual A
{
private:
int c ;
public:
    void print_C()
    {
        c=30 ;
        cout << "CLASS C: " << c << endl;
    }
};

class D : public B , public C
{
private:
int d ;
public:
    void print_D()
    {
        d=40 ;
        cout << "CLASS D: " << d << endl;
    }
}*M,N;///OBJECT POINTER

int main()
{
    M = &N ;
    M->print_A();
    M->print_B();
    M->print_C();
    M->print_D();
    return 0;
}
