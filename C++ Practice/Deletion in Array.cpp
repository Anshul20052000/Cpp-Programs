#include<iostream>
using namespace std;
int Lsearch(int ar[],int N,int Item);
int main()
{
    int n,ar[50],index,item;
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    cout<<"Enter the Elements in the Array : "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>ar[i];
    }
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        x:
        cout<<"Enter the Element to be Deleted : ";
        cin>>item;
        if(n==0)
        {
            cout<<"Array UNDERFLOW!!! "<<endl;
            exit(0);
        }
        index=Lsearch(ar,n,item);
        if(index==-1)
        {
            cout<<"The Element is not in the Array!!!"<<endl;
            goto x;
        }
        else
        {
            char ch1='n';
            cout<<"Do you really want to Delete Element [Y/N] : ";
            cin>>ch1;
            if(ch=='y'||ch=='Y')
            {
                ar[index]=0;
            }
        }
        cout<<"The Element which is to be Deleted is Replaced by 0. "<<endl;
        cout<<"Here, the element 0 represents the Deleted Element "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        cout<<"Now Shifting the Empty Space to the End of the Array."<<endl;
        for(int i=index;i<n;i++)
        {
            ar[i]=ar[i+1];
        }
        n-=1;
        cout<<"Cleaned Array : "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        cout<<"========================================================================================================================";
        cout<<"Want to Delete another Element...[Y/N] : ";
        cin>>ch;
    }
    cout<<"Finally the Array after Deleting the Elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
int Lsearch(int ar[],int N,int Item)
{
    for(int i=0;i<N;i++)
    {
        if(Item==ar[i])
        {
            return (i);
        }
    }
    return (-1);
}
