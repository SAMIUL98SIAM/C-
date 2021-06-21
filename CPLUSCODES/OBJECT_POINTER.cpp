#include<iostream>
 using namespace std;

 class student
 {
     float total;
 public:
   //void result();
   void result(float mm, float pp)
   {
     total=(mm+pp)/2;
     cout << "CGPA:" <<total <<  endl;
   }
 }siam,*akib;

 int main()
 {
     siam.result(3.25,3.40);
     akib=&siam;
     akib->result(2.23,3.98);
     return 0;
 }

