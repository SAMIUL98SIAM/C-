#include <iostream>

using namespace std;

void searching (char x)
{
    char a [5] ={'a','d','t','o','q'} ;

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
    searching('a') ;
    return 0 ;
}
