#include<iostream>
using namespace std;

void InsertionSort(int arr[], int len)
{
    for(int i=1;i<len;i++)
    {
        int curr = arr[i];
        int j = i-1;
        while(curr < arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
    return;
}


void PairSum(int arr[], int len, int sum)
{
    int i = 0, j = len-1;
    while(i < j)
    {
        if(arr[i] + arr[j] == sum)
        {
            cout<<"The Pair is : "<<arr[i]<<" + "<<arr[j]<<" = "<<arr[i]+arr[j]<<endl;
            return;
        }
        else if(arr[i] + arr[j]  > sum)
            j--;
        else
            i++;
    }
    cout<<"No Pair Found..."<<endl;
    return ;
}


int main()
{
    int len, arr[100];
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    cout<<"Enter the Array : ";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the Sum : ";
    cin>>sum;
    InsertionSort(arr,len);
    PairSum(arr,len,sum);
    return 0;
}
