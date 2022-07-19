#include<iostream>
using namespace std;
int main()
{
    int a[10][10],tr[10][10],r,c;
    cout<<"Enter the Rows of the Matrix you want to Input[<10] : ";
    cin>>r;
    cout<<"Enter the Columns of the Matrix you want to Input[<10] : ";
    cin>>c;
    cout<<"Enter the "<<r<<" x "<<c<<" Matrix"<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<"\nRow "<<i+1<<endl;
        for(int j=0;j<c;j++)
        {
            cout<<"Enter the Element a["<<i+1<<"]["<<j+1<<"] : ";
            cin>>a[i][j];
        }
    }
    cout<<"\nMatrix you Entered is : \n"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"  "<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"\nTransposing Matrix..."<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            tr[j][i]=a[i][j];
        }
    }
    cout<<"\nAfter Transposing the Matrix Becomes : \n"<<endl;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<"  "<<tr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
