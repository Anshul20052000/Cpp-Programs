#include<iostream>
using namespace std;
int main()
{
    int arr[100], r1,c1,r2,c2;
    cout<<"Enter the Rows and Cols of 1st Matrix : ";
    cin>>r1>>c1;
    cout<<"Enter the Rows and Cols of 2nd Matrix : ";
    cin>>r2>>c2;
    if(c1 != r2)
    {
        cout<<"Matrix cannot be Multiplied..."<<endl;
        return 0;
    }
    int A[r1][c1], B[r2][c2];
    cout<<"Enter Matrix 1 : ";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter Matrix 2 : ";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>B[i][j];
        }
    }
    int res[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            res[i][j] = 0;
            for(int k=0;k<c1;k++)
            {
               res[i][j] +=  A[i][k]*B[k][j];
            }
        }
    }
    cout<<"The Matrix Multiplication : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
