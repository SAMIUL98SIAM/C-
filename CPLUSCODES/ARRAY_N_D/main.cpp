#include <iostream>

using namespace std;

int main()
{
   int a[5]={10,11,23,24,12};
    int b[5]={1,6,7,8,5};
    int c[5];
    for(int k=0;k<5 ;k++)
    {
        c[k]=a[k] + b[k];
        cout << c[k] << endl;
    }
    return 0;
}
