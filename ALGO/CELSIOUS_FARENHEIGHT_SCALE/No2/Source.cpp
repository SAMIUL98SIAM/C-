#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	double fareheight, celcious, kelvin;
	int key = 0;
	cout << "TAKE THE OPTOPN: ";
	cin >> key;
	if (key == 1)
	{
		cout << "ENTER THE CELCIOUS: ";
		cin >> celcious;
		fareheight = 1.8 * celcious + 32;
		cout << "FARENHEIGHT: " << fareheight << endl;
		main();
	}
	else if (key == 2)
	{
		cout << "ENTER THE FARENHEIGHT: ";
		cin >> fareheight;
		celcious =(fareheight-32)/1.8;
		cout << "CELCIOUS: " << celcious << endl;
		main();
	}
	else if (key == 3)
	{
		cout << "ENTER THE CELCIOUS: ";
		cin >> celcious;
		kelvin = celcious+273;
		cout << "KELVIN: " << kelvin<< endl;
		main();
	}

	else
	{
		cout << "FUCK OFF!!" << endl;
	}

}