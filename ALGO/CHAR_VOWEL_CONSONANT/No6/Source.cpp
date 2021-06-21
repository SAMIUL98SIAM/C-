#include <iostream>

using namespace std;

int main()
{
	char c;

	cout << "ENTER THE CHARACTER: ";
	cin >> c;

	c = toupper(c);

	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
	{
		cout << "VOWEL: " << c << endl;
	}
	else  cout << "CONSONANT" << endl;
}