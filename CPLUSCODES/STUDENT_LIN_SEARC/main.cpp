#include <iostream>

using namespace std;



void StudentAt ()
{
    string  A[5];
    cout << " Enter Students Names:" << endl;

    for(int i = 0; i<5 ; i++)
    {
        getline(cin,A[i]);
    }

    cout << "\nStudent Name :" << endl;
    string StN;
    getline(cin,StN);
    for (int i = 0 ; i < 5 ; i++)
    {
        if (A[i] == StN)
        {
            cout << "Present.\nRoll No.: " << i+1 << endl;
            break;
        }
        if (i == 4)
        {
            cout << " Student Is APs" << endl;
        }

    }

}

int main()
{
    StudentAt();

    return 0;
}
