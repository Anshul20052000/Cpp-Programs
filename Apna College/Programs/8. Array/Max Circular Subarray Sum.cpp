#include<iostream>
#include<climits>
using namespace std;

int KadaneAlgo(int arr[],int len)
{
    int currSum = 0, maxSum = INT_MIN;
    for(int i=0;i<len;i++)
    {
        if(i==0)
        {
            currSum = arr[i];
            maxSum = currSum;
        }
        else
        {
            currSum = max(currSum + arr[i], arr[i]);
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int MaxCirSubarraySum(int arr[],int len)
{
    int Max = 0, totSum = 0;
    int nowrap = KadaneAlgo(arr,len);
    for(int i=0;i<len;i++)
    {
        totSum += arr[i];
        arr[i] = -arr[i];
    }
    int withwrap = totSum - KadaneAlgo(arr,len);
    return(max(nowrap, withwrap));
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
    cout<<"The Maximum Circular SubArray Sum is : "<<MaxCirSubarraySum(arr, len)<<endl;
    return 0;
}
