#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std ;

struct node
{
    int data ;
    node *next ;
   // node *prev ;
};

node* head = NULL  ;
//node* tail = NULL ;

node* insertt(int item)
{
    node *s = (node*)malloc(sizeof(node)) ;

    s->data = item ;
    s->next =  head ;
    //s->prev = NULL ;

    head = s ;

    return s ;
}

void show()
{
    node *s = head ;

    while(s != NULL)
    {

        cout << s->data << "->" ;
         s = s->next ;
    }
    cout << "NULL" ;
}

int main()
{
    node *p = NULL ;

    p = insertt(1222) ;
    /*p = insertt(79) ;
    p = insertt(123234) ;
    p = insertt(1989) ;
    p = insertt(5654) ;
    p = insertt(1213) ;
    p = insertt(567568) ;
    p = insertt(5756) ;
    p = insertt(13543) ;*/

    show() ;
}
