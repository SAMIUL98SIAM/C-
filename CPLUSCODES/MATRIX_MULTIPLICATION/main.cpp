#include <iostream>

using namespace std;

int main()
{
    int Mat1[100][100],Mat2[100][100],col1,col2,row1,row2;
    int Res[100][100];
    cout << "ENTER THE SIZE OF 1 NO MATRICES ROW: " ;
    cin >> row1 ;
    cout << "ENTER THE SIZE OF 1 NO MATRICES COLUMN: " ;
    cin >> col1 ;
    //Mat1[row1][col1];
    cout << "MATRIX 1:" ;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin >> Mat1[i][j];
        }
    }
    //int Res[row1][col1];
    cout << "ENTER THE SIZE OF 2 NO MATRICES ROW: " ;
    cin >> row2 ;
    cout << "ENTER THE SIZE OF 2 NO MATRICES COLUMN: " ;
    cin >> col2 ;
    //Mat1[row2][col2];
    cout << "MATRIX 2:" ;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin >> Mat2[i][j];
        }
    }
    //Res[row2][col2];
    cout << "NOW MATRIX MULTPLICATION: \n";
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
            {
               Res[i][j]=0;
               for(int k=0;k<row2;k++)
               {
                   Res[i][j]+=Mat1[i][k] * Mat2[k][j] ;
               }
            }
    }

    cout << "THE RESULTANT MATRIX IS: \n" ;
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout  << Res[i][j] << " " ;
        }
        cout << endl ;
    }
}
