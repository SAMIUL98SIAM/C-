#include<iostream>
using namespace std;

void sam(int x[3],int num)
{
    cout << "Total number of given quiz:" << num << endl;
    for(int i=0;i<3;i++){
        int n=i+1;
        cout << "QUIZES\t" << n << "\t:" << x[i] << endl;
    }
}
void sam(int x,int y)
{
    cout << "AVERAGE MARK IS:" << (x+y)/3 << endl;
}

void sam(string s)
{
    cout << "NAME:" << s << endl;
}
void sam(int a)
{
    cout << "ROLL NO:" << a << endl;
}

int main()
{
    int marks[3]={20,23,11};
    sam(marks,3);
    sam(12,34);
}
