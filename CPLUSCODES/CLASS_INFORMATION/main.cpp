#include <iostream>
#include<windows.h>

using namespace std;

class i1
{
    string name,dob;
    int height,weight;

public:
    i1()
    {
        system ("color 02");
      cout <<  "\t\t\t\t\t\tCV" << endl;

    }

    void info()
    {
        cout << "Enter your name:";
        getline(cin,name);
        cout << "Enter your date of birth:";
        getline(cin,dob);
        cout << "Enter your height:";
        cin >> height;
        cout << "Enter your weight:";
        cin >> weight;

    }
    void display()
    {
        cout << "NAME:" << name << endl;
        cout << "DATE OF BIRTH:" << dob << endl;
        cout << "HEIGHT:" << height << endl;
        cout << "WEIGHT:" << weight << endl;
    }

};

class i2 : public i1
{
   string ssc,hsc,bsc;
    string ab,eb,fb;
public:

    void info1()
    {
        cout << "Enter your ssc gpa:";
        cin >> ssc;
        cout << "Enter your ssc board:";
        cin >> ab;
        cout << "Enter your hsc gpa:";
        cin >> hsc;
        cout << "Enter your hsc board:";
        cin >>eb;
        cout << "Enter your bsc cgpa:";
        cin >> bsc;
        cout << "Enter your bsc varsity:";
        cin >>fb;
        }
    void display1()
    {
        cout << "SSC GPA:" << ssc << endl;
        cout << "SSC BOARD:" << ab << endl;
        cout << "HSC GPA:" << hsc << endl;
        cout << "HSC BOARD:" << eb << endl;
        cout << "BSC CGPA:" << bsc << endl;
        cout << "BSC BOARD:" << fb << endl;
    }

};

class i3 : public i2
{
    string paradd,preadd;
public:
    void info2()
    {
        cout << "Enter your parmanent address:";
        cin >>paradd;
        cout << "Enter your present address:";
        cin >>preadd;

    }
    void display2()
    {
        cout <<"PARMANENT ADDRESS:" << paradd << endl;
        cout <<"PRESENT ADDRESS:" << preadd << endl;
    }

};
class i4 : public i3
{
    string hobby1,hobby2,hobby3;
public:

    void info3()
    {
        cout <<"Enter your first hobby";
        cin >>hobby1;
        cout <<"Enter your second hobby";
        cin >>hobby2;
        cout <<"Enter your third hobby";
        cin >>hobby3;

    }
    void display3()
    {
        cout << "FIRST HOBBY:" << hobby1 << endl;
        cout << "SECOND HOBBY:" << hobby2 << endl;
        cout << "THIRD HOBBY:" << hobby3 << endl;


    }

}siam;
int main()
{
    cout <<  "\t\tMD.SAMIUL HOQUE PROFILE;" << endl;

    siam.info();
    siam.info1();
    siam.info2();
    siam.info3();
    siam.display();
    siam.display1();
    siam.display2();
    siam.display3();

    return 0;
}
