#include<iostream>
using namespace std;
void show(int arr[],int n);
int main()
{
    int n;
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" Enter "<<i+1<<" Element : ";
        cin>>arr[i];
    }
    show(arr,n);
    return 0;
}
void show(int arr[],int n)
{
    cout<<"The Array Elements are : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<" is : "<<arr[i]<<endl;
    }
}
