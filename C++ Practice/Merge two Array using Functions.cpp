#include<iostream>
using namespace std;
void Merge_Array(int A[],int a,int B[],int b,int C[]);
void show_array(int X[],int n);
int main()
{
    int a,b,A[100],B[100],C[100];
    cout<<"Enter the Length of Array A : ";
    cin>>a;
    cout<<"Enter the Array Elements of Array A : "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<" A["<<i+1<<"] : ";
        cin>>A[i];
    }
    cout<<endl;
    cout<<"Enter the Length of Array B : ";
    cin>>b;
    cout<<"Enter the Array Elements of Array B : "<<endl;
    for(int i=0;i<b;i++)
    {
        cout<<" B["<<i+1<<"] : ";
        cin>>B[i];
    }
    int ab = a+b;
    Merge_Array(A,a,B,b,C);
    cout<<"\nThe Array Elements of Array A are : "<<endl;
    show_array(A,a);
    cout<<"\nThe Array Elements of Array B are : "<<endl;
    show_array(B,b);
    cout<<"\nThe Array Elements of Array C are : "<<endl;
    show_array(C,ab);
    return 0;
}
void show_array(int X[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<X[i];
    }
    cout<<endl;
}
void Merge_Array(int A[],int a,int B[],int b,int C[])
{
    int x = 0,y = 0,z = 0;
    while((x<a)&&(y<b))
    {
        if(A[x]<B[y])
            C[z++] = A[x++];
        else
            C[z++] = B[y++];
    }
    while(x<a)
        C[z++] = A[x++];

    while(y<b)
        C[z++] = B[y++];
}
