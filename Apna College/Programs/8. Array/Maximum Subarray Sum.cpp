#include<iostream>
#include<climits>
using namespace std;

void MaxSubarraySum(int arr[],int len)
{
    int currSum = 0, maxSum = INT_MIN;
    for(int i=0;i<len;i++)
    {
        currSum = 0;
        for(int j=i;j<len;j++)
        {
            currSum += arr[j];
            if(currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
    }
    cout<<"The Maximum SubArray Sum is : "<<maxSum<<endl;
    return;
}

int main()
{
    int arr[100],len;
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    cout<<"Enter the Array : ";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    MaxSubarraySum(arr, len);
    return 0;
}
