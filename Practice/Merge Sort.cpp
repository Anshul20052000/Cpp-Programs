#include<iostream>
using namespace std;
void Merge(int arr[],int lb,int mid,int ub);
void Merge_Sort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid = (lb+ub)/2;
        Merge_Sort(arr,lb,mid);
        Merge_Sort(arr,mid+1,ub);
        Merge(arr,lb,mid,ub);
    }
}
void Merge(int a[],int lb,int mid,int ub)
{
    //int b[(ub-lb)+1];
    int b[100];
    int h = lb;
    int i = lb;
    int j = mid+1;
    while((h<=mid)&&(j<=ub))
    {
        if(a[h]<=a[j])
        {
            b[i] = a[h];
            h++;
        }
        else
        {
            b[i] = a[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(int k=j;k<=ub;k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    else
    {
        for(int k=h;k<=mid;k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    for(int k=lb;k<=ub;k++)
    {
        a[k] = b[k];
    }
}
int main()
{
    int ar[100],n;
    cout<<"Enter the Length of the Array(<100) : ";
    cin>>n;
    cout<<"Enter the Values of the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Ar["<<i<<"] = ";
        cin>>ar[i];
    }
    cout<<"The Array you Entered is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Now Applying Merge Sort Algorithm..."<<endl;
    Merge_Sort(ar,0,n-1);
    cout<<endl;
    cout<<"The Sorted Array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}
