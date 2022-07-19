#include<iostream>
using namespace std;

void PairSum(int arr[], int len, int sum)
{
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout<<"The Pair is : "<<i<<" "<<j<<" i.e. : "<<arr[i]<<" + "<<arr[j]<<" = "<<arr[i]+arr[j]<<endl;
                return;
            }
        }
    }
    cout<<"The Pair is not Found..."<<endl;
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
    int sum;
    cout<<"Enter the Sum : ";
    cin>>sum;
    PairSum(arr, len, sum);
    return 0;
}
