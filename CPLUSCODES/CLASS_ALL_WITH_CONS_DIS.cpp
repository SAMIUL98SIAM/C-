#include <iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

class B3
{
    string c,b;
    int i;
    double cg;
public:
    B3();
    ~B3();
   void info();
   void display();


}siam,moti;
B3 ::B3()
{
   // cout << "\t\t\t\t\tWELCOME TO AIUB PORTAL" << endl;
   system ("color 02");
}
void B3 ::info()
{
    cout << "Enter your name:";
    cin >>c;
    cout << "Enter your id:";
    cin >>i;
    cout << "Enter your blood group:";
    cin >>b;
    cout << "Enter your cgpa:";
    cin >>cg;

}
void B3 ::display()
{

    cout <<"NAME:" << c <<endl;
    getch();
     cout <<"ID NO:" << i<<endl;
    getch();
     cout <<"BLOOD GROUP:" << b<<endl;
    getch();
     cout <<"CGPA:" << cg<<endl;
    getch();
}
B3 ::~B3()
{
    system("cls");
   cout << "\t\t\t\t\tTHANK YOU FOR VISITING OUR WEBSITE";
  //system("cls");
}
int main()
{
     cout << "\t\t\t\t\tWELCOME TO AIUB PORTAL" << endl;
    cout << "\t\t\t\t\tMD.SAMIUL HOQUE PROFILE" << endl;
    siam.info();
    siam.display();

    cout << "\t\t\t\t\tMOTIUR RAHMAN PROFILE" << endl;
    moti.info();
    moti.display();
    //cout << "\t\t\t\t\tTHANK YOU FOR VISITING OUR WEBSITE" <<endl;

    return 0;
}

