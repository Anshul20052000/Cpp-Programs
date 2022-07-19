#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the Number of Rows and Columns of the Matrix : ";
    cin>>r>>c;
    int mat1[r][c];
    cout<<"Enter the Matrix : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" Mat["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat1[i][j];
        }
    }
    int mat2[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mat2[j][i] = mat1[i][j];
        }
    }
    cout<<"The Matrix Before Transpose is : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" "<<mat1[i][j];
        }
        cout<<endl;
    }
    cout<<"The Matrix After Transpose is : "<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<" "<<mat2[i][j];
        }
        cout<<endl;
    }
    return 0;
}
