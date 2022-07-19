#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Arr["<<i+1<<"] : ";
        cin>>arr[i];
    }
    int Max = arr[0] , Min = arr[0];
    for(int i=0;i<5;i++)
    {
        if(Min > arr[i])
            Min = arr[i];
        if(Max < arr[i])
            Max = arr[i];
    }
    cout<<"The Maximum Element is : "<<Max<<endl;
    cout<<"The Minimum Element is : "<<Min<<endl;
    return 0;
}
