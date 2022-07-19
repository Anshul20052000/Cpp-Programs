#include<iostream>
using namespace std;
int main()
{
    xyz:
    int r1,c1,r2,c2,ar1[10][10],ar2[10][10],add[10][10];
    cout<<"Enter the Rows and Columns of Matrix 1 : "<<endl;
    cin>>r1>>c1;
    cout<<"Enter the Rows and Columns of Matrix 2 : "<<endl;
    cin>>r2>>c2;
    if(r1!=r2 || c1!=c2)
    {
        cout<<"The Rows and Columns of the Two Matrix are not Equal..."<<endl;
        cout<<"Enter the Rows and Columns of the Matrices Again..."<<endl;
        goto xyz;
    }
    cout<<"Enter the Matrix 1 :"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
             cout<<"Enter Matrix1["<<i+1<<"]["<<j+1<<"] : ";
             cin>>ar1[i][j];
        }
    }
    cout<<"Enter the Matrix 2 :"<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
             cout<<"Enter Matrix2["<<i+1<<"]["<<j+1<<"] : ";
             cin>>ar2[i][j];
        }
    }
    cout<<"The Matrix 1 you Entered is : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"  "<<ar1[i][j];
        }
        cout<<endl;
    }
    cout<<"The Matrix 2 you Entered is : "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"  "<<ar2[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            add[i][j]=ar1[i][j]+ar2[i][j];
        }
    }
    cout<<"The Addition of the Two Matrix is : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"  "<<add[i][j];
        }
        cout<<endl;
    }
    return 0;
}
