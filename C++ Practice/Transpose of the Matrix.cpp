#include<iostream>
using namespace std;
int main()
{
    int r,c,a[20][20],b[20][20];
    cout<<"Enter the Rows and Columns of the Matrix : "<<endl;
    cin>>r>>c;
    if(r==c)
    {
        cout<<"So Transpose of Matrix can be found out! "<<endl;
    }
    else
    {
        cout<<"The Transpose cannot be found out!... "<<endl;
    }
    cout<<"Enter the Matrix : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }
    cout<<"The Matrix you Entered is : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    cout<<"The Transpose of the Matrix is : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<b[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
