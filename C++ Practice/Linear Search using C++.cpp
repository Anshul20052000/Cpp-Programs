#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Elements in the Array : ";
    cin>>n;
    int arr[n],num;
    cout<<"Enter the Elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" Arr["<<i+1<<"] : ";
        cin>>arr[i];
    }
    cout<<"Enter the Element to be Searched : ";
    cin>>num;
    int pos = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            pos = i+1;
            break;
        }
    }
    if(pos == -1)
    {
        cout<<"Element not found in the Array"<<endl;
    }
    else
    {
        cout<<"Element found in the Array and its Position is "<<pos<<endl;
    }
    return 0;
}
