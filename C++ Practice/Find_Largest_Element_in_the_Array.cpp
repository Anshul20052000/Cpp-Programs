#include<iostream>
using namespace std;
int main()
{
    int a[100],b;
    cout<<"Enter the Number of Elements "<<endl;
    cin>>b;
    cout<<"Enter the Elements in the Array "<<endl;
    for(int i=0;i<b;i++)
    {
        cout<<"Element "<<i+1<<" = ";
        cin>>a[i];
    }
    float large=0;
    for(int j=0;j<b;j++)
    {
        if(a[j]>large)
        {
            large=a[j];
        }
    }
    cout<<"The Largest Number is "<<large<<endl;
    return 0;
}
