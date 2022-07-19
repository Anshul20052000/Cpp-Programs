#include<iostream>
#include<limits>
using namespace std;
void insertionSort(int ar[],int N);
int main()
{
    int n,ar[50];
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    cout<<"Enter the Array in any Order : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter Element "<<i<<" : ";
        cin>>ar[i];
    }
    cout<<"The Array you Entered is : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<ar[i]<<"  ";
    }
    cout<<endl;
    insertionSort(ar,n);
    cout<<"The Array after Sorting is : "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<ar[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
void insertionSort(int ar[],int N)
{
    ar[0]=INT_MIN;
    int temp,pos;
    for(int i=1;i<=N;i++)
    {
        temp=ar[i];
        pos=i-1;
        while(temp<ar[pos])
        {
            ar[pos+1]=ar[pos];
            pos--;
        }
        ar[pos+1]=temp;
        cout<<"Array after Iteration "<<i<<" is : ";
        for(int j=1;j<=N;j++)
        {
            cout<<ar[j]<<" ";
        }
        cout<<endl;
    }
}
