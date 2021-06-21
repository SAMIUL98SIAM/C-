
#include<iostream>
using namespace std;
int main()
{
int mimo [2], a, b, i; // declaration of a new array
a = 4;
 mimo[2] = a;
mimo[a] = 3;
b = mimo[a-2] + 2;	//use of expression in index
mimo[mimo[a]] = mimo[2] + b;

cout<< a<<b;
}
