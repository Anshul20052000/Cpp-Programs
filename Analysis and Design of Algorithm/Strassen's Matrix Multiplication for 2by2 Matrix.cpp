#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[2][2] , b[2][2] , c[2][2];
    int p1, p2, p3, p4, p5, p6, p7;
    cout<<"Enter the First Matrix : "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"Enter the Second Matrix : "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"B["<<i+1<<"]["<<j+1<<"] = ";
            cin>>b[i][j];
        }
        cout<<endl;
    }

    cout<<"The Matrix A is : \n"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"] = "<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"The Matrix B is : \n"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"B["<<i+1<<"]["<<j+1<<"] = "<<b[i][j]<<"\t";
        }
        cout<<endl;
    }

    p1 = a[0][0] * ( b[0][1] - b[1][1] );
    p2 = b[1][1] * ( a[0][0] + a[0][1] );
    p3 = b[0][0] * ( a[1][0] + a[1][1] );
    p4 = a[1][1] * ( b[1][0] - b[0][0] );
    p5 = ( a[0][0] + a[1][1] ) * ( b[0][0] + b[1][1] );
    p6 = ( a[0][1] - a[1][1] ) * ( b[1][0] + b[1][1] );
    p7 = ( a[0][0] - a[1][0] ) * ( b[0][0] + b[0][1] );

    c[0][0] = p4 + p5 + p6 - p2;
    c[0][1] = p1 + p2;
    c[1][0] = p3 + p4;
    c[1][1] = p1 - p3 + p5 - p7;

    char ch;
    cout<<"\nPress Enter to Continue..."<<endl;
    getch();
    cout<<"\nThe Final Matrix is : \n"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"C["<<i+1<<"]["<<j+1<<"] = "<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
