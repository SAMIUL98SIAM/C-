#include <iostream>

using namespace std;

void searching (char x)
{
    char a [5]  ;
    for(int i=0 ; i<5 ; i++)
    {
        cin >> a [i] ;
    }
    for(int i=0 ; i<5 ; i++)
    {
        if(a[i]==x)
        {
            cout << "FOUND.\nINDEX NO: " << i << endl ;
        }


    }

}

int main()
{
    searching('A') ;
    return 0;
}
