#include<iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std ;
//Defining a BST node
struct node
{
    int data ;
    node *left ;
    node *right ;
};
node *root = NULL ;

node *inseetion(int item)
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
        node *child = root , *parents ;
        while(child != NULL)
        {
            parents = child ;
            if(child->data < item)
                child = child->right ;
            else if(child->data > item)
                child = child->left ;
            else if(child->data == item)
            {
                cout << "DUPLICATE VALUE" << endl ;
                return NULL ;
            }

        }
        if(parents->data < item)
            parents->right= newNode ;
        else
            parents->left = newNode ;
    }
    return newNode ;
}

node *deletedata(node *root , int data)
{
    if(root == NULL)
        return root ;

    else if(data < root->data)
        root->left = deletedata(root->left,data) ;
    else if(data > root->data)
        root->right = deletedata(root->right,data) ;
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
            temp->data = root->data ;
            root->right = deletedata(root->right,data);
        }

    }
    return root ;
}

void visit(node *parents)
{
    if(root == NULL)
    {
        cout << "TREE DOESN'T INSERT!!" << endl ;
    }
    if(parents != NULL)
    {
        visit(parents->left) ;
        cout << parents->data << "->" << endl ;
        visit(parents->right) ;
    }

}

node *sear(int s_key)
{
    node *parents = root ;
    while(parents != NULL)
    {
        if(s_key == parents->data)
        {
            return parents ;
        }
        if(parents->data < s_key)
            parents = parents->right ;
        else
            parents = parents->left ;
    }
    return NULL ;
}

void avarage()
{
    int sum = 0 , count = 0 ;
    double avg = 0 ;
    node *parents = root ;
    while(parents != NULL)
    {
        sum+= parents->data ;
        count++ ;
        if(parents->data < root->data)
            parents = parents->left ;
        else
            parents = parents->right ;
    }
    cout << "SUMMETION: " << sum << endl ;
    avg = (double)sum/count ;
    cout << "AVERAGE: " << avg << endl ;
}

int main()
{
    root = NULL ;
    int elem , n ;
    cout << "ENTER THE SIZE OF TREE: " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "ELEMANT'S: [ " << i << " ] = " ;
        cin >> elem ;
        inseetion(elem) ;
    }
    visit(root) ;
    int key = 0 ;
    while(true)
    {
        cout << "1.INSERT 2.DELETE 3.SEARCHING 4.TRAVERSE 5.AVERAGE 6.EXITS" << endl ;
        cout << "CHOOSE YOUR OPTION: " ;
        cin >> key ;
        if(key == 1)
        {
            cout << "ENTER THE VALUE OF INSERTION: " ;
            cin >> elem ;
            inseetion(elem) ;
        }
        else if(key == 2)
        {
            cout << "ENTER THE VALUE OF DELETION: " ;
            cin >> elem ;
            deletedata(root,elem) ;
        }
        else if(key == 3)
        {
            cout << "ENTER THE SEARCHING VALUE: " ;
            cin >> elem ;
            sear(elem) ;
            if(sear(elem)==NULL) cout << "NOT FOUND!!" << endl ;
            else cout << "FOUND!!" << endl ;
        }
        else if(key == 4)
        {
            visit(root) ;
        }
        else if(key == 5)
        {
            avarage() ;
        }
        else
        {
            return 0 ;
        }
    }
    return 0 ;
}
