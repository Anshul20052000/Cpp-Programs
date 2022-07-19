#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Length of the array : ";
    cin>>n;
    cout<<"Enter the array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int xorsum = 0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    cout<<"The Unique element is : "<<xorsum<<endl;
    return 0;
}
