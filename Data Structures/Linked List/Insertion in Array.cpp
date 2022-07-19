#include<iostream>
using namespace std;
int main()
{
    int a[7],n,ind,Size;
    cout<<"Enter the Size of the Array (<7) : ";
    cin>>Size;
    cout<<"Enter "<<Size<<" nos. "<<endl;
    for(int i=0;i<Size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the Number to be Inserted and at which Index : ";
    cin>>n>>ind;
    for(int i=Size-1;i>=ind;i--)
    {
        a[i+1]=a[i];
    }
    a[ind]=n;
    Size=Size+1;
    for(int i=0;i<Size;i++)
    {
        cout<<"\t"<<a[i]<<endl;
    }
    return 0;
}
