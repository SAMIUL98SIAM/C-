#include <iostream>

using namespace std;

int main()
{
    int key = 0 ;
   cout << "TAKE THE OPTION: " ;
   cin >> key ;

   switch(key)
   {
      case 1 :
            {

                                cout << "\t\t\tSEARCGING 1ST RULE" << endl;
                                       int *A , MAX , N ;
                    cout << "ENTER THE SIZE OF ARRAY: " ;
                    cin >> MAX ;
              A = new int [MAX] ;
             cout << "TAKING INPUT'S OF ARRAY: " ;
             cin >> N ;
          for(int i=0;i<N;i++)
          {
             cout << "ARRAY INDEX: [ " << i << " ] = " ;
               cin >> A [i] ;
          }
                     int item ;
                   cout << "ENTER THE VALUE OF SEARCHING: " ;
                  cin >> item ;
         for(int i=0;i<N ;i++)
          {
          if(A[i]==item)
             {
                 cout << item << " :IS FOUND AT INDEX [ " << i << " ] " << endl;
                  break ;
        }
        else if(i==N-1)
        {
               cout << item << " :ISN'T FOUND!!" << endl ;
        }
       }



       main() ;
       break ; }

      case 2 :
        {

                 cout << "\t\t\tSEARCGING 2ND RULE" << endl;
                                       int *A , MAX , N ;
                    cout << "ENTER THE SIZE OF ARRAY: " ;
                    cin >> MAX ;
              A = new int [MAX] ;
             cout << "TAKING INPUT'S OF ARRAY: " ;
             cin >> N ;
          for(int i=0;i<N;i++)
          {
             cout << "ARRAY INDEX: [ " << i << " ] = " ;
               cin >> A [i] ;
          }
                     int item , count = 0 ;
                   cout << "ENTER THE VALUE OF SEARCHING: " ;
                  cin >> item ;
         for(int i=0;i<N ;i++)
          {
          if(A[i]==item)
             {
                 count++ ;
                  break ;
        }
        else         {
               continue ;
        }
     }

     if(count == 1) cout << item << " :IS FOUND!!"  << endl;
     else cout << item << " :ISN'T FOUND!!" << endl;
      main() ;
     break ;


    }



   }

}



