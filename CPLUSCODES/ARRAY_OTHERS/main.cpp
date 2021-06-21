#include <iostream>

using namespace std;


int main()
{
    int a[5];
    int b[5];



    // input a arr
    for(int i=0 ; i<5 ; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }


    // display a arr
    for(int i=0 ; i<5 ; i++)
    {

       cout << "a [" << i << " ] = "  << a[i] << endl;
    }


     cout << endl;


    for(int j=0 ;j<5 ; j++)
    {
        b[j]= a[j]+1;
        cout << "b [" << j << " ] = "  << b[j] << endl;
    }
    return 0;
}
