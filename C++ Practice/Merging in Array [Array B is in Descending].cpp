#include<iostream>
using namespace std;
void merging(int A[],int B[],int C[],int a,int b,int ab);
int main()
{
    int A[50],B[50],C[100],a,b,ab;
    cout<<"Enter the Length of the Array A [Max. 50] : ";
    cin>>a;
    cout<<"Enter the Array A in Ascending Order : "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>A[i];
    }
    cout<<"Enter the Length of Array B [Max. 50] : ";
    cin>>b;
    ab=a+b;
    cout<<"Enter the Array B in Ascending Order : "<<endl;
    for(int j=0;j<b;j++)
    {
        cout<<"Enter Element "<<j+1<<" : ";
        cin>>B[j];
    }
    merging(A,B,C,a,b,ab);
    cout<<"The Array C after Merging Array A and Array B is : "<<endl;
    for(int k=0;k<ab;k++)
    {
        cout<<C[k]<<"  ";
    }
    cout<<endl;
}
void merging(int A[],int B[],int C[],int a,int b,int ab)
{
    int x,y,z;
    for(x=0,y=b-1,z=0;x<a&&y>=0;)
    {
        if(A[x]<B[y])
        {
            C[z++]=A[x++];
        }
        else
        {
            C[z++]=B[y--];
        }
    }
    if(x<a)
    {
        while(x<a)
        {
            C[z++]=A[x++];
        }
    }
    else
    {
        while(y>=0)
        {
            C[z++]=B[y--];
        }
    }
}
