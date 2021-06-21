#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int b[5][5];
    for(int i=0 ; i<5 ; i++)
    {
        a[i] = i +3 ;
        cout << "1D:" << a[i] << endl;
    }
    for(int i=0 ; i<5 ; i++)
    {
        for(int j=0 ;j<5 ; j++)
        {
            b[i][j] = j + 6 ;
            cout << "\n\n" << endl;
            cout << "2D:" << b[i][j];
        }
    }


    cout << "Hello world!" << endl;
    return 0;
}

