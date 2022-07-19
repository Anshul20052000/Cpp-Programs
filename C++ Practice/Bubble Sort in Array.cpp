#include<iostream>
using namespace std;
void bubblesort(int ar[],int N);
int main()
{
    int n,ar[50];
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    cout<<"Enter the Elements in the Array in any Order : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>ar[i];
    }
    cout<<"The Array you Entered is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<"  ";
    }
    cout<<endl;
    bubblesort(ar,n);
    cout<<"The Array after Bubble Sorting is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<"  ";
    }
    return 0;
}
void bubblesort(int ar[],int N)
{
    int temp,ctr=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<(N-i-1);j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
        cout<<"Array after Iteration "<<++ctr<<" is : ";
        for(int i=0;i<N;i++)
        {
            cout<<ar[i];
        }
        cout<<endl;
    }
}
