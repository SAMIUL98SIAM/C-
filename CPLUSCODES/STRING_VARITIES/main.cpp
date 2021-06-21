#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    char str1[10]= "awesome";

    char str2[10];
    char str3[10];

    strcpy(str2, str1);

    strcpy(str3, "well");



    cout << str2 << endl;
    cout << str3 << endl;

     char str11[] = "S", str22[] = "Q";

    //concatenates str1 and str2 and resultant string is stored in str1.
    strcat(str11,str22);

    cout << str11 << endl;
    cout << str22 << endl;

    int a = strlen(str1);
    cout << a << endl;

    cout << strcmp(str11,str22) << endl;






    return 0;
}
