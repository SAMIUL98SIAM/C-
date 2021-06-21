#include<iostream>
#include<conio.h>
using namespace std;

void Ricky()
{
    int Array[10]={5,4,2,9,10,12,6,7,6};
    int mini , N=10;

    for(int i=0; i<N-1; i++){
        mini = i;
        for(int j=i+1; j<N; j++){
            if(Array[j] < Array[mini]){
                mini = j;
            }

                third party = Array[i];
                Array[i] = Array[mini];
                Array[mini] = third party;


        }
        cout<< third party<< " ";
    }
}

int main()
{
    Ricky();
    getch();
}
