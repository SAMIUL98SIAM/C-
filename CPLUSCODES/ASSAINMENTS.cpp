#include <iostream>

using namespace std;

void print(const int *a, int n)
{
    cout << "ARRAY : [" ;
    for(int i=0 ; i<n ; i++)
    {
      cout << a [i] << " " ;

    }
    cout << "] " << endl ;
}

int main()
{
	int *ARRAY, MAX, N;

	while (true)
	{
		cout << "ENTER THE SIZE OF ARRAY: ";
		cin >> MAX;
		if (MAX<1 || MAX>999)
		{
			cout << "WRONG INPUT!!" << endl;
		}
		else
		{
			break;
		}
	}

	ARRAY = new int[MAX];

	while (true)
	{
		cout << "ENTER THE ELEMANT'S OF ARRAY: ";
		cin >> N;

		if (N<1 || N>MAX)
		{
			cout << "WRONG INPUT!!" << endl;
		}
		else
		{
			break;
		}

	}

	for (int i = 0; i < N; i++)
	{
		cout << "ARRAY: [" << i << " ]=";
		cin >> ARRAY[i];
	}

	int key = 0, pos, item,sum = 0 ;
	double Avg = 0;

	////

	while (true)
	{
		cout << "-------------PRESS 1 FOR INSERTION------------" << endl ;
         cout << "-------------PRESS 2 FOR DELETION------------" << endl ;
         cout << "-------------PRESS 3 FOR SEARCHING------------" << endl ;
         cout << "-------------PRESS 4 FOR TRAVERSAL------------" << endl ;
         cout << "-------------PRESS 5 FOR AVARAGE------------" << endl ;
         cout << "-------------PRESS 6 FOR SUM------------" << endl ;
         cout << "-------------PRESS 7 FOR REVERSE------------" << endl ;
         cout << "-------------PRESS 8 FOR EXITS------------" << endl ;
          cout << "\n\n\n" << endl;
          cout << "PLEASE TAKE THE KEY: " ;

		cin >> key;

		switch (key){
            case 1 :
                if(N == MAX)
                {
                    cout << "WRONG INPUT!!SORRY YOU CAN'T BE INSERTED!!" << endl ;
                    break ;
                }
                cout << "ENTER THE VALUE OF INSERTION: " ;
                cin >> item ;
                while(true)
                {
                    cout  << "FIND THE POSITION TO INSERTED: " ;
                    cin >> pos ;
                    if(pos<0 || pos>N)
                    {
                        cout << "WRONG INPUT!!" << endl ;
                    }
                    else{
                        break ;
                    }
                }
                print(ARRAY,N) ;

                for(int i=N ; i>=pos ; i--)
                {
                    ARRAY [i] = ARRAY [i-1] ;
                }
                ARRAY [pos] = item ;
                N++;

                print(ARRAY,N) ;
                break ;


            case 2 :
                if(N == 0)
                {
                    cout << "WRONG INPUT!!SORRY YOU CAN'T BE DELETED!!" << endl ;
                    break ;
                }
                while(true)
                {
                    cout  << "FIND THE POSITION TO DELETED: " ;
                    cin >> pos ;
                    if(pos<0 || pos>N)
                    {
                        cout << "WRONG INPUT!!" << endl ;
                    }
                    else{
                        break ;
                    }
                }

                print(ARRAY,N) ;
                for(int i=pos ; i<N ; i++)
                {
                    ARRAY [i] = ARRAY [i+1] ;
                }
                N--;

                print(ARRAY,N) ;
                break ;


        case 3 :
                if(N == 0)
                {
                    cout << "WRONG INPUT!!SORRY YOU CAN'T BE SEARCHED!!" << endl ;
                    break ;
                }
                cout << "ENTER THE SEARCHING VALUE: " ;
                cin >> item ;
                print(ARRAY,N) ;
                for(int i=0 ; i<N ; i++)
                {
                    if(ARRAY[i]==item)
                    {
                        cout << item << " FOUND AT INDEX: " << i << endl ;
                        break ;
                    }
                    else if(i==item)
                    {
                        cout << item << " NOT FOUND!!" << endl ;
                    }

                }
                break ;
        case 4:
             print(ARRAY,N) ;
             break ;

        case 5:
            if(N == 0)
                {
                    cout << "WRONG INPUT!!SORRY YOU CAN'T BE AVARAGE!!" << endl ;
                    break ;
                }
            for(int i=0 ; i<N ; i++)
            {
                Avg = Avg + ARRAY [i] ;
            }
            print(ARRAY,N) ;
            cout << "THE ARRAY AVARAGE IS: " << Avg/N << endl ;
            break ;

        case 6:
            if(N == 0)
                {
                    cout << "WRONG INPUT!!SORRY YOU CAN'T BE SUM!!" << endl ;
                    break ;
                }
            for(int i=0 ; i<N ; i++)
            {
                sum = sum + ARRAY [i] ;
            }
            print(ARRAY,N) ;
            cout << "THE ARRAY AVARAGE IS: " << sum << endl ;
            break ;

        case 7 :
            if(N == 0)
                {
                    cout << "WRONG INPUT!!SORRY YOU CAN'T BE REVERSE!!" << endl ;
                    break ;
                }
                print(ARRAY,N) ;
            cout << "ARRAY : [ " ;
            for(int i=N-1 ; i>=0 ; i--)
            {
              cout << ARRAY [i] << " " ;
            }
            cout << " ] " << endl ;

                        break ;

        default :
            return 0 ;

    }



   }

    return 0 ;
}

