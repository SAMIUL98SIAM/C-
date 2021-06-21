#include <iostream>

using namespace std;

void print(const int *a , int n)
{
    cout << "\nARRAY : [ " ;
    for(int i=0 ; i<n ; i++)
    {
        cout << a [i] << " " ;
    }
    cout << " ] " << endl ;
}

int main()
{
   int *ARRAY , MAX ;
   while(true)
   {
       cout << "ENTER THE ARRAY SIZE: " ;
       cin >> MAX ;
       if(MAX<1 || MAX>10)
       {
           cout << "WRONG INPUT!!" << endl ;
       }
       else{
        break ;
       }

   }
   ARRAY = new int [MAX] ;


   cout<< "Insert elements in increasing order:";
   cout<<"\nArray[0] = ";
   cin >> ARRAY[0];
   for(int i=1; i < MAX; i++){
       cout<<"Array["<<i<<"] = ";
       cin >> ARRAY[i];
       if(ARRAY[i]<ARRAY[i-1]){
           i--;
           cout<<"Not in increasing order!!\n";
           continue;
       }
   }
   print(ARRAY,MAX) ;

   int key = 0 , firstin , secondin , lastin , item , pos ;

   while(true)

   {
       cout << "1.SEARCHING 2.EXITS" << endl ;
        cin >> key ;
       switch(key)
        {
           case 1:
               cout << "ENTER THE SEARCHING VALUE: " ;
               cin >> item ;
               int i ;
               pos = - 1 ;
               firstin = 0 ;
               lastin = MAX - 1 ;
               secondin = (firstin+lastin)/2 ;
                for(;firstin<=lastin;)
                {
                   secondin = (firstin+lastin)/2 ;
                    if(ARRAY[secondin]==item)
                    {
                        pos = secondin ;
                        break ;
                    }
                    if(ARRAY[secondin]<item)
                    {
                        firstin = secondin + 1 ;
                    }
                    else
                    {
                        lastin = secondin - 1 ;
                    }
                }
                if(pos>=0)cout << item << " FOUND AT INDEX: [ " << i << " ] " << endl ;

                else cout << item << " NOT FOUND!!" << endl ;


                break;

           case 2:
               return 0 ;
        }
   }
}
