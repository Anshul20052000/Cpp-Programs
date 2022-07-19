#include<iostream>
using namespace std;
int main()
{
    int ar[100][100],r,c;
    x:
    cout<<"Enter the Rows of the Matrix "<<endl;
    cin>>r;
    cout<<"Enter the Columns of the Matrix "<<endl;
    cin>>c;
    if(r!=c)
    {
        cout<<"The Entered Rows and Columns are not Equal "<<endl;
        cout<<"Enter the Rows and Columns of the Matrix Again "<<endl;
        goto x;
    }
    cout<<"Enter the Multidimensional Matrix "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Element ["<<i+1<<"]["<<j+1<<"] : ";
            cin>>ar[i][j];
            cout<<endl;
        }
    }
    cout<<"Matrix Before Transpose "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"   "<<ar[i][j];
        }
        cout<<endl;
    }
    int t=0;
    for(int i=0;i<r;i++)
    {
        for(int j=t;j<c;j++)
        {
            int temp;
            temp=ar[i][j];
            ar[i][j]=ar[j][i];
            ar[j][i]=temp;
        }
        t++;
    }
    cout<<"Matrix After Transpose "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"   "<<ar[i][j];
        }
        cout<<endl;
    }
    return 0;
}

