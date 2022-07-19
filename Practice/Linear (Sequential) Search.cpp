#include<iostream>
using namespace std;
int Searching(int ar[],int n,int item)
{
    for(int i=0;i<n;i++)
    {
        if(item==ar[i])
        {
            return(i);
        }
    }
    return(-1);
}
int main()
{
    int ar[20],n,item,res;
    cout<<"Enter the Length of the Array (<20) : ";
    cin>>n;
    cout<<"Enter the Array Values : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Ar["<<i<<"] : ";
        cin>>ar[i];
    }
    cout<<"The Array you Entered is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<ar[i];
    }
    cout<<endl;
    cout<<"Enter the Element to be Searched : ";
    cin>>item;
    res = Searching(ar,n,item);
    if(res==-1)
    {
        cout<<"Element not Found in the Array!..."<<endl;
    }
    else
    {
        cout<<ar[res]<<" Found at Index "<<res<<" in the Array"<<endl;
    }
    return 0;
}
