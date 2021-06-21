#include <iostream>

using namespace std;

class A
{
public:
    virtual void mmm()
    {
        cout << "FIND THE THE J" << endl;
    }
};

class B : virtual public A
{
public:
virtual void mmm()
    {
        cout << "J" << endl;
    }
};
class C : virtual public A
{
public:
    void mmm()
    {
        cout << "FIND " << endl;
    }

};
class D : virtual public B
{
public:

} ;
class E : virtual public B
{
public:

};
class F : virtual public C
{

public:
    void result(double ph,double m)
    {
        cout << "CGPA:" << (ph+m)/2 << endl;


    }

};
class G : virtual public  C
{
public:

};
class H : public D, public E
{
public:

};
class I : public F, public G
{
public:

};

class J : public H , public I
{
public:
    void sam()
    {
        cout << "YES WE FIND THE WAY OF J!!!!" << endl;
    }
}siam;

int main()
{
    siam.mmm();




    return 0;
}
