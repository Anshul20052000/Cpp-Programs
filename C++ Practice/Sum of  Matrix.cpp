#include<iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2,A[20][20],B[20][20],C[20][20];
    cout<<"Enter the Rows and Columns of Matrix A : "<<endl;
    cin>>r1>>c1;
    cout<<"Enter the Rows and Columns of Matrix B : "<<endl;
    cin>>r2>>c2;
    if( r1==r2 && c1==c2 )
    {
        cout<<"The two Matrices can be Added"<<endl;
    }
    else
    {
        cout<<"The Matrix cannot be Added"<<endl;
        exit(0);
    }
    cout<<"Enter the Matrix A : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"] = ";
            cin>>A[i][j];
        }
    }
    cout<<"Enter the Matrix B : "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"] = ";
            cin>>B[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"The Sum of Matrices is : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<C[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}

