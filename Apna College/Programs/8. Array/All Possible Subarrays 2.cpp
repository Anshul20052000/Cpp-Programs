#include<iostream>
using namespace std;

void AllPossibleSubarray(int arr[], int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<" "<<arr[k];
            }
            cout<<endl;
        }
    }
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
    AllPossibleSubarray(arr, len);
    return 0;
}
