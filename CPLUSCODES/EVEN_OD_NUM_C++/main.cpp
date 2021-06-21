#include <iostream>

using namespace std;

int main(void)
{
   int num1  , num2 ;

   cout << "Enter the first number:" ;
   cin >> num1 ;

   cout << "Enter the second number:" ;
   cin >> num2 ;

   if(num2 == 0)
   {
       cout << "Can't divide by zero." << endl;
   }
   else
   {
       cout << "Answer is:" << num1 / num2 << endl;
   }

   return 0 ;
}
