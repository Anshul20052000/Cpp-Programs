#include<iostream>
using namespace std;

int BinarySearch(int arr[], int len, int ele)
{
    int lb = 0, ub = len-1;
    int mid;
    while(lb<=ub)
    {
        mid = (lb + ub) / 2;
        if(arr[mid] == ele)
            return mid;
        else if(arr[mid] > ele)
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[100],len;
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    cout<<"Enter the Array : "<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter the Element to be Searched : ";
    cin>>ele;
    cout<<"The Element Found at Index : "<<BinarySearch(arr,len,ele)<<endl;
    return 0;
}
