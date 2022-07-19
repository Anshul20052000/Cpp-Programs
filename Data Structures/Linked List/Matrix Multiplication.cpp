#include<iostream>
using namespace std;
int main()
{
    xyz:
    int mat1[10][10],mat2[10][10],mmat[10][10],r1,c1,r2,c2;
    cout<<"Enter the Rows and Columns of Matrix 1 [<10] : "<<endl;
    cin>>r1>>c1;
    cout<<"Enter the Rows and Columns of Matrix 2 [<10] : "<<endl;
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"Matrix Multiplication cannot be Proceeded..."<<endl;
        cout<<"As Columns of Matrix 1 is not Equal to Rows of Matrix 2"<<endl;
        cout<<"Enter the Rows and Columns of both the Matrix Again..."<<endl;
        goto xyz;
    }
    cout<<"Enter the Elements of the Matrix 1 : "<<endl;
    for(int i=0;i<r1;i++)
    {
        cout<<"Row "<<i+1<<" : "<<endl;
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter Matrix1["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the Elements of the Matrix 2 : "<<endl;
    for(int i=0;i<r2;i++)
    {
        cout<<"Row "<<i+1<<" : "<<endl;
        for(int j=0;j<c2;j++)
        {
            cout<<"Enter Matrix1["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat2[i][j];
        }
    }
    cout<<"The Matrix 1 you Entered is : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"  "<<mat1[i][j];
        }
        cout<<endl;
    }
    cout<<"The Matrix 2 you Entered is : "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"  "<<mat2[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            mmat[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<r2;k++)
            {
                mmat[i][j]+=(mat1[i][k]*mat2[k][j]);
            }
        }
    }
    cout<<"Matrix Multiplication : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"  "<<mmat[i][j];
        }
        cout<<endl;
    }
    return 0;
}

