#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void display()
{
    cout << "------------CASIO-------------" << endl;
    cout << "  1.ADDITON        2.SUBTRACTION         " << endl ;
    cout << "           3.MULTIPLICATION      4.DIVISION  " << endl;
    cout << "5.OFF              " << endl;
}

void add()
{
    system("cls") ;
    system ("color 0A") ;
    cout << "WELCOME TO ADDITION" << endl;
    cout << "HOW CAN ELEMANT'S YOU CAN IT: " << endl;
    double a [100] ;
    for(int i=0 ; i<100 ; i++)
    {
        a [i] = 0 ;
    }

    int b ;
    cin >> b ;
    cout << "ENTER TAKE THE NUMBER'S STEP BY STEP: " << endl;
    for(int i=1 ; i<=b ; i++)
    {
        cin >> a [i] ;
    }
    for(int i=1 ; i<=b ; i++)
    {
        a[i] = a[i-1] + a [i] ;
    }
    cout << "ADDITION: " << a[b] << endl;
 }
  void sub()
  {
      system("cls") ;
    system ("color 0B") ;
      cout << "WELCOME TO SUBTRACTION" << endl;
      cout << "ENTER TWO NUMBER'S: " << endl;
      double a , b ;
      cin >> a >> b ;
      cout << "SUBTRACTION: " << a-b << endl;

  }

  void mul()
  {
      system("cls") ;
    system ("color 0E") ;
      cout << "WELCOME TO MULTIPLICATION" << endl;
      cout << "ENTER TWO NUMBER'S: " << endl;
      double a , b ;
      cin >> a >> b ;
      cout << "MULTIPLICATION: " << a*b << endl;

  }

void div()
  {
      system("cls") ;
    system ("color 0C") ;
      cout << "WELCOME TO DIVISION" << endl;
      cout << "ENTER TWO NUMBER'S: " << endl;
      double a , b ;
      cin >> a >> b ;
      cout << "DIVISION: " << a/b << endl;

  }


void OPAR()
{
    cout << "PLEASE TAKE THE KEY: " << endl;
    int k ;
    cin >> k ;

    switch (k)
    {
            case 1 :
            {    add();
                cout << "PLEASE TAKE TO NEXT STEP: " << endl;
                getch();
                system("cls");
                display();
                OPAR();
                break ;
            }



            case 2 :
            {
                sub();
                cout << "PLEASE TAKE TO NEXT STEP: " << endl;
                getch();
                system("cls");
                display();
                OPAR();
                break ;

            }


            case 3 :
            {
                mul();
                cout << "PLEASE TAKE TO NEXT STEP: " << endl;
                getch();
                system("cls");
                display();
                OPAR();
                break ;
            }



            case 4 :
            {
                add();
                cout << "PLEASE TAKE TO NEXT STEP: " << endl;
                getch();
                system("cls");
                display();
                OPAR();
                break ;
            }

            case 5:
            {
                system("cls");
                system("color 08");
                cout << "GOOD BYE" << endl;
                break ;
            }

            default :
            {
                cout << "MATH ERROR.\nPRESS RIGHT KEY." << endl;
                OPAR();

            }

    }
}


int main ()
{
    system("color 0F") ;
    display();
    OPAR();

    return 0 ;
}


