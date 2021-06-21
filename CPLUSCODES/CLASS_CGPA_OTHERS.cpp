#include<iostream>

using namespace std;

class B3
{
    double ph,pl,m,e,total,totall;

public:

  void  result ()
  {
    cout << "ENTER PHYSICS GPA:" ;
    cin  >>ph;
    cout << "ENTER PROGRAMMING GPA:";
    cin  >>pl;
    cout << "ENTER MATH GPA:" ;
    cin  >>m;
    cout << "ENTER ENGLISH GPA:" ;
    cin  >>e;

    total=(ph+pl+m+e)/4;

    cout << "TOTAL CGPA:" << total << endl;
}

  void  resultt(double phh,double pll,double mm,double ee){


    total=(phh+pll+mm+ee)/4;

    cout << "TOTAL CGPA:" << totall << endl;
}


}siam,nisa;




int main()
{
    cout << "MD SAMIUL HOQUE(18-38844-3)" << endl;
    siam.result();
    cout << "ZINNATUL NISA(18-38842)" << endl;
    nisa. resultt(3.00,3.00,3.00,3.00);

    return 0;
}

