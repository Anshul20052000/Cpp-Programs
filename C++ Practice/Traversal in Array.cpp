#include<iostream>
using namespace std;
int main()
{
    int n,ar[50];
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    cout<<"Enter the Elements in the Array : "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>ar[i];
    }
    cout<<"The Array you Entered is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after Multiplying by 2 is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<2*ar[i]<<" ";
    }
    return 0;
}
