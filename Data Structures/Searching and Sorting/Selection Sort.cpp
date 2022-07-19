#include<iostream>
using namespace std;
int main()
{
    int a[20],n;
    cout<<"Enter the Length of the Array (<20) : ";
    cin>>n;
    cout<<"Enter the Elements in Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The Array you Entered is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\nSelection Sort Time : - "<<endl;
    int Min,temp;
    for(int i=0;i<(n-1);i++)
    {
        Min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[Min])
            {
                Min = j;
            }
        }
        temp = a[i];
        a[i] = a[Min];
        a[Min] = temp;
        cout<<"\nRound "<<i+1<<" : ";
        for(int k=0;k<n;k++)
        {
            cout<<a[k]<<"  ";
        }
    }
    cout<<"\nThe Final Array after Selection Sort is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}
