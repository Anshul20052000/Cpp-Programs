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
    int index,item;
    cout<<"Now the Deletion in Array Starts..."<<endl;
    cout<<"Note : Indexing Starts from 0..."<<endl;
    cout<<"Enter the Index of the Item to be Deleted : ";
    cin>>index;
    item=a[index];
    for(int i=index;i<Size;i++)
    {
        a[i]=a[i+1];
    }
    Size=Size-1;
    cout<<item<<" Deleted from the Array..."<<endl;
    cout<<"Now the Array is : "<<endl;
    for(int i=0;i<Size;i++)
    {
        cout<<"\t"<<a[i]<<endl;
    }
}
