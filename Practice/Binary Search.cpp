#include<iostream>
using namespace std;
int Binary_Searching(int ar[],int n,int item)
{
    int lb,ub,mid;
    lb = 0;
    ub = n-1;
    while(lb<=ub)
    {
        mid = (lb+ub)/2;
        if(ar[mid]==item)
        {
            return (mid);
        }
        else if(item < ar[mid])
        {
            ub = mid-1;
        }
        else
        {
            lb = mid+1;
        }
    }
    return (-1);
}
int main()
{
    int ar[20],n,item,res;
    cout<<"Enter the Length of the Array (<20) : ";
    cin>>n;
    cout<<"Enter the Array Values in Ascending Order : "<<endl;
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
    res = Binary_Searching(ar,n,item);
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
