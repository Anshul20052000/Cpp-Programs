#include<iostream>
using namespace std;
void input(int m1[10][10],int m2[10][10],int r1,int r2,int c1,int c2)
{
    cout<<"Enter the Matrix 1 : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter the Element A["<<i+1<<"]["<<j+1<<"] : ";
            cin>>m1[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter the Matrix 2 : "<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"Enter the Element B["<<i+1<<"]["<<j+1<<"] : ";
            cin>>m2[i][j];
        }
    }
}
void matrix_multi(int multi[10][10],int m1[10][10],int m2[10][10],int r1,int r2,int c1,int c2)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            multi[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                multi[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
}
void display(int multi[10][10],int r1,int c2)
{
    cout<<"Therefore, The Final Matrix after the Matrix Multiplication is : "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"Element Multi["<<i+1<<"]["<<j+1<<"] : "<<multi[i][j]<<" "<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    x:
    int m1[10][10],m2[10][10],multi[10][10],r1,r2,c1,c2;
    void input(int m1[10][10],int m2[10][10],int r1,int r2,int c1,int c2);
    void matrix_multi(int multi[10][10],int m1[10][10],int m2[10][10],int r1,int r2,int c1,int c2);
    void display(int multi[10][10],int r1,int c2);
    cout<<"Enter the Rows and Columns of the First Matrix : "<<endl;
    cin>>r1>>c1;
    cout<<"Enter the Rows and Columns of the Second Matrix : "<<endl;
    cin>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"The Column of the First Matrix is not Equal to the Second Matrix!!!"<<endl;
        cout<<"Enter the Rows and Columns of the First Matrix Again : "<<endl;
        cin>>r1>>c1;
        cout<<"Enter the Rows and Columns of the Second Matrix Again : "<<endl;
        cin>>r2>>c2;
    }
    input(m1,m2,r1,r2,c1,c2);
    matrix_multi(multi,m1,m2,r1,r2,c1,c2);
    display(multi,r1,c2);
    cout<<"Do you want Another Chance!!![Y/N]"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
