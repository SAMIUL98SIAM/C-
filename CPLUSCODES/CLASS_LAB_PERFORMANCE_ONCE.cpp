#include<iostream>
using namespace std;
class B3
{
    int a,b,d,m;
public:
   evaluation();
}siam,tina;

int B3 :: evaluation()
{
    cout << "Enter two number:" << endl;
    cin >> a >> b ;
    m=a>b ? b:a;
    for(d=2;d<m;d++)
        if(((a%2)==0) && ((b%2)==0)) break;
        if(d==m){
            cout << "No common demunitators" <<endl;
        }
        cout << "The loweast coomon demunitators" << endl;



    return 0;

}
int main()
{
    cout << "The first number:" << endl;
    siam.evaluation();
    cout << "The second number:" << endl;
    tina.evaluation();
    return 0;
}
