#include<iostream>

using namespace std;

class B3
{
   float pl,m,total;
public:
    B3();
    ~B3();
}siam;

 B3 :: B3 ()

{
    //cout << "MD. SAMIUL HOQUE(18-38844-3)" << endl;

    cout << "ENTER TO PROGRAMMING GPA: " << endl;
    cin >> pl;

    cout << "ENTER TO MATH GPA: " << endl;
    cin >> m;

    total =(pl+m)/2;

    cout << "CGPA:" << total << endl;

}
B3 :: ~B3()
{
    cout << "" << endl;}

int main()
{

    cout << "MD. SAMIUL HOQUE(18-38844-3)" << endl;

    return 0;
}
