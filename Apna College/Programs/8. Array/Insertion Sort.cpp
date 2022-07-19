#include<iostream>
using namespace std;

void InsertionSort(int arr[], int len)
{
    for(int i=1;i<len;i++)
    {
        int key = arr[i];
        int j = i-1;
        while((key < arr[j]) && (j>=0))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        /*for(int k=0;k<len;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;*/
    }
    return ;
}

int main()
{
    int arr[100], len;
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    InsertionSort(arr, len);
    cout<<"The Array after Sorting : ";
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
