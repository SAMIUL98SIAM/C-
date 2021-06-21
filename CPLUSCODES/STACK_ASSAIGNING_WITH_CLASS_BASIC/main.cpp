#include <iostream>
using namespace std;
#define S 10

class Stack {
    public:
	char stck[S];
	int tos;


	void tos_op()
	{
		tos = 0;
	}

	void push(char CH)
	{
		if (tos == S)
		{
			cout << "Stack is Full";
			return ;
		}
		stck[S] = CH;
		tos++;
	}

	char pop()
	{
		if (tos == 0)
		{
			cout << "Stack is empty";
			return 0;
		}
		tos--;
		return stck[tos];
	}


}o1, o2;




int main()
{

	o1.tos_op();


	o1.push('A');



	o1.push('B');



	o1.push('C');


	for (int i = 0; i < 3; i++){ cout << o1.pop() << endl; }




	return 0;
}
