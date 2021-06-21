#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std ;

struct node
{
    int data ;
    node *left ;
    node *right ;
};
node *root = NULL ;

node *insertdata(int item)
{
    node *newNode = new node ;
    newNode->data = item ;
    newNode->left = NULL ;
    newNode->right = NULL ;

    if(root == NULL)
    {
        root = newNode ;
    }
    else
    {
        node *child = root , *parent ;
        while(child !=NULL)
        {
            parent = child ;
            if(child->data < item)
                child = child->right ;
            else if(child->data > item)
                child = child->left ;
            else if(child->data == item)
            {
                cout << "DPLICATED VALUE DOESN'T INSERTED!!" << endl ;
                return NULL ;
            }
        }
        if(parent->data < item)
            parent->right = newNode ;
        else
            parent->left = newNode ;
    }
    return newNode ;
}

node *deletedata(node *root  , int data)
{
    if(root == NULL)
    {
        return root ;
    }
    else if(root->data < data)
    {
        root->right = deletedata(root->right,data) ;
    }
    else if(root->data > data)
    {
        root->left = deletedata(root->left,data) ;
    }
    else
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root ;
            root = NULL ;
        }
        else if(root->left == NULL)
        {
            node *temp = root ;
            root = root->right ;
            delete temp ;
        }
        else if(root->right == NULL)
        {
            node *temp = root ;
            root = root->left ;
            delete temp ;
        }
        else
        {
            node *temp = (root->right) ;
            root->data = temp->data ;
            root->right = deletedata(root->right,data) ;
        }
    }
    return root ;
}

node *visit(node *parent)
{
    if(root == NULL)
    {
        cout << "TREE DOESN'T EXITS!!" << endl ;
        return NULL ;
    }
    if(parent != NULL)
    {
        visit(parent->left) ;
        cout << parent->data << " " << endl  ;
        visit(parent->right) ;
    }
}

node *searchdata(int s_key)
{
    node *parent = root ;
    while(parent != NULL)
    {
        if(s_key == parent->data)
        {
            return parent ;
        }
        if(parent->data < s_key)
        parent = parent->right ;
        else
        parent = parent->left ;
    }
    return NULL ;
}

void average()
{
    int sum = 0 , count = 0 ;
    double avg = 0 ;
    node *parent = root ;
    while(parent != NULL)
    {
        sum = parent->data  + sum ;
        count++;
        if(parent->data < root->data)
            parent = parent->right ;
        else
            parent = parent->left ;
    }
    cout << "SUMM: " << sum << endl ;
    avg=(double)sum/count ;
    cout << "AVERAGE: " << avg << endl ;
}

int main()
{
    root = NULL ;
    int elem , n ;
    cout << "ENTER THE SIZE OF TREE NODE'S: " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {

        cout << "ELEMANT'S: [ " << i << " ] = " ;
         cin >> elem ;
        insertdata(elem) ;
    }
    int key = 0 ;
    while(true)
    {
        cout << "1.SEARCHING 2.ADD DATA 3.DELETE DATA 4.TRAVERSE 5.AVERAGE  6.OFF" << endl ;
        cout << "CHOOSE THE KEY: " ;
        cin >> key ;
        if(key == 1)
        {
            cout << "ENTER THE VALUE OF SEARCHING: " ;
            cin >> elem ;
            searchdata(elem) ;
            if(searchdata(elem)==NULL) cout << "NOT FOUND!!" << endl ;
            else cout << "FOUND!!" << endl ;
        }
        else if(key == 2)
        {
            cout << "ENTER THE VALUE OF INSERTION: " ;
            cin >> elem ;
            insertdata(elem) ;
        }
        else if(key == 3)
        {
            cout << "ENTER THE VALUE OF DELEATION: " ;
            cin >> elem ;
            deletedata(root,elem) ;
        }
        else if(key == 4)
        {
            visit(root) ;
        }
        else if(key == 5)
        {
            average() ;
        }
        else
        {
            return 0 ;
        }

    }
    return 0 ;
}
