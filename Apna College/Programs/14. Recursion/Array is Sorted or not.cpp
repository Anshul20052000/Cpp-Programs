#include<iostream>
using namespace std;

bool Sorted(int arr[], int n)
{
    if(n==1)
    {
        return true;
    }
    return ((arr[0] <= arr[1]) && (Sorted(arr+1, n-1)));
}

int main()
{
    int arr[10];
    for(int i=0;i<=10;i++)
    {
        cin>>arr[i];
    }
    if(Sorted(arr, 10))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}