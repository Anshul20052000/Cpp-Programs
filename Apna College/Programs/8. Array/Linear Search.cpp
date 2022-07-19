#include<iostream>
#include<climits>
using namespace std;

int LinearSearch(int arr[], int ele, int len)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i] == ele)
            return i;
    }
    return -1;
}
int main()
{
    int len, arr[100];
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter the Element to be Searched : ";
    cin>>ele;
    cout<<"Element Found at Index : "<<LinearSearch(arr,ele,len)<<endl;
    return 0;
}
