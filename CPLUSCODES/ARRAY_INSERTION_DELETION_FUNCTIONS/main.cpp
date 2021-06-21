#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;
int *ARRAY ;
void travrse(const int *a , int s)
{
    cout << "\nARRAY : [ " ;
    for(int i=0 ; i<s ; i++)
    {
        cout << a [i] << " " ;
    }
    cout << " ] " << endl ;
}

void insertion(int N , int MAX)
{
              int item , pos ;
                      if(N==MAX)
                         {
                             cout << "WORNG INPUT!!YOU CAN'T BE INSERT!!" << endl ;

                         }
                         cout << "ENTER THE VALUE OF INSERTION: " ;
                         cin >> item ;
                         while(true)
                         {
                             cout << "FIND THE POSITION YOU'LL BE INSERT: " ;
                             cin >> pos ;
                             if(pos<0 || pos>N)
                             {
                                 cout << "WRONG!!" << endl ;
                             }
                             else
                             {
                                 break ;
                             }
                         }
                         travrse(ARRAY,N) ;

                         for(int i=N ; i>=pos ; i--)
                         {
                             ARRAY [i] = ARRAY [i-1] ;
                         }
                         ARRAY [pos] = item ;

                         N++ ;
                         travrse(ARRAY,N) ;


}

void deleteion(int N)
{
    int pos ;
                       if(N==0)
                          {
                             cout << "WORNG INPUT!!YOU CAN'T BE DELETE!!" << endl ;

                          }


                          while(true)
                          {
                             cout << "FIND THE POSITION YOU'LL BE INSERT: " ;
                             cin >> pos ;
                             if(pos<0 || pos>=N)
                             {
                                 cout << "WRONG!!" << endl ;
                             }
                             else
                             {
                                 break ;
                             }
                          }
                          travrse(ARRAY,N) ;

                          for(int i=pos ; i<N ; i++)
                          {
                              ARRAY [i] = ARRAY [i+1] ;
                          }

                          N-- ;

                          travrse(ARRAY,N) ;

}

void searchin(int N)
{
    int item ;
                        if(N==0)
                          {
                             cout << "WORNG INPUT!!YOU CAN'T BE SEARCH!!" << endl ;

                          }
                          cout << "ENTER THE SEARCHING VALUE: " ;
                          cin >> item ;
                          for(int i=0 ; i<N ; i++)
                          {
                              if(ARRAY[i]==item)
                              {
                                  cout << item << " FOUND AT INDEX [ " << i << " ] " << endl ;
                                  break ;
                              }
                              else if(i==N)
                              {
                                  cout << item << " NOT FOUND!!" << endl ;
                              }
                          }
                         travrse(ARRAY,N) ;
}

void summ(int N)
{
    int sum = 0 ;
                        if(N==0)
                          {
                             cout << "WORNG INPUT!!YOU CAN'T BE SUM!!" << endl ;

                          }

                          for(int i=0 ; i<N ; i++)
                          {
                              sum = sum + ARRAY [i] ;
                          }
                          travrse(ARRAY,N) ;
                          cout << "SUM OF ARRAY IS: " << sum << endl ;
}

void avarage(int N)
{
    double avarage = 0 ;
    int c = 0 ;
                       if(N==0)
                          {
                             cout << "WORNG INPUT!!YOU CAN'T BE AVERAGE!!" << endl ;

                          }

                          for(int i=0 ; i<N ; i++)
                          {
                              avarage = avarage + ARRAY [i] ;
                              c++ ;
                          }
                          travrse(ARRAY,N) ;
                          cout << "AVAERAGE OF ARRAY IS: " << avarage/c << endl ;
}

int main()
{
    int  MAX , N ;

    while(true)
    {
        cout << "ENTER THE ARRAY SIZE: " ;
        cin >> MAX ;
        if(MAX<0 || MAX>999)
        {
            cout << "WRONG INPUTS!!" << endl ;
        }
        else
        {
            break ;
        }
    }
    ARRAY = new int [MAX] ;

    while(true)
    {
        cout << "ENTER THE SIZE OF ARRAY ELEMANT'S: " ;
        cin >> N ;
        if(N<0 || N>MAX)
        {
            cout << "WRONG INPUTS!!" << endl ;
        }
        else
        {
            break ;
        }
    }

    cout << endl ;

    for(int i=0 ; i<N ; i++)
    {
        cout << "ARRAY INDEX : [ " << i << " ] = " ;
        cin >> ARRAY [i] ;
    }

    travrse(ARRAY,N) ;

    int key = 0 , sum = 0  , c = 0 ;
    int pos , item ;
    double avarage = 0 ;

    while(true)
    {
        cout << "--------1.INSERTION-------" << endl ;
        cout << "--------2.DELETION-------" << endl ;
        cout << "--------3.SEARCHING-------" << endl ;
        cout << "--------4.TRAVERSE-------" << endl ;
        cout << "--------5.SUM-------" << endl ;
        cout << "--------6.AVARAGE-------" << endl ;
        cout << "--------8.OFF------" << endl ;
        cout << "--------9.ERROR-----" << endl ;

        cout << "PLEASE TAKE THE KEY: " ;
        cin >> key ;

        switch (key)

             {
                case 1 :
                         insertion(N,MAX) ;
                         break ;
                 case 2 :
                         deleteion(N) ;
                         break ;

                   case 3 :
                        searchin(N);
                         break;

                   case 4 :
                            travrse(ARRAY,N) ;
                            break ;

                   case 5 :
                          summ (N);
                          break ;

                   case 6 :

                          break ;

                   case 7 :
                           return 0 ;
                           break ;

                   case 8 :
                            system("cls") ;
                            main();
                            break ;
             }
    }


    return 0;
}
