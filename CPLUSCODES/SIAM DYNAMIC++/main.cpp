#include <iostream>

using namespace std;
int *ARRAY ;

void print(const int *a , int s)
{
    cout << "\nARRAY : [ " ;
    for(int i=0 ; i<s ; i++)
    {
        cout << a [i] << " " ;
    }
    cout << " ] " << endl ;
}

void insetion(int N,int MAX)
{
    int item , pos = 0 ;
    if(N == MAX)
    {
        cout << "WRONG ERROR CAN'T BE INSERTED!" << endl ;

    }
    cout << "ENTER THE VALUE OF INSERTION: " ;
    cin >> item ;

    while(true)
    {
        cout << "FIND THE POSITION TO BE INSERTED: " ;
        cin >> pos ;
        if(pos<0 || pos>N)
        {
            cout << "WRONG INPUTS!!" << endl ;
        }
        else
        {
            break ;
        }
    }
    print(ARRAY,N) ;
    for(int i=N ; i>=pos ; i--)
    {
        ARRAY [i] = ARRAY [i-1] ;
    }
    ARRAY [pos] = item ;
    N++ ;

    print(ARRAY,N) ;

}

void deletion(int N)
{
    int  pos = 0 ;
    if(N == 0)
    {
        cout << "WRONG ERROR CAN'T BE DELETETED!" << endl ;

    }

    while(true)
    {
        cout << "FIND THE POSITION TO BE DELETED: " ;
        cin >> pos ;
        if(pos<0 || pos>=N)
        {
            cout << "WRONG INPUTS!!" << endl ;
        }
        else
        {
            break ;
        }
    }
    print(ARRAY,N) ;
    for(int i=pos ; i<=N ; i++)
    {
        ARRAY [i] = ARRAY [i+1] ;
    }

    N-- ;

    print(ARRAY,N) ;
}

void  searchh()
{
    int item , N ;

    if(N == 0)
    {
        cout << "WRONG ERROR CAN'T BE SEARCHED!" << endl ;

    }

    cout << "ENTERB THE SEARCHING VALUE: " ;
    cin >> item ;
    for(int i=0 ; i<N ; i++)
    {
        if(ARRAY[i]==item)
        {
            cout << item << " FOUND AT INDEX : [ " << i << " ] " << endl ;
            break ;
        }
        if(i==N)
        {
            cout << item << " NOT FOUND!" << endl ;
        }
    }
}

void revers(int N)
{

    if(N == 0)
    {
        cout << "WRONG ERROR CAN'T BE REVERSED!" << endl ;

    }

    cout << "\nREVERSE ARRAY INDEX : [ " ;
    for(int i=N-1 ; i>=0 ; i--)
    {
        cout << ARRAY [i] << " " ;
    }
    cout << " ] " << endl ;
}

void  summestion(int N)
{
   int sum = 0 ;
    if(N == 0)
    {
        cout << "WRONG ERROR CAN'T BE SUM!" << endl ;

    }
    for(int i=0 ; i<N ; i++)
    {
       sum = sum + ARRAY [i] ;
    }
    print(ARRAY,N) ;
    cout << "SUM IS: " << sum << endl ;

}
 void avarage(int N)
 {
    double  avge = 0 , c = 0  ;
    if(N == 0)
    {
        cout << "WRONG ERROR CAN'T BE AVERAGE!" << endl ;

    }
    for(int i=0 ; i<N ; i++)
    {
       avge = avge + ARRAY [i] ;
       c++ ;
    }
    print(ARRAY,N) ;
    cout << "AVERAGE IS: " << avge/c << endl ;

 }

int main()
{
    int MAX , N ;
    while(true)
    {
        cout << "ENTER THE ARRAY SIZE: " ;
        cin >> MAX ;
        if(MAX<1 || MAX>999)
        {
            cout << "WRONG!!" << endl ;
        }
        else
        {
            break ;
        }
    }
    ARRAY = new int [MAX] ;

    while(true)
    {
        cout << "ENTER THE ARRAY ELEMANT: " ;
        cin >> N ;
        if(N<1 || N>MAX)
        {
            cout << "WRONG!!" << endl ;
        }
        else
        {
            break ;
        }
    }

    for(int i=0 ; i<N ; i++)
    {
        cout << "ARRAY INDEX : [ " << i << " ] " << " = " ;
        cin >> ARRAY [i] ;
    }
    print(ARRAY,N) ;
    int key = 0 ;


     while(true)
     {
         cout << "1.INSERTION 2.DELETION 3.SEARCHING 4.REVERSE 5.TRAVERSE 6.SUM 7.AVARAGRE 8.EXITS" << endl ;
         cout << "PLEASE TAKE YOUR OPTION: " ;
         cin >> key ;

         switch (key)
            {
                case 1 :{insetion(N,MAX) ;
                       break; }
                case 2 :

                       {deletion(N) ;
                       break ; }

                case 3 :
                       {

                        searchh();
                        break ; }

                case 4 :
                        {

                         revers(N) ;
                        break ;}

                case 5 :
                      {

                       print(ARRAY,N) ;
                       break ;}

                case 6 :
                   {

                    summestion(N) ;

                      break ; }

                 case 7 :

                      {

                       avarage(N) ;
                       break ; }


                 case 8 :
                         return 0 ;


         }

     }


    return 0;
}

