#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	int key = 0;
	cout << "TAKE THE KEY: ";
	cin >> key;

	switch (key)
	{
	  case 1 :
		  cout << "ENTER TWO NUMBER'S: ";
		  cin >> num1 >> num2;
		  (num1 > num2) ? cout << "LARGE NUMBER: " << num1 << endl : cout << "LARGE NUMBER: " << num2 << endl ;
		  break;
      
	  case 2 :
		  cout << "ENTER THE NUMBER: ";
		  cin >> num1;
		  (num1 % 2 == 0) ? cout << "EVEN NUMBER" << num1 << endl : cout << "ODD NUMBER" << num1 << endl;
		  break;

	  case 3 :
		        cout << "BYE!!" << endl;
		        break;





			   
	}
}
