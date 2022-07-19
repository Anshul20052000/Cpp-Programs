#include<iostream>
#include<climits>
using namespace std;

int RecordBreaker(int arr[], int len)
{
    int ans = 0, Max = INT_MIN;
    for(int i=0;i<len;i++)
    {
        if((arr[i] > Max) && ((arr[i] > arr[i+1]) || (i == len-1)))
        {
            //cout<<arr[i]<<endl;
            ans++;
        }
        Max = max(arr[i], Max);
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
    cout<<"The Number of Record Breaking Days are : "<<RecordBreaker(arr,len)<<endl;
    return 0;
}
