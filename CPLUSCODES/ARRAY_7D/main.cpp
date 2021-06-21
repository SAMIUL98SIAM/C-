#include <iostream>

using namespace std;
int fn(int x)
    {
        int a ;
        a=x;
        cout << x << endl;
    }


int main()
{
    int a [5][5][3][3][3][3][3];

    for (int i = 0 ; i<5; i ++ )
  {
       for (int j = 0 ; j<5; j ++ )
       {
           for (int l = 0 ; l<5; l ++ )
       {
           for (int k = 0 ; k<5; k ++ )
       {
           for (int h= 0 ; h<5; h ++ )
       {
           for (int g = 0 ; g<5; g ++ )
       {
           for (int f = 0 ; f<5; f ++ )
       {
             a[i][i][l][k][h][g][f] = f ;
            cout <<  a[i][i][l][k][h][g][f];



       }


       }


       }


       }


       }


       }
  }

    return 0;
}
