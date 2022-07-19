#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the Rows and Columns of the Matrices : ";
    cin>>r>>c;
    int mat1[r][c],mat2[r][c];
    cout<<"Enter the Matrix A : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" A["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the Matrix B : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" B["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat2[i][j];
        }
    }
    int mat3[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout<<"The Matrix A is : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" "<<mat1[i][j];
        }
        cout<<endl;
    }
    cout<<"The Matrix B is : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" "<<mat2[i][j];
        }
        cout<<endl;
    }
    cout<<"The Matrix C is : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" "<<mat3[i][j];
        }
        cout<<endl;
    }
    return 0;
}
