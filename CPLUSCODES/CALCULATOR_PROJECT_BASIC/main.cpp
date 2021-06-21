#t << "ENTER TWO NUMBERS:" << endl;
   double a,b;
   cout << "ENTER THE NUMBER:" << endl;
   cin >> a ;
   cout << "ENTER THE PERCENTAGE NUMBER:" << endl;
   cin >> b ;
   cout << "PERCENTAGE:" << a*b/100 << endl;
}

void ROT()
{
    system("cls");
    system("color 03");
   cout << "WELCOME TO ROOT" << endl;
   cout << "ENTER NUMBER:" << endl;
   double a;
   cin >> a ;
   cout << "ADDITION:" << a*a << endl ;
}

void Display()
{
    cout << "------------------CASIO CALCULATOR--------------------" << endl;
    cout << "\n\n\n" << endl;
    cout << "------------------PRESS 1 FOR ADDITION----------------" << endl;
    cout << "------------------PRESS 2 FOR SUBTRACTION-------------" << endl;
    cout << "------------------PRESS 3 FOR MULTIPLICATION----------" << endl;
    cout << "------------------PRESS 4 FOR DIVISION----------------" << endl;
    cout << "------------------PRESS 5 FOR PERCENTAGE--------------" << endl;
    cout << "------------------PRESS 6 FOR ROOT--------------------" << endl;
    cout << "------------------PRESS 7 FOR OFF---------------------" << endl;

    cout << "\n" << endl;
}

void Result()
{
    int r;
    cin >> r ;

    switch (r)
        {
            case 1 :
                {

                    ADD();
                    cout << "\nPress enter for u cal" << endl;
                    getch();
                    system("cls");
                    Display();
                    Result();
                    break;

                }
            case 2 :
                {
                    SUB();
                    cout << "\nPress enter for u cal" << endl;
                    getch();
                    system("cls");
                    Display();
                    Result();

                    break;

                }
            case 3 :
                {
                    MUL();
                    cout << "\nPress enter for u cal" << endl;
                    getch();
                    system("cls");
                    Display();
                    Result();

                    break;
                }
            case 4 :
                {
                    DIV();
                    cout << "\nPress enter for u cal" << endl;
                    getch();
                    system("cls");
                    Display();
                    Result();

                    break;
                }
            case 5 :
                {
                    PER();
                    cout << "\nPress enter for u cal" << endl;
                    getch();
                    system("cls");
                    Display();
                    Result();

                    break;
                }
            case 6 :
                {
                    ROT();
                    cout << "\nPress enter for u cal" << endl;
                    getch();
                    system("cls");
                    Display();
                    Result();

                    break;
                }



            case 7 :
                {

                    system("cls");
                    system("color 01");
                    cout << "\nCASIO" << endl;
                    break;
                }

            default :
                {
                    cout << "MATH ERROR\nRIGHT PRESS" << endl;
                    system("cls");
                    Result();





                }




        }

}

int main()
{
    system("color 0F");
    Display();
    Result();

    return 0;
}


