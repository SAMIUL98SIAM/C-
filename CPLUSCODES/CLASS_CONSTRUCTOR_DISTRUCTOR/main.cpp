#include <iostream>

using namespace std;

class B3
{
    string n,b;
    float c;
    int r;
public:
    B3();
    ~B3();
   void info();
   void display();
}siam;

void B3 ::info()
{
    cout << "Enter your name:";
    cin >> n;

    cout << "Enter your blood group:";
    cin >> b;

    cout << "Enter your id no:";
    cin >> r;

    cout  << "Enter your cgpa:" ;
    cin >> c;

}

void B3 ::display()
{
    cout <<"NAME:" <<n <<endl;
    getch();
    cout << "BLOOD GROUP:" <<b <<endl;
    getch();
    cout <<"ID:" <<r <<endl;
    getch();
    cout <<"CGPA:" <<c <<endl <<endl<<endl ;
    getch();

}
B3 ::B3()
{
    cout <<"\t\t\t\t\tWELCOME TO AIUB PORTAL" <<endl <<endl;
    system("color 02");


}
B3 ::~B3()
{
    cout <<"\t\t\t\t\tTHANK YOU FOR VISITING OUR AIUB WEBSITE";
     system("cls");
}


int main()
{
    //cout <<"\t\t\t\t\tWELCOME TO AIUB PORTAL" <<endl <<endl;

    siam.info();
     cout <<"\t\t\t\t\tMD.SAMIUL HOQUE PROFILE" <<endl;
    siam.display();


   /* moti.info();
    cout <<"\t\t\t\t\tMOTIUR RAHMAN PROFILE" <<endl;
    moti.display();*/

    //cout <<"\t\t\t\t\tTHANK YOU FOR VISITING OUR AIUB WEBSITE";

    return 0;
}


