A#include <iostream>

using namespace std ;

int main()
{
    int a [3] = {12 , 7788 , 900} ;
    int *ptr ;
    ptr = &a [0] ;

    cout << "INDEX NO 1 ADDRESS: " << ptr << endl ;
    cout << "INDEX NO 1 VALUE: " << *ptr  << endl ;
    cout << "INDEX NO 2 ADDRESS: " << ptr + 1 << endl ;
    cout << "INDEX NO 2 VALUE: " << *(ptr + 1)  << endl ;
    cout << "INDEX NO 3 ADDRESS: " << ptr + 2 << endl ;
    cout << "INDEX NO 3 VALUE: " << *(ptr + 2) << endl ;

    return 0 ;
}
