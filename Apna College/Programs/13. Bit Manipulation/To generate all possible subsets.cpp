#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count = 0;

    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
        count++;
    }
    cout<<"The Number of Elements are : "<<count<<endl;
    return 0;
}
