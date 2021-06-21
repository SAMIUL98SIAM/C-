#include <iostream>
using namespace std;

template<class xmen>
class temp
{
    xmen arr[20];

public:
    temp(){}
    int n; // Number of Values which will be set by the user
    void SetArr();
    void GetArr();
    void Sorting();     ///Bubble Sort
    void Searching();   ///Binary Search
};

template<class xmen>
void temp<xmen>::SetArr()
{
    cout << "Enter the 'n' number of values: ";
    cin  >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
}

template<class xmen>
void temp<xmen>::GetArr()
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template<class xmen>
void temp<xmen>::Sorting()
{
    /*int i,TempValue;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(this->arr[i] > this->arr[j])
                {
                    TempValue=this->arr[i];
                    this->arr[i]=this->arr[j];
                    this->arr[j]=TempValue;
                }
            }
        } */

        int i, k, tempValue;
        for(i=0; i<n-1; i++)
        {
            k=i;
            for(int j=i+1; j<n; j++)
            {
                if(arr[k]>arr[j])
                    k=j;
            }
            tempValue=this->arr[i];
            this->arr[i]=this->arr[k];
            this->arr[k]=tempValue;
        }
}

template<class xmen>
void temp<xmen>::Searching()
{
    xmen value;
    int first=0, last=n-1, middle;
    cout << "Enter the value to search from Array: ";
    cin  >> value;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(arr[middle]==value)
        {
            cout << "Value found in index " << middle+1 << endl;
            break;
        }
        else if(arr[middle]>value) ///Since the middle is greater than value the last becomes middle -1;
            last=middle-1;
        else
            first=middle+1;
    }
}

int main()
{
    temp<char> *a1 = new temp<char>();  // dynamic memory allocation
    a1->SetArr();
    cout << endl;
    a1->Sorting();
    a1->GetArr();
    cout << endl;
    a1->Searching();

    delete a1;
}
