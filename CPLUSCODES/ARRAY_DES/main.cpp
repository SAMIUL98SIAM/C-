#include<iostream>
using namespace std;
#define SIZE 6
class Myq
{
    int Q [SIZE] ;
    int r = - 1 ;
    int f = - 1 ;
   public:
    void enQ(int item)
    {
        if(r > SIZE - 1)
        {
            cout << "OVERFLOW!!" << endl ;
        }
        else
        {
          Q [r] = item ;
          cout << "INSERT: " << Q [r] << endl ;
          r++ ;

        }
    }
    void deQ()
    {
        if(f == r)
        {
            cout << "UNDERFLOW!!" << endl ;
        }
        else
        {
         cout << "DELETE: " << Q [f] << endl ;
         f++ ;
        }
    }

    void show()
    {
        if(f <= r)
         {
             cout << "UNSEEN" << endl;
         }
           else{ cout << "QUEUE ELMANT'S:" << endl ;
            for(int i=f ; i<r ; i++)
            {
                cout << "SEEN: " << Q [i] << " " ;
            }

        }
    }
}ridi;

int main()
{
    cout << "ENQUE PART" << endl;
    ridi.enQ(12) ;
    ridi.enQ(113) ;
    ridi.enQ(164) ;
    ridi.enQ(1662) ;
    ridi.enQ(199) ;
    ridi.enQ(1211) ;
    cout << endl ;
    cout << "DEQUEUE PART" << endl;
   ridi.deQ() ;
     ridi.deQ() ;
    ridi.deQ() ;
     ridi.deQ() ;
    ridi.deQ() ;
    ridi.deQ() ;
    cout << endl ;
    cout << "SEEN THINGS" << endl ;
    ridi.show();
}
