#include<iostream>
using namespace std;

void bubbleSort(int arr[], int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
    return;
}


int main()
{
    int arr[100], len;
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    cout<<"Enter the Array : ";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,len);
    cout<<"The Array after Sorting : "<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
