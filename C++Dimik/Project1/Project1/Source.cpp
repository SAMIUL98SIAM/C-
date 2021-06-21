#include<iostream>
using namespace std;

int main()
{
    int student ;
    student = 10;
    int crdt[10];
    char id[10];
    double cgpa[10];
    cout << "Enter the id: " << endl;
    for (int i = 0; i < student; i++)
    {
        cin >> id[i];
    }
    cout << "Enter the credit: " << endl;
    for (int i = 0; i < student; i++)
    {
        cin >> crdt[i];
    }
    cout << "Enter the cgpa: " << endl;
    for (int i = 0; i < student; i++)
    {
        cin >> cgpa[i];
    }
    cout << "ID" << "\t" << "credit" << "\t" << "CGPA "<< endl;
        for (int i = 0; i < student; i++)
        {
            if (crdt[i] > 50 && cgpa[i] > 3.75)
            {
                cout << id[i] << "\t" << crdt[i] << "\t" << cgpa[i] << endl;
            }
        }

}