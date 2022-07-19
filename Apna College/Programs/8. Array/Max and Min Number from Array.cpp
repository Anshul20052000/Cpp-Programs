#include<iostream>
#include<climits>

using namespace std;
int main()
{
    int arr[100];
    int len=0;
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cout<<"Arr["<<i<<"] : ";
        cin>>arr[i];
    }
    int Min = INT_MAX, Max = INT_MIN;
    for(int i=0;i<len;i++)
    {
        if(Min > arr[i])
            Min = arr[i];
        if(Max < arr[i])
            Max = arr[i];
    }
    cout<<"The Maximum Number is : "<<Max<<endl;
    cout<<"The Minimum Number is : "<<Min<<endl;
    return 0;
}
