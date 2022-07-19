#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order of the Square Matrix : ";
    cin>>n;
    int mat[n][n];
    cout<<"Enter the Matrix : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" Mat["<<i+1<<"]["<<j+1<<"] : ";
            cin>>mat[i][j];
        }
    }
    cout<<"The Matrix Before Transpose is : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"  "<<mat[i][j];
        }
        cout<<endl;
    }
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
    }
    cout<<"The Matrix After Transpose is : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"  "<<mat[i][j];
        }
        cout<<endl;
    }
    return 0;
}

