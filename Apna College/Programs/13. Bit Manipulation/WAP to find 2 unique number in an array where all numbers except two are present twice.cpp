#include<iostream>
using namespace std;

bool isSetbit(int num, int pos)
{
    return((num & (1<<pos)) != 0);
}

int main()
{
    int n;
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array : ";
    for(int i=0;i<n;i++)
    {
            cin>>arr[i];
    }
    int xorsum = 0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0, pos = 0;
    while(setbit != 1)
    {
        setbit = tempxor & 1;
        pos++;
        tempxor = tempxor>>1;
    }
    int newxor = 0;
    for(int i=0;i<n;i++)
    {
        if(isSetbit(arr[i], pos-1))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout<<"The First unique element is : "<<newxor<<endl;
    newxor = xorsum ^ newxor;
    cout<<"The Second unique element is : "<<newxor<<endl;
    return 0;
}
