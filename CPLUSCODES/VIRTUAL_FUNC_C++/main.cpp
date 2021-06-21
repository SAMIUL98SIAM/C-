
#include<iostream>
using namespace std;

class A
{
public:
    void virtual input()
    {
        cout << "CLASS A BASE" << endl;
    }
    void virtual output()
    {
        cout << "CLASS A BASE" << endl;
    }
};
/// *s AND p jeii jaygay thkbe oiitaii print krbe...
class B : public A {
public:
    void virtual input ()
    {
        cout << "CLASS B BASE" <<  endl;
    }
    void virtual output()
    {
        cout << "CLASS B BASE" << endl;
    }
};

class C : public B
{
public:
    void  input ()
    {
        cout << "CLASS C BASE" <<  endl;
    }
    void  output()
    {
        cout << "CLASS C BASE" << endl;
    }
};
int main()
{
    B *s,p;

    s = &p ;
    s->input();
    s->output();

      return 0;

}
