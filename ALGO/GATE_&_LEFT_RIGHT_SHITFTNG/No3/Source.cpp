#include <iostream>
using namespace std;

int main()
{
	int a = 23; 
	int b = 67;

	int c = a & b;
	cout << "AND GATE: " << c << endl;

	int d = a | b;
	cout << "OR GATE: " << d << endl;

	int e = a ^ b;
	cout << "X-OR GATE: " << e << endl ;

	int f = a >> 3;
	cout << "RIGHT SHIFTING: " << f << endl;
	int g = a << 3;
	cout << "LEFT SHIFTING: " << g << endl;

}