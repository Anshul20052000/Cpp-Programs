#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 12;
    arr[3] = 213;
    cout<<arr<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    int arr1[4] = {1,2,3,40};
    cout<<arr1<<endl;
    for(int i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    //int arr2[4] = {1,2,3,4,400};
    int arr2[4] = {1,2};
    cout<<arr2<<endl;
    for(int i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    int arr3[4];
    cout<<arr3<<endl;
    for(int i=0;i<sizeof(arr3)/sizeof(arr3[0]);i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    int arr4[4];
    cout<<arr4<<endl;
    for(int i=0;i<100;i++)
    {
        cout<<arr4[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    int arr5[4] = {12,23,34,45};
    cout<<arr5<<endl;
    for(int i=0;;i++)
    {
        cout<<arr5[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}
