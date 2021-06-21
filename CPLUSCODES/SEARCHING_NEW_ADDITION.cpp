#include <iostream>

using namespace std;

void func()
{

    string a [5] ;
    for(int i=0 ; i<5 ; i++)
    {
        cout << " STUDENT'S NAME: " <<  endl ;
        getline(cin,a[i]);
    }
    cout << "\nSEARCHING STUDENT'S NAME: " ;
    string key ;
    getline(cin,key) ;
    for(int i=0 ; i<5 ; i++)
    {
        if(a[i]==key)
        {
            cout << "PRESENT.\nROLL NO: " << i+1 << endl ;
            break ;
        }
        if(i==4)
        {
            cout << "ABSENT." << endl ;
        }
    }

}

int main()
{
    func() ;
    return 0 ;
}
