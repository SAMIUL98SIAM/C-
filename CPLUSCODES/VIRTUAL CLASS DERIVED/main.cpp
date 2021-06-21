#include <iostream>

using namespace std;

class base
{
public:
    virtual void v_func()
    {
        cout << "THIS IS BASE V_FUNCTION" << endl;
    }
};

class derived_1
{
public:
    void v_func1()
    {
        cout << "THIS DEIRVED 1 V_FUNCTION" << endl;
    }
};

class derived_2 : public base , public derived_1
{
public:
    void v_func2()
    {
        cout << "THIS DEIRVED 2 V_FUNCTION" << endl;
    }
}*p,b,d1,d2;

int main()
{
     p = &b ;
     p->v_func() ;
     p = &d1 ;
     p->v_func1() ;
     p = &d2 ;
     p->v_func2();
    return 0;
}
