#include<iostream>
using namespace std;

int LongArithSubarray(int arr[],int len)
{
    if(len<=1)
        return 1;
    int diff[len-1];
    for(int i=0;i<len-1;i++)
    {
        diff[i] = arr[i+1] - arr[i];
    }
    /*for(int i=0;i<len-1;i++)
    {
        cout<<diff[i]<<" ";
    }
    cout<<endl;*/
    int las = 2, Maxlas = 0;
    int test = diff[0];
    for(int i=1;i<len-1;i++)
    {
        if(diff[i] == test)
        {
            Maxlas = max(Maxlas, ++las);
        }
        else
        {
            test = diff[i];
            las = 2;
        }
    }
    return Maxlas;
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
