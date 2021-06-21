#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std ;

class i1
{
    string n , fn , mn , ag , bg , rl ;
public:
    void info()
    {
        cout << "ENTER YOUR NAME: " ;
        getline(cin,n);
        cout << "ENTER YOUR FATHER'S NAME: " ;
        getline(cin,fn);
        cout << "ENTER YOUR MOTHER'S NAME: " ;
        getline(cin,mn);
        cout << "ENTER YOUR AGE: " ;
        getline(cin,ag);
        cout << "ENTER YOUR BLOOD: " ;
        getline(cin,bg);
        cout << "ENTER YOUR RELIGION: " ;
        getline(cin,rl);
    }
    void dispaly()
    {
        cout << "NAME: " << n << endl ;
        cout << "FATHER'S NAME: " << fn << endl ;
        cout << "MOTHER'S NAME: " << mn << endl ;
        cout << "AGE: " << n << endl ;
        cout << "BLOOD GROUP: " << n << endl ;
        cout << "RELIGION: " << n << endl ;
    }
};

class i2 : class i1
{
    string sn , cn , vn , sr , cr , vc ;
public:
    void info1()
    {
        cout << "ENTER YOUR SCHOOL NAME: " ;
        getline(cin,sn) ;
        cout << "ENTER YOUR COLLEGE NAME: " ;
        getline(cin,cn) ;
        cout << "ENTER YOUR VARSITY NAME: " ;
        getline(cin,vn) ;
        cout << "ENTER YOUR SCHOOL RESULT: " ;
        getline(cin,sr) ;
        cout << "ENTER YOUR COLLEGE RESULT: " ;
        getline(cin,cr) ;
        cout << "ENTER YOUR VARSITY RESULT: " ;
        getline(cin,vc) ;
    }
    void display1()
    {
        cout << "SCHOOL: " << sn << endl ;
        cout << "COLLEGE: " << cn << endl ;
        cout << "UNIVERSITY: " << vn << endl ;
        cout << "SSC: " << sr << endl ;
        cout << "HSC: " << cr << endl ;
        cout << "CGPA: " << vc << endl ;
    }

};

class i3 : class i2
{
    string par , pre ;
    void info2()
    {
        cout << "ENTER YOUR PARMANANT ADDRESS: " ;
        getline(cin,par) ;
        cout << "ENTER YOUR PRESENT ADDRESS: " ;
        getline(cin,pre) ;
    }
    void display2()
    {
        cout << "PARMANANT ADDRESS: " << par << endl ;
        cout << "PRESENT ADDRESS: " << pre << endl ;
    }
}siam;

int main()
{
    system("color 0F")  ;
    cout << "\t\t\t\t\tCV" << endl ;

    getch() ;
    system("cls") ;
    system("color 01") ;
    cout << "\t\t\tMYSELF" << endl ;
    siam.info() ;
    siam.display() ;

    getch() ;
    system("cls") ;
    system("color 0E") ;
    cout << "\t\t\tEDUCATION" << endl ;
    siam.info1() ;
    siam.display1() ;

    getch() ;
    system("cls") ;
    system("color 01") ;
    cout << "\t\t\tADDRESS" << endl ;
    siam.info2() ;
    siam.display2() ;

    getch() ;
    system("cls") ;
    system("color 02") ;
    cout << "\t\t\t\tTHANK YOU" << endl ;

    return 0 ;
}
