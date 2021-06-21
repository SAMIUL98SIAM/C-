#include<iostream>
using namespace std;
class B1
{
public:
    void virtual sam()
    {
        cout << " CLASS B1 " << endl;
    }
    void virtual ram()
    {
        cout << " CLASS B1 SEC " << endl;
    }
};

class B2 : public B1
{
public:
    void virtual sam()
    {
        cout << " CLASS B2 " << endl;
    }
    void virtual ram()
    {
        cout << " CLASS B2 SEC " << endl;
    }

}*p;
class B3 : public B2
{
public:
    void  sam()
    {
        cout << " CLASS B3 " << endl;
    }
    void  ram()
    {
        cout << " CLASS B3 SEC " << endl;
    }

}s;
int main()
{
    p=&s;
    p->sam();
    p->ram();

    return 0;

}
