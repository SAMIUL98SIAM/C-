#include <iostream>

using namespace std;

class students
{
    double ph,phl,pl,pll,m,e,co,total,totall;
public:

        //system ("color 02");}




    void result()
    {
        cout << "Enter your physics gp:";
        cin >> ph;
        cout << "Enter your physics lab gp:";
        cin >> phl;
        cout << "Enter your programming gp:";
        cin >> pl;
        cout << "Enter your programming lab gp:";
        cin >> pll;
        cout << "Enter your math gp:";
        cin >> m;
        cout << "Enter your english gp:";
        cin >> e;
        cout << "Enter your computer gp:";
        cin >> co;
        total=(ph*3+phl*1+pl*3+pll*1+m*3+e*3+co*1)/15;
        cout << "CGPA:" << total <<endl;


    }
    void resultt(double phh,double phll,double pla,double plaa,double mm,double ee,double coo)
    {
        cout << "PHYSCC:" << phh << endl;
        cout << "PHYSICC LABB:" << phll << endl;
        cout << "PROGRAMINGG:" << pla << endl;
        cout << "PROGRAMING LAB:" << plaa << endl;
        cout << "MATHH:" << mm << endl;
        cout << "ENGLISHH:" << ee << endl;
        cout << "COMPUTERR:" << coo << endl;
        totall=(phh*3+phll*1+pla*3+plaa*1+mm*3+ee*3+coo*1)/15;
        cout << "CGPAA:" << totall << endl ;

    }
}siam;

int main()
{
    cout << "\t\t\t\t\tAIUB PORTAL" << endl;
    cout <<"\t\tMD.SAMIUL HOQUE RESULT CARD" << endl;
    siam.result();
   // cout <<"\t\tNABIL SIDDIQ RESULT CARD" << endl;
   // nabil.result();
    cout <<"\t\tMD.SAMIUL HOQUE VISUABLE RESULT CARDD" << endl;

    siam.resultt(2.50,3.50,2.50,2.50,3.00,2.50,4.00);
    //system("cls");
    cout << "\t\t\t\t\tTHANK YOU FOR VISITED OUR WEBSITE" << endl;

    return 0;


}
