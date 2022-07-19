#include<iostream>
using namespace std;
void SumOfSubarray(int arr[], int len)
{
    int curr = 0;
    for(int i=0;i<len;i++)
    {
        curr = 0;
        for(int j=i;j<len;j++)
        {
            curr += arr[j];
            cout<<curr<<endl;
        }
    }
    return ;
}
int main()
{
    int arr[100], len;
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    SumOfSubarray(arr,len);
    return 0;
}
