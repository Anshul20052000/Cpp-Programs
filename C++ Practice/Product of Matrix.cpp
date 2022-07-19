#include<iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2,A[20][20],B[20][20],C[20][20];
    cout<<"Enter the Rows and Columns in Matrix A : "<<endl;
    cin>>r1>>c1;
    cout<<"Enter the Rows and Columns in Matrix B : "<<endl;
    cin>>r2>>c2;
    if(r1==c2)
    {
        cout<<"The Product of Matrix is Possible"<<endl;
    }
    else
    {
        cout<<"The Product of Matrix cannot be Found!"<<endl;
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
            cout<<"B["<<i+1<<"]["<<j+1<<"] = ";
            cin>>B[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            C[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                C[i][j]+=(A[i][k]*B[k][j]);
            }
        }
    }
    cout<<"Matrix A : "<<endl;
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<A[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    cout<<"Matrix B : "<<endl;
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<B[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    cout<<"The Product of Matrix A and B is : "<<endl;
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<C[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    return 0;
}
