#include <iostream>
#include <conio.h>

using namespace std;

   struct bookstore
  {
     string bn , an , pd , en ;
     int tp ;



  void input1()
  {

      cout << "Enter the book name:" << endl ;
      getline(cin,bn) ;
      cout << "Enter the author name:" << endl ;
      getline(cin,an) ;
      cout << "Enter the total book page:" << endl ;
      cin >> tp;
      cout << "Enter the published date:" << endl ;
      getline(cin,pd) ;
      cout << "Enter the edition number:" << endl ;
      getline(cin,en) ;

      cout << endl;
      getch() ;
      cout << "BOOK NAME: " << bn  <<  endl ;
      cout << "AUTHOR NAME: " << an  <<  endl ;
      cout << "TOATL PAGE: " << tp  <<  endl ;
      cout << "PUBLISHED DATE: " << pd  <<  endl ;
      cout << "EDITION NUMBER: " << en  <<  endl ;

  }


  }s,p;

 /* void input1()
  {

      cout << "Enter the book name:" << endl ;
      getline(cin,s.bn) ;
      cout << "Enter the author name:" << endl ;
      getline(cin,s.an) ;
      cout << "Enter the total book page:" << endl ;
      cin >> s.tp;
      cout << "Enter the published date:" << endl ;
      getline(cin,s.pd) ;
      cout << "Enter the edition number:" << endl ;
      getline(cin,s.en) ;

      cout << endl;
      getch() ;
      cout << "BOOK NAME: " << s.bn  <<  endl ;
      cout << "AUTHOR NAME: " << s.an  <<  endl ;
      cout << "TOATL PAGE: " << s.tp  <<  endl ;
      cout << "PUBLISHED DATE: " << s.pd  <<  endl ;
      cout << "EDITION NUMBER: " << s.en  <<  endl ;

  }
 */



int main()
{
    s.input1();
    p.input1();




   return 0;

}
