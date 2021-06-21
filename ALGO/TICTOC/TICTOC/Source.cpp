#include <iostream>

using namespace std;

class Alpha
{
private:
	int x;
public:
	Alpha(int i)
	{
		x = i;
		cout << "APLHA IS INITIALIZE!!" << endl;
	}
	void show_x()
	{
		cout << "X= " << x << endl;
	}
};

class Beta
{
private:
	float y;
public:
	Beta(float j)
	{
		y = j;
		cout << "BETA IS INITIALIZE!!" << endl;
	}
	void show_y()
	{
		cout << "Y= " << y << endl;
	}
};

class Gamma : public Alpha, public Beta
{
private:
	int n, m;
public:
	Gamma(int a, float b, int c, int d) : Alpha(a), Beta(b)   ///FUNCTION INHERITS
	{
		n = c;
		m = d;
		cout << "BETA IS INITIALIZE!!" << endl;
	}
	void show_nm()
	{
		cout << "M= " << m << endl;
		cout << "N= " << n << endl;
	}
};


int main()
{
	Gamma MUMU(5, 7.5, 30, 12);
	MUMU.show_nm();
	MUMU.show_x();
	MUMU.show_y();
	return 0;
}
