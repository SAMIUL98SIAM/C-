#include <iostream>

using namespace std ;

class B3
{
    double data , datal , eng , dm , intgrtn ;
public:
    double input() ;
    double output() ;
}siam;

double B3 :: input()
{
    cout << "ENTER YOUR DATA RESULT: " ;
    cin >> data ;
    cout << "ENTER YOUR DATA LAB RESULT: " ;
    cin >> datal ;
    cout << "ENTER YOUR ENGLISH 2 RESULT: " ;
    cin >> eng ;
    cout << "ENTER YOUR DISCRETE RESULT: " ;
    cin >> dm ;
    cout << "ENTER YOUR MATH 2 RESULT: " ;
    cin >> intgrtn ;
}
double B3 :: output()
{
    cout << "CGPA: " << (data*3+datal+eng*3+dm*3+intgrtn*3)/13 ;
}

int main()
{
    siam.input() ;
    siam.output() ;
    return 0 ;
}
