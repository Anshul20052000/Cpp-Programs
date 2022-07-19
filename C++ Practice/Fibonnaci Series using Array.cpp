#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Elements which you want for Fibonacci Series : ";
    cin>>n;
    unsigned long long int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2;i<n;i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout<<"The Fibonacci Series is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"No. "<<i+1<<" \t: "<<arr[i]<<endl;
    }
    return 0;
}
