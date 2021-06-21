#include <iostream>

using namespace std;

void Swap()
{
    int N , M;
    cout << "ENTER THE 1ST NUMBER: " ;
    cin >> N ;
    cout << "ENTER THE 2ND NUMBER: " ;
    cin >> M ;

    cout << "BEFORE 1ST SWAP NUMBER: " << N << endl ;
    cout << "BEFORE 2ND SWAP NUMBER: " << M << endl ;

    int temp ;
    temp = M ;
    M = N ;
    N = temp ;

    cout << "AFTER 1ST SWAP NUMBER: " << N << endl ;
    cout << "AFTER 2ND SWAP NUMBER: " << M << endl ;



}

void Series()
{
    int  n  ;
    cout << "INPUT NUMBER: " ;
    cin >> n ;
    int i , sum = 0 ;
    for(i=0;i<=n;i=i+2)
    {
        sum = sum + i;
    }
    cout << "1+2+4+....+" << sum << endl ;
}

int main()
{
    Series();
    Swap();
}
