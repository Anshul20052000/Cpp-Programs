#include<iostream>
#include<climits>
using namespace std;

void SmPosMissNo(int arr[], int len)
{
    int N = 1e6+2;
    bool posNo[N];
    for(int i=0;i<N;i++)
    {
        posNo[i] = false;
    }
    for(int i=0;i<len;i++)
    {
        if(arr[i] >= 0)
            posNo[arr[i]] = true;
    }
    for(int i=0;i<INT_MAX;i++)
    {
        if(posNo[i] == false)
        {
            cout<<"The Smallest Positive Missing Number is : "<<i<<endl;
            return;
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
    SmPosMissNo(arr,len);
    return 0;
}
