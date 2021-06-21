#include <iostream>

using namespace std ;

struct node
{
    int data ;
    node *next ;
};
node *head = NULL ;

node *insertdata(int item , node *curr = NULL)
{
    node *newNode = new node ;
    newNode->data = item ;
    newNode->next = NULL ;

    if(curr == NULL)
    {
        newNode->next = head ;
        head = newNode ;
    }
    else
    {
        newNode->next = curr->next ;
        curr->next = newNode ;
    }
    return newNode ;
}

node *deletedata(int pos)
{
    node *curr = head ;
    if(curr == NULL)
    {
        return curr ;
    }
    else if(pos == 0)
    {
        curr = curr->next ;
        return curr ;
    }
    else
    {
        node *temp = curr ;
        for(int i=0 ; i<=pos ; i++)
        {
            temp = temp->next ;
        }
        temp->next = (temp->next)->next ;
        return curr ;
    }
    //return curr ;
}

node *searchdata(int s_key)
{
    node *curr = head ;
    while(curr != NULL)
    {
        if(s_key == curr->data)
        {
            return curr ;
        }
        curr= curr->next ;
    }
    return NULL ;
}

void show()
{
    node *curr = head ;
    cout << "LIST: [ " ;
    while(curr != NULL)
    {
        cout << curr->data << "->" ;
        curr = curr->next ;
    }
    cout << " ] " << endl ;
}

void average()
{
    int sum = 0 , count = 0 ;
    double avg = 0 ;
    node *curr = head ;
    while(curr != NULL)
    {
        sum+=curr->data ;
        count++ ;
        curr = curr->next ;
    }
    cout << "SUMMESION: " << sum << endl;
    avg = (double)sum/count ;
    cout << "AVERAGE: " << avg << endl;
}

int main()
{
    node *p = NULL , *temp ;
    int n , elem ;
    cout << "ENTER THE SIZE OF NODE: " ;
    cin >> n ;
    for(int i=0 ; i<n ;i++)
    {
        cout << "ELEMANT'S: [ " << i << " ] = " ;
        cin >> elem ;
        p = insertdata(elem,p) ;
    }
    int key = 0 ;
    while(true)
    {
        cout << "1.SEARCHING 2.INSERTION AT MIDDLE AND LAST 3.INSERTION AT HEAD 4.DELETION 5.TRAVERSE 6.AVERAGE 7.EXITS" << endl ;
        cout << "TAKE THE KEY: " ;
        cin >> key ;
        if(key == 1)
        {
            cout << "ENTER THE VALUE OF SEARCHING: " ;
            cin >> elem ;
            searchdata(elem) ;
            if(searchdata(elem)==NULL) cout << "NOT FOUND!!" << endl;
            else cout << "FOUND!!" << endl ;
        }
        else if(key == 2)
        {
            cout << "FIND THE NODE TO BE INSERTED: " ;
            cin >> elem ;
            temp = searchdata(elem) ;
            if(temp == NULL)cout << "NOT INSERTED!!!" << endl;
            else
            {
                cout << "ENTER THE VALUE OF INSERTION: " ;
                cin >> elem ;
                insertdata(elem,temp) ;
            }
        }
        else if(key == 3)
        {
                cout << "ENTER THE VALUE OF HEAD INSERTION: " ;
                cin >> elem ;
                insertdata(elem) ;
        }
        else if(key == 4)
        {
            cout << "ENTER THE VALUE OF DELETION: " ;
                cin >> elem ;
                deletedata(elem) ;
        }
        else if(key == 5)
        {
            show() ;
        }
        else if(key == 6)
        {
            average();
        }
        else
        {
            return 0 ;
        }
    }
}
