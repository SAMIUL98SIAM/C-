#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string a = "3";
    int n;
    istringstream ( a ) >> n;

    cout << n <<endl;
    cout << 12 + n << endl;

    return 0;
}
