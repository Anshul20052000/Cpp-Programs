#include<iostream>
using namespace std;
int main()
{
    x:
    int r,c,a[100][100],b[100][100],sum[100][100];
    cout<<"Enter the Number of Rows in the Matrix"<<endl;
    cin>>r;
    cout<<"Enter the Number of Columns in the Matrix"<<endl;
    cin>>c;
    cout<<endl<<"Enter the 1st Matrix : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Element A["<<i+1<<"]["<<j+1<<"] :  ";
            cin>>a[i][j];
            cout<<endl;
        }
    }
    cout<<endl<<"Enter the 2nd Matrix : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Element B["<<i+1<<"]["<<j+1<<"] :  ";
            cin>>b[i][j];
            cout<<endl;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"The Sum of Two Matrix is : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"   "<<sum[i][j];
        }
        cout<<endl;
    }
    cout<<"Do you Want Another Chance[Y/N]!!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
