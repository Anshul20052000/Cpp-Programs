#include<iostream>
using namespace std;

void SelectionSort(int arr[], int len)
{
    int MinIdx = 0;
    for(int i=0;i<len;i++)
    {
        MinIdx = i;
        for(int j=i+1;j<len;j++)
        {
            if(arr[MinIdx] > arr[j])
                MinIdx = j;
        }
        if(MinIdx != i)
        {
            int temp = arr[MinIdx];
            arr[MinIdx] = arr[i];
            arr[i] = temp;
        }
    }
    return;
}

int main()
{
    int arr[100], len;
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    cout<<"Enter the Array : "<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    SelectionSort(arr,len);
    cout<<"The Sorted Array is : ";
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
