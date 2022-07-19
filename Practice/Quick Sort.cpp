#include<iostream>
using namespace std;
int Partition(int a[],int lb,int ub);
void Quick_Sort(int a[],int lb,int ub)
{
    int q;
    if(lb<ub)
    {
        q = Partition(a,lb,ub);
        Quick_Sort(a,lb,q-1);
        Quick_Sort(a,q+1,ub);
    }
}
int Partition(int a[],int lb,int ub)
{
    int p,q,piv;
    p = lb;
    q = ub;
    piv = a[lb];
    while(p<q)
    {
        while((a[p]<=piv)&&(p<ub))
        {
            p++;
        }
        while(a[q]>piv)
        {
            q--;
        }
        if(p<q)
        {
            a[p] = a[p] + a[q] - (a[q] = a[p]);
        }
    }
    a[lb] = a[lb] + a[q] - (a[q] = a[lb]);
    return (q);
}
int main()
{
    int ar[20],l;
    cout<<"Enter the Length of the Array : ";
    cin>>l;
    cout<<"Enter the Array Values : "<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<"Ar["<<i<<"] : ";
        cin>>ar[i];
    }
    cout<<"The Array you Entered is : "<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<" "<<ar[i];
    }
    cout<<endl;
    Quick_Sort(ar,0,l-1);
    cout<<"The Array after Quick Sort is : "<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<" "<<ar[i];
    }
    return 0;
}
