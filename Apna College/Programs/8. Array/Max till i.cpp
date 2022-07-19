#include<iostream>
using namespace std;

int MaxTillI(int arr[], int len)
{
    if(len == 0)
        return -1;
    int Max = arr[0];
    for(int i=1;i<len;i++)
    {
        Max = max(arr[i],Max);
        cout<<"Max till "<<i<<"th Index : "<<Max<<endl;
    }
    return Max;
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
    sMaxTillI(arr, len);
    cout<<endl;
    return 0;
}
