#include<iostream>
using namespace std;

int LongArithSubarray(int arr[], int len)
{
    int ans = 0, curr = 2, j = 2;
    int pd = arr[1] - arr[0];
    while(j<len)
    {
        if(pd == arr[j] - arr[j-1])
            curr++;
        else
        {
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(curr, ans);
        j++;
    }
    return ans;
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
    cout<<"The Longest Arithmetic SubArray is : "<<LongArithSubarray(arr,len)<<endl;
    return 0;
}
