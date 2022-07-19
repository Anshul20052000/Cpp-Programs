#include<iostream>
using namespace std;
void selsort(int ar[],int N);
int main()
{
    int n,ar[50];
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    cout<<"Enter the Array in any Order : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Element "<<i+1<<" : ";
        cin>>ar[i];
    }
    cout<<"The Array before Sorting is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<"  ";
    }
    cout<<endl;
    selsort(ar,n);
    cout<<"Array after Selection Sort is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
void selsort(int ar[],int N)
{
    int temp,pos,small;
    for(int i=0;i<N-1;i++)
    {
        small=ar[i];
        pos=i;
        for(int j=i+1;j<N;j++)
        {
            if(ar[j]<small)
            {
                small=ar[j];
                pos=j;
            }
        }
        temp=ar[i];
        ar[i]=ar[pos];
        ar[pos]=temp;
        cout<<"Array after Pass "<<i+1<<" is : ";
        for(int i=0;i<N;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}
