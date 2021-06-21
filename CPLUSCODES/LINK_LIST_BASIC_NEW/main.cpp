#include <iostream>

using namespace std;

struct node
{
    int item , null ;
    node *next ;
    node null ;
}*n1,*n2,*n3,*head;

int main()
{
    head = n1 ;



    n1 = new node ;
    n1->item =12  ;
    n1->next= n3  ;


    n3 = new node ;
    n3->item =69  ;
    n3->next= n1  ;

    n2 = new node ;
    n2->item =90  ;
    n2->next= null;


    return 0 ;
}
