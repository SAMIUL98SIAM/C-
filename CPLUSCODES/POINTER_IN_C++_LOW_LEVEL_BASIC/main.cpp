#include <iostream>

using namespace std;

void swapa(int *a , int *b)
{
    int t ;
    t = *a ;
    *a = *b ;
    *b = t ;
}

int main()
{
    int x = 131 ;
    int y = 566 ;

    swapa(&x,&y) ;
    cout << x << " " << y << endl ;



    return 0;
}
