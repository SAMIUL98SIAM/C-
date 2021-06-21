#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
 class Bank
 {
     string n,t;
    int no;
     double ib,cb,tb;
 public:
     Bank();
     ~Bank();
    void info();
    void display();
 }siam,akib;

 Bank ::Bank()
 {
     //cout << "\t\t\t\t\t\t\tWELCOME TO SONALI BANK" << endl;
     system ("color 02");
 }

 void Bank ::info()
 {

     cout << "Enter your account name:" ;
     cin >> n;
     cout << "Enter your account no:" ;
     cin >> no;
     cout << "Enter your account type:" ;
     cin >> t;
     cout << "Enter your initial balance:" ;
     cin >> ib;
     cout << "Enter your current balance:" ;
     cin >> cb;

 }

 void Bank ::display()
 {
     cout << "ACCOUNT NAME:" << n <<endl;
     cout << "ACCOUNT NO:" << no <<endl;
     cout << "ACCOUNT TYPE:" << t <<endl;
     cout << "INITIAL BALANCE:" << ib <<endl;
     cout << "CURRENT BALANCE:" << cb <<endl;

     cout << "TOTAL BALANCE:" << ib+cb <<endl;

 }
 Bank ::~Bank()
 {

     //system ("cls");
 }

 int main()
 {
     cout << "\t\t\t\t\t\t\tWELCOME TO SONALI BANK" << endl;
     cout << "\t\t\t\tMD.SAMIUL HOQUE ACCOUNT " << endl;
     siam.info();
     siam.display();

     cout << "\t\t\t\tMD.AMINUL HOQUE ACCOUNT " << endl;
     akib.info();
     akib.display();

     return 0;



     return 0;
 }


