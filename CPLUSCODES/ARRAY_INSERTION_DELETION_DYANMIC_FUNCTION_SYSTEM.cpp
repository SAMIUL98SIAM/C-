#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int *arr;

void Show(const int* , int);
void insertion(int ele,int sizee);
void deletion(int ele,int pos);
void sarch();
void ava(int ele);
void rev(int ele);
void su(int ele);

int main()
{
    int  sizee , ele ;

    while(true)
    {

        cout << "ENTER THE ARRAY SIZE: " ;
        cin >> sizee ;
        if(sizee<1 || sizee>999)
        {
            cout << "ERROR!!!" << endl ;
        }
        else{
            break;
        }
    }

    arr = new int [sizee] ;

    while(true)
    {
        cout << "ENTER THE ARRAY SIZE OF ARRAY ELEMANT'S: " << endl ;
        cin >> ele ;
        if(ele<1 || ele>sizee)
        {
            cout << "ERROR!!!" << endl ;
        }
        else{
            break;
        }
     }

     for (int i=0 ; i<ele ; i++)
     {
         cout << "ARRAY INDEX : [ " << i << " ]  = " ;
         cin >> arr[i] ;
     }

     int key =0 , pos=0 , item  , sum =0 ;
     double avge = 0 ;

     while(true)
     {
         cout << "-------------PRESS 1 FOR INSERTION------------" << endl ;
         cout << "-------------PRESS 2 FOR DELETION------------" << endl ;
         cout << "-------------PRESS 3 FOR SEARCHING------------" << endl ;
         cout << "-------------PRESS 4 FOR TRAVERSAL------------" << endl ;
         cout << "-------------PRESS 5 FOR AVARAGE------------" << endl ;
         cout << "-------------PRESS 6 FOR REVERSE------------" << endl ;
         cout << "-------------PRESS 7 FOR SUM------------" << endl ;
         cout << "-------------PRESS 8 FOR EXITS------------" << endl ;
          cout << "\n\n\n" << endl;
          cout << "PLEASE TAKE THE KEY: " ;
          cin >> key ;
            if(key==1)
                insertion(ele , sizee);
            else if(key==2)
                deletion(ele,pos);
            else if(key==3)
                {
                    Show(arr,ele);
                    sarch();
                }
            else if(key==4)
                Show(arr,ele);
            else if(key==5)
                ava(ele);
            else if(key==6)
                rev(ele);
            else if(key==7)
                su(ele);
            else{
                    cout << "YOU'RE MOST WELCOME" << endl ;
                return 0 ;
            }

     }


    return 0 ;
}


void Show(const int *ar , int siz)
{
    cout << "\nARRAY : " << "[ " ;
    for(int i=0 ; i<siz ; i++)
    {
        cout  << ar [i] << " " ;
    }
    cout << " ]" << endl;
}

void insertion(int ele,int sizee)
{
    cout << "\t\t\t\tINSERTION PART" << endl ;
    int item,pos=0;
    if(ele == sizee)
                   {
                       cout << "WRONG WAY!!YOU CAN'T BE INSERTED!!" << endl ;

                   }
                   cout << "ENTER THE VALUE OF INSERTION: " ;
                   cin >> item ;
                   while(true)
                   {
                       cout << "FIND THE POSTION TO BE INSERTED: " ;
                       cin >> pos ;
                       if(pos<0 || pos>ele)
                       {
                           cout << "WRONG WAY!!" << endl;
                       }
                       else {
                        break ;
                       }
                   }
                   Show(arr,ele);
                   for(int i=ele ; i>=pos ; i--)
                   {
                       arr [i] = arr [i-1] ;
                   }
                   arr [pos] = item ;
                   ele++ ;
                   Show(arr,ele);

}

void deletion(int ele,int pos)
{

    cout << "\t\t\t\tDELETION PART" << endl ;
    if(ele == 0)
                {
                    cout << "WRONG WAY!!YOU CAN'T BE DELETED!!!" << endl ;

                }
                while(true)
                {
                    cout << "FIND THE POSITION TO BE DELETED: " ;
                    cin >> pos ;
                    if(pos<0 || pos>=ele)
                    {
                        cout << "WRONG WAY!!" << endl ;
                    }
                    else{
                        break ;
                    }
                }
                Show(arr,ele);
                for(int i=pos ; i<ele ; i++)
                {
                    arr [i] = arr [i+1] ;
                }
                ele--;
                Show(arr,ele);

}
void sarch()
{
    cout << "\t\t\t\tSEARCHING PART" << endl ;

    int ele,pos=0,item;
     if(ele == 0)
                {
                    cout << "WRONG WAY!!YOU CAN'T BE SEARCHED!!" << endl ;
                }
                cout << "ENTER THE ELEMANT'S OF SEARCHING: " ;
                cin >> item ;

                for(int i=0 ; i<ele ; i++)
                {
                    if(arr[i]==item)
                    {
                        cout << item << " FOUND AT INDEX NO: " << i << endl ;
                        break;

                    }
                    else if(i==ele)
                    {
                        cout << item << " NOT FOUND AT INDEX" << endl ;

                    }
                }

}

void ava(int ele)
{
    cout << "\t\t\t\tAVARAGE PART" << endl ;

    int sum=0,c=0;
    if(ele == 0)
                {
                    cout << "WRONG WAY!!YOU CAN'T BE SUM!!" << endl ;
                }

                for(int i=0 ; i<ele ; i++)
                {
                    sum = sum + arr[i] ;
                    c++;
                }
                Show(arr,ele);
                cout << "ARRAY OF AVERAGE: " << sum/c << endl ;

}
void rev(int ele)
{
    cout << "\t\t\t\tREVERSE PART" << endl ;
    if(ele == 0)
                {
                    cout << "WRONG WAY!!YOU CAN'T BE AVARAGE!!" << endl ;
                }
                Show(arr,ele);
                cout << "\nARRAY : " << "[ " ;
                for(int i=ele-1 ; i>=0 ; i--)
                {
                    cout  << arr [i] << " " ;
                }
                cout << " ]" << endl;

}

void su(int ele)
{
    cout << "\t\t\t\tSUMMETION PART" << endl ;
    int sum=0;
    if(ele == 0)
                {
                    cout << "WRONG WAY!!YOU CAN'T BE SUM!!" << endl ;
                }

                for(int i=0 ; i<ele ; i++)
                {
                    sum = sum + arr[i] ;
                }
                Show(arr,ele);
                cout << "SUM OF AVERAGE: " << sum << endl ;

}
