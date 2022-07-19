#include<iostream>
using namespace std;
int Bsearch(int ar[],int N,int item)
{
    int beg,mid,last;
    beg=0;
    last=N-1;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(item>ar[mid])
        {
            beg=mid+1;
        }
        else if(item<ar[mid])
        {
            last=mid-1;
        }
        else
        {
            return(beg);
        }
    }
    return (-1);
}
int Bsearch(int ar[],int N,int item);
int main()
{
    int ar[100],n,item,index;
    cout<<"Enter the Number of Elements [MAX. 100] : ";
    cin>>n;
    cout<<"Enter the Elements in the Array in Ascending Order Only : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>ar[i];
    }
    cout<<"Enter the Element to be Searched : ";
    cin>>item;
    index=Bsearch(ar,n,item);
    if(index==-1)
    {
        cout<<"The Element is not in the List!!!"<<endl;
    }
    else
    {
        cout<<"The Element found at Index : "<<index<<" Position : "<<index+1<<endl;
    }
    return 0;
}
