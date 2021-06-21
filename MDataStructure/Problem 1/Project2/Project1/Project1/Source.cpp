#include <iostream>

using namespace std;

bool isPrime(int n)
{
    
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
void factorial_calculated(int n)
{
    int fact = 1;
    if (isPrime(n))
    {
        cout << "Error! not a prime number" << endl;
    }
    else {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << fact << endl;
    }
}

int main()
{
   factorial_calculated(4);
}