#include<iostream>
using namespace std;
int main()
{
    int r,c,a[100][100],t[100][100];
    x:
    cout<<"Enter the Rows of the Multidimensional Matrix"<<endl;
    cin>>r;
    cout<<"Enter the Columns of the Multidimensional Matrix"<<endl;
    cin>>c;
    cout<<"Enter the Matrix "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Element A["<<i+1<<"]["<<j+1<<"] :";
            cin>>a[i][j];
            cout<<endl;
        }
    }
    cout<<"Matrix Before Transpose "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"  "<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"The Matrix After Transpose "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    for(int i=0;i<c;i++)
    {
        for( int j=0;j<r;j++)
        {
            cout<<"  "<<t[i][j];
        }
        cout<<endl;
    }
    cout<<"Do you want Another Chance!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
    }
