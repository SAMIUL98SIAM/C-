#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

class B1
{
    double t;
public:
    B1()
    {
        system("color 0F");
        cout << "\t\t\t\tCV" << endl;

    }

    void result(double pl,double pll,double ph,double phl,double m,double e,double c)
    {
        cin >> t ;
        t=(pl*3+pll+ph*3+phl+m*3+e*3+c)/15;
        cout << "CGPA:" << t << endl;

    }
};
class B2 : virtual public B1
{
public:
    void info(string n,string fn,string mn,string bg,string rl,string nl)
    {
        cout << "NAME:" << n << endl;
        cout << "FATHER'S NAME:" << fn << endl;
        cout << "MOTHER'S NAME:" << mn << endl;
        cout << "BLOOD GROUP:" << bg << endl;
        cout << "RELIGION:" << rl << endl;
        cout << "NATIONALITY:" << nl << endl;
    }
};

class B3 : virtual public B1
{
public:
    void academ(string sc,string cl,string un)
    {
        cout << "SCHOOL NAME:" << sc << endl;
        cout << "COLLEGE NAME" << cl << endl;
        cout << "VARSITY NAME" << un << endl;
    }
};
class B4 : public B2 ,public B3
{
public:
    void addrss(string pre,string per)
    {
        cout << "PRESENT ADDRESS:" << pre << endl;
        cout << "PARMANENT ADDRESS:" << per << endl;
    }
}ob1;

int main()
{
    ob1.info("MD.SAMIUL HOQUE","MD.MIRAJUL HOQUE","ROWSHAN ARA","A+","ISLAM","BANGLADESHI");
    ob1.academ("MILESTONE SCHOOL & COLLEGE","UTTARA MODEL COlLEGE","AMERICAN INTERNATIONAL UNIVERSITY-BANGLADESH(AIUB)");
    ob1.addrss("SONALI BANK OFFICER'S QUARTER'S, 8 NO SECTOR, UTTARA, DHAKA","HOLLAN, DAKSHINKHAN, UTTARA, DHAKA");
    ob1.result(2.75,2.50,3.00,3.50,3.75,2.50,4.00);

    cout << "\t\t\t\tTHANK YOU MR.SAMIUL" << endl;

    return 0;
}

