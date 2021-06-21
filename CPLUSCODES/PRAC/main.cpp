/*#include<bits/stdc++.h>
using namespace std;

class Alpha
{
private:
    int x ;
public:
    Alpha(int i)
    {
        x = i ;
        cout << "ALPHA IS INITTIALZ!!" << endl;
    }
    void show_x()
    {
        cout << "X= " << x << endl;
    }

};

class Beta
{
private:
    int y ;
public:
    Beta(float j)
    {
        y = j ;
        cout << "BETA IS INITTIALZ!!" << endl;
    }
    void show_y()
    {
        cout << "Y= " << y << endl;
    }

};


class Gamma : public Alpha,public Beta
{
private:
    int m,n ;
public:
    Gamma(int a,float b,int c,int d) : Alpha(a) , Beta(b)
    {
        m = c ;
        n = d ;
        cout << "GAMMA IS INITTIALZ!!" << endl;
    }
    void show_z()
    {
        cout << "M= " << m << endl;
        cout << "N= " << n << endl;
    }

}M(12,4.5,67,8);

int main()
{
    //Gamma  ;
    M.show_x();
    M.show_y() ;
    M.show_z();
}*/



#include <iostream>
using namespace std;

class base {
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }

    void show()
    {
        cout << "show base class" << endl;
    }
};

class derived : public base {
public:
    void print()
    {
        cout << "print derived class" << endl;
    }

    void show()
    {
        cout << "show derived class" << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    // virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();
}
