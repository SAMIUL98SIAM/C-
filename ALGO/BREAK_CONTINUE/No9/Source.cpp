#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	int key = 0;
	cout << "ENTER THE KEY: ";
	cin >> key;
	switch (key)
	{
	   case 1:
		   cout << "ENTER THE NUMBER: ";
		   cin >> num1;
		   for (int i = 1; i <= 100; i++)
		   {
			   if (i == 14)
			   {
				   break;
			   }
			   cout << i << endl;
		   }
		   main();
		   break;

	   case 2: 
		   cout << "ENTER THE NUMBER: ";
		   cin >> num2;
		   for (int i = 1; i <= num2; i++)
		   {
			   if (i == 16)
			   {
				   continue;
			   }
			   cout << i << endl;
		   }
		   main();
		   break;


	}


}