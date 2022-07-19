#include<iostream>
using namespace std;

void subarrWithSum(int arr[], int len, int sum)
{
    int curr;
    for(int i=0;i<len;i++)
    {
        curr = 0;
        for(int j=i;j<len;j++)
        {
            curr+=arr[j];
            if(curr == sum)
            {
                cout<<"The Indexes are : "<<i+1<<" to "<<j+1<<endl;
                for(int k=i;k<=j;k++)
                {
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
                return ;
            }
        }
    }
    return;
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
    cout<<"Enter the Required Sum : ";
    int sum;
    cin>>sum;
    subarrWithSum(arr, len, sum);
    return 0;
}
