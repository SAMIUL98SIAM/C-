#include <bits/stdc++.h>

using namespace std;

class point
{
    double x,y;
public:
    point()
    {
        x=0;y=0;
    }
    point(double m,double n)
    {
        x=m;
        y=n;
    }
    double getx()
    {
        return x;
    }
    double gety()
    {
        return y;
    }
    double r_value()
    {
        double x,r;
        r=pow(x,2)+pow(y,2);
        r=sqrt(r);
        return r;
    }
    double theta_value()
    {
        double theta;
        theta=atan(y/x);
        return theta;
    }
    bool onx()
    {
        if(y==0)
            return true;
        else
            false;
    }
    bool ony()
    {
        if(x==0)
            return true;
        else
            return false;
    }
    double distance(point p)
    {
        int q,w;
        q=pow((x-p.x),2)+pow(y-p.y,2);
        w=sqrt(q);
        return w;
    }
    bool samepoint(point p)
    {
        if(x==p.x && y==p.y)
            return true;
        else
            return false;
    }
    void shiftby(int a,int b)
    {
        x=x+a;
        y=y+b;
    }
};
int main()
{
    point p,q;
    point r(2,3);
    cout<<"p.x:"<<p.getx()<<"p.y:"<<p.gety()<<endl;
    cout<<"r.x:"<<r.getx()<<"r.y:"<<r.gety()<<endl;
    cout<<r.r_value()<<endl;
    cout<<r.theta_value()<<endl;
    cout<<p.onx()<<" "<<p.ony()<<endl;
    cout<<r.onx()<<" "<<r.ony()<<endl;
    cout<<p.distance(r)<<endl;
    cout<<p.samepoint(q)<<endl;
    cout<<r.distance(p)<<endl;
    p.shiftby(2,3);
    cout<<"p.x:"<<p.getx()<<"p.y:"<<p.gety()<<endl;
    return 0;
}
