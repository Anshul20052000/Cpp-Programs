#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Elements in the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements in the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Arr["<<i+1<<"] : ";
        cin>>arr[i];
    }
    cout<<"The Array Before Reversing : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Arr["<<i+1<<"] : "<<arr[i]<<endl;
    }
    int temp=0;
    for(int i=0,j = n-1;i<n/2;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout<<"The Array after Reversing : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Arr["<<i+1<<"] : "<<arr[i]<<endl;
    }
    return 0;
}
