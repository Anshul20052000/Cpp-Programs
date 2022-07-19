#include<iostream>
using namespace std;
int Lsearch(int ar[],int N,int Item)
{
    for(int i=0;i<N;i++)
    {
        if(ar[i]==Item)
        {
            return(i);
        }
    }
    return (-1);s
}
int Lsearch(int ar[],int N,int item);
int main()
{
    int ar[100],n,item,index;
    cout<<"Enter the Number of Elements [MAX. 100] : ";
    cin>>n;
    cout<<"Enter the Elements in the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>ar[i];
    }
    cout<<"Enter the Element to be Searched : ";
    cin>>item;
    index=Lsearch(ar,n,item);
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
