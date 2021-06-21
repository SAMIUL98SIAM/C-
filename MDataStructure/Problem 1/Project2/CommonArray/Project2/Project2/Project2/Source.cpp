#include <iostream>

using namespace std;

void searching(char x)
{
    char a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == x)
        {
            cout << "FOUND.\nINDEX NO: " << i << endl;
        }


    }

}

int main()
{
    int  Array_1[10] = {8,4,6,1,6,9,6,1,9,8};
    int s_n;
    int x;
    cout << "Input a number to search : ";
    int flag = 0;
    cin >> x;
    for (int i = 0; i < 10; i++)
    {
        if (Array_1[i] == x)
        {
            flag++;
        }
    }
    cout << "The number occurs " << flag << " times in the array " << endl;

    return 0;
}
