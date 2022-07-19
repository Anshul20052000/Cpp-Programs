#include<iostream>
using namespace std;
int Binary_Searching(int ar[],int lb,int ub,int item)
{
    int mid;
    if(lb>ub)
    {
        return (-1);
    }
    mid = (lb+ub)/2;
    if(item==ar[mid])
    {
        return (mid);
    }
    else if(item < ar[mid])
    {
        Binary_Searching(ar,lb,mid-1,item);
    }
    else
    {
        Binary_Searching(ar,mid+1,ub,item);
    }
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
    res = Binary_Searching(ar,0,n-1,item);
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
