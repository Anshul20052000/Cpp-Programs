#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    x:
    cout<<"Enter the Rows and Columns of Matrix A : ";
    cin>>r1>>c1;
    cout<<"Enter the Rows and Columns of Matrix B : ";
    cin>>r2>>c2;
    if(c1 != r2)
    {
        cout<<"The Column of the Matrix A is not equal to the Row of the Matrix B so they can't be Multiplied "<<endl;
        cout<<"Try Again..."<<endl;
        goto x;
    }
    int mat1[r1][c1] , mat2[r2][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<" A["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<" B["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat2[i][j];
        }
    }
    cout<<"The Matrix A is : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<" "<<mat1[i][j];
        }
        cout<<endl;
    }
    cout<<"The Matrix B is : "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<" "<<mat2[i][j];
        }
        cout<<endl;
    }
    int mat3[r1][c2] = {0};
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            mat3[i][j] = 0;
            for(int k=0;k<c1;k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout<<"Now After Matrix Multiplication..."<<endl;
    cout<<"The Matrix C is : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<" "<<mat3[i][j];
        }
        cout<<endl;
    }
}
