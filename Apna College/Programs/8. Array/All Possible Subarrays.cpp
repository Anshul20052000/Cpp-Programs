#include<iostream>
using namespace std;

void AllPossibleSubarray(int arr[],int len)
{
    string str;
    for(int i=0;i<len;i++)
    {
        str = " ";
        for(int j=i;j<len;j++)
        {
            str += " " + to_string(arr[j]);
            cout<<str<<endl;
        }
    }
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
    AllPossibleSubarray(arr,len);
    return 0;
}
