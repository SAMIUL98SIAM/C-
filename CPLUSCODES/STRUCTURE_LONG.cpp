#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std ;

struct B3
{
    string n , dob , id , age , slary ;
    string sn , cn , un ;
    string sgp , hgp , ucg ;
    string pre , par ;
}*t,s;

int main()
{
    t = &s ;
    cout << "Enter your name: " ;
    getline(cin,t->n) ;
    cout << "Enter your birth of date: " ;
    getline(cin,t->dob) ;
    cout << "Enter your id: " ;
    getline(cin,t->id) ;
    cout << "Enter your age: " ;
    getline(cin,t->age) ;
    cout << "Enter your salary: " ;
    getline(cin,t->slary) ;
    cout << "Enter your school name: " ;
    getline(cin,t->sn) ;
    cout << "Enter your college name: " ;
    getline(cin,t->cn) ;
    cout << "Enter your varsity name: " ;
    getline(cin,t->un) ;
    cout << "Enter your ssc gpa: " ;
    getline(cin,t->sgp) ;
    cout << "Enter your hsc gpa: " ;
    getline(cin,t->hgp) ;
    cout << "Enter your varsity cgpa: " ;
    getline(cin,t->ucg) ;
    cout << "Enter your present address: " ;
    getline(cin,t->pre) ;
    cout << "Enter your parmanent address: " ;
    getline(cin,t->par) ;


    system("cls") ;
    system("color 07") ;
    cout << "\t\t\t\t\t\tCV" << endl ;
    cout << "\n\n\n\n" << endl ;

    cout << "NAME: " << t->n << endl ;
        cout << "DATE OF BIRTH: " << t->dob << endl ;

    cout << "ID NO: " << t->id << endl ;

    cout << "AGE: " << t->age << endl ;
        cout << "MONTHLY SALARY: " << t->slary << endl ;

    cout << "SCHOOL: " << t->sn << endl ;

    cout << "COLLEGE: " << t->cn << endl ;
        cout << "UNIVERSITY: " << t->un << endl ;

    cout << "SSC GPA: " << t->sgp << endl ;

    cout << "HSC GPA: " << t->hgp << endl ;

    cout << "BSc.CGPA: " << t->n << endl ;

    cout << "PRESENT ADDRESS: " << t->pre << endl ;

    cout << "PARMANENT ADDRESS: " << t->par << endl ;
    getch() ;

    system("cls") ;
    system("color 0F");
    cout << "\t\t\t\t\tTHANK YOU MR.SAMIUL" << endl ;

    return 100 ;
}
