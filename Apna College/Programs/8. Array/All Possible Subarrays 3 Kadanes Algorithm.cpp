#include<iostream>
#include<climits>
using namespace std;

void KadaneAlgo(int arr[], int len)
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
    cout<<"The Maximum Sum is : "<<maxSum<<endl;
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
    KadaneAlgo(arr, len);
    return 0;
}
