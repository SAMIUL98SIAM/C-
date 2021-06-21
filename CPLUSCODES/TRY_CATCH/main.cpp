#include <iostream>
using namespace std;

int main()
{
    try{
         throw 11;
    }
    catch(int a)
    {
        cout << "BULLSHIT:" << a << endl;
    }
    return 0;
}
