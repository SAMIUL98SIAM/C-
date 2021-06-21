#include <iostream>

using namespace std;

void insertion()
{
    int arr[100] , siz , item , pos ;
    cout << "ENTER THE SIZE OF ARRAY: " ;
    cin >> siz ;
    for(int i=0 ; i<siz ; i++)
    {
        cout << "\nARRAY ELEMANT'S: [ " << i << " ] = " ;
        cin >> arr [i] ;
    }
    cout << "ENTER THE VALUE OF INSERTION: " ;
    cin >> item ;
    cout << "FIND THE POSITION TO BE INSERTED: " ;
    cin >> pos ;
    for(int i=siz ; i>=pos ; i--)
    {
        arr [i] = arr [i-1] ;
    }
    arr [pos] = item ;
    siz++ ;
    cout << "ARRAY IS: " << endl ;
    for(int i=0 ; i<siz ; i++)
    {
        cout << arr [i] << " " ;
    }
    cout << endl ;
}


int main()
{
    insertion() ;
    return 0 ;
}
