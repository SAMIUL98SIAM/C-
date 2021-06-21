/*#include<iostream>
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
}*s,p;
/// *s AND p jeii jaygay thkbe oiitaii print krbe...
class B {
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

class C : public A, public B
{
public:
    void virtual input ()
    {
        cout << "CLASS C BASE" <<  endl;
    }
    void virtual output()
    {
        cout << "CLASS C BASE" << endl;
    }
};
int main()
{
    s = &p ;
    s->input();
    s->output();

      return 0;

}*/
#include<iostream>
using namespace std ;

class Area
{
    double dim1 , dim2 ;
public:
    void set_area(double d1,double d2)
    {
        dim1 = d1 ;
        dim2 = d2 ;
    }
    void get_dim(double &d1 , double &d2)
    {
        d1  = dim1 ;
        d2 = dim2 ;
    }
    virtual double get_area()
    {
        cout <<  "YOU MUST OVERRIDE THE FUNCTN!!" << endl;
        return 0;
    }
};
class Rectangular : public Area
{
public:
    double get_area()
    {
        double d1 , d2 ;
        get_dim(d1,d2) ;
        return (d1*d2);
    }
};
class triangle : public Area
{
public:
    double get_area()
    {
        double d1,d2 ;
        get_dim(d1,d2);
        return (0.5 * d1 * d2) ;
    }
};

int main()
{
    Area *p ;
    Rectangular r ;
    triangle t ;
    r.set_area(3.5,5.1) ;
    t.set_area(6.4,2.4);
    p = &r ;
    cout << "RECTABGULAR: " << p->get_area() << endl;
    p = &t ;
    cout << "TRIAGULAR: " << p->get_area() << endl;
}
