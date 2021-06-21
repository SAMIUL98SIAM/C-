#include <iostream>

using namespace std;

int main()
{


   cout << "How Much element u want to work : " << endl;
   int e;
   cin >> e;
   double arr [100];
      for (int i = 0; i < 100; i++)
   {
      arr [i] = 0 ;

   }


   for (int i = 1; i =< e; i++)
   {
      cin >>  arr [i] ;

   }

      for (int i = 1; i =< e; i++)
   {
      arr [i] = arr [i] + arr[i-1] ;

   }


    cout << arr[e] << endl;
    return 0;
}
