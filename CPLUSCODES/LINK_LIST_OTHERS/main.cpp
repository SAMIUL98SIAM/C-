#include<iostream>
using namespace std;

struct node{
    int item;
    node* next;
};
/*
class LinkedList{
    node* head=NULL;
    int count=0;

    node* createNode(int item){
        node* n = new node;

        n->item = item;
        return n;
    }
};
*/
int main(){
	//Preparing the linked list
    node *n1, *n2, *n3;

    n1 = new node;
    n2 = new node;
    n3 = new node;

    n1->item = 10;
    n1->next = n2;

    n2->item = 25;
    n2->next = n3;

    n3->item = 35;
    n3->next = NULL;



 /*
    node* head;
    head = n1;


	//insert at the end
    node* tmp = head;
    while(tmp->next!=NULL){
        tmp = tmp->next;
    }
    node* n4 = new node;
    n4->item = 36;
    n4->next = NULL;
    tmp->next = n4;

	//insert on first position
    node* n5 = new node;
    n5->item = 57;
    n5->next = head;
    head = n5;

	//insert at specified position
    tmp = head;
    int pos=0;
    while(pos!=1){
        ++pos;
        tmp = tmp->next;
    }
    node* n6 = new node;
    n6->item = 43;
    n6->next = tmp->next;
    tmp->next = n6;

	//print all
    tmp = head;
    pos=0;
    while(tmp!=NULL){
        cout<<tmp->item<<" @ "<<++pos<<endl;
        tmp = tmp->next;
    }

    /*cout<<tmp->item<<endl;
    tmp = tmp->next;

    cout<<tmp->item<<endl;
    tmp = tmp->next;

    cout<<tmp->item<<endl;
    tmp = tmp->next;

    cout<<endl;*/

    return 0;
}
