#include <iostream>

using namespace std;

void mail()
{
    string a [5] ;
    for(int i=0; i<5 ; i++)
    {
        cout << i+1 << "." <<  "STUDENTS NAME:" ;
        getline(cin,a[i]);
    }
    cout << "\n\nENTER THE SEARCHING STUDENT'S: " << endl;
    string sr ;
    getline(cin,sr);
    for(int i=0 ; i<5 ; i++)
    {
        if(a[i]==sr)
        {
            cout << "\STUDENT'S IS PRESENT.\nROLL NO" << ":" << i+(18388443) << endl ;
            break ;
        }
        if(i==4)
        {
            cout << "\nSTUDENT'S IS ABSENT." << endl ;
        }
    }


}

int main()
{
    mail();
    return 0;
}
