
//5 No assignment

#include <iostream>

using namespace std;



int main()
{
    int N , sum =0  ;
    int checkPrime = 0 ;
    cout << "Enter the number: ";
    cin >> N ;
    cout << "Prime number: " ;
    for(int i=2;i<=N;i++)
    {
        checkPrime = 0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                checkPrime = 1 ;
                break ;
            }
        }
        if(checkPrime==0 && N!=1)
        {
           cout << i << " ";
           sum+=i ;
        }


    }
    cout << endl;
    cout << "The sum of prime numbers " << sum << endl;
}

