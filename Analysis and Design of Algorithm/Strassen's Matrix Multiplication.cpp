#include<iostream>
#include<conio.h>
using namespace std;

void power_of_2(int n);
void input_rc(int r1,int c1,int r2,int c2);
void input_matrix(int mat[4][4]);
void show_matrix(int matrix[4][4]);
void add_matrix(int x[2][2], int y[2][2], int z[2][2]);
void sub_matrix(int x[2][2], int y[2][2], int z[2][2]);
void mult_matrix(int a[2][2], int b[2][2],int c[2][2]);
void Strassens(int a[4][4] , int b[4][4] , int c[4][4]);


int main()
{
    int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
    input_rc(r1,c1,r2,c2);
    int a[r1][c1] = {0} , b[r2][c2] = {0} , c[r1][c2] = {0};
    cout<<"Enter the Matrix A : "<<endl;
    input_matrix(r1,c1,a);
    cout<<"\nEnter the Matrix B : "<<endl;
    input_matrix(r2,c2,b);
    cout<<"\nMatrix A : "<<endl;
    show_matrix(r1,c1,a);
    cout<<"\nMatrix B : "<<endl;
    show_matrix(r2,c2,b);
    Strassens(r,a,b,c);
    cout<<"\nPress Enter to Continue..."<<endl;
    getch();
    cout<<"\nMatrix after applying Strassen's Matrix Multiplication  : "<<endl;
    show_matrix(c);
    return 0;
}

void power_of_2(int n)
{
    if(n = 1)
    {
        return true;
    }
    else if(n%2 != 0 || n==0)
    {
        return false;
    }
    power_of_2(n/2);
}

void input_rc(int r1,int c1,int r2,int c2)
{
    while(true)
    {
        cout<<"\nNOTE : The Matrix should be of form N * N and N should be of Power of 2"<<endl;
        cout<<"\nEnter the Number of Rows and Columns of Matrix A : ";
        cin>>r1>>c1;
        cout<<"Enter the Number of Rows and Columns of Matrix B : ";
        cin>>r2>>c2;
        if((r1 != c1) && (r2 != c2))
        {
            cout<<"Matrix is Invalid...Try Again"<<endl;
        }
        else if(c1 != r1)
        {
            cout<<"Columns of Matrix A is not Equal to row of Matrix B ..."<<endl;
        }
        else if(!power_of_2(r1))
        {
            cout<<"The specs of Matrix Entered is not a Power of 2..."<<endl;
        }
        else
        {
            break;
        }
    }
}

void input_matrix(int r, int c, int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" [ "<<i+1<<" , "<<j+1<<" ] = ";
            cin>>mat[i][j];
        }
    }
}

void show_matrix(int r,int c,int matrix[r][c])
{
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<" ";
        for(int j=0;j<c;j++)
        {
            cout<<"M["<<i+1<<"]["<<j+1<<"] = "<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void add_matrix(int x[2][2], int y[2][2], int z[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            z[i][j] = x[i][j] + y[i][j];
        }
    }
}

void sub_matrix(int x[2][2], int y[2][2], int z[2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            z[i][j] = x[i][j] - y[i][j];
        }
    }
}

void mult_matrix(int a[2][2], int b[2][2],int c[2][2])
{
    int p1, p2, p3, p4, p5, p6, p7;

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
}

void Strassens(int r, int a[r][r] , int b[r][r] , int c[r][r])
{
    int a00[2][2] = {0} ,a01[2][2] = {0}, a10[2][2] = {0}, a11[2][2] = {0}, b00[2][2] = {0}, b01[2][2] = {0}, b10[2][2] = {0}, b11[2][2] = {0};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            a00[i][j] = a[i][j];
            b00[i][j] = b[i][j];
            a01[i][j] = a[i][j+2];
            b01[i][j] = b[i][j+2];
            a10[i][j] = a[i+2][j];
            b10[i][j] = b[i+2][j];
            a11[i][j] = a[i+2][j+2];
            b11[i][j] = b[i+2][j+2];
        }
    }

    int temp1[2][2] = {0} , temp2[2][2] = {0} ;
    int p1[2][2] = {0}, p2[2][2] = {0}, p3[2][2] = {0}, p4[2][2] = {0}, p5[2][2] = {0}, p6[2][2] = {0}, p7[2][2] = {0};

    //case 1
    sub_matrix(b01,b11,temp1);
    mult_matrix(a00,temp1,p1);

    //case 2
    add_matrix(a00,a01,temp1);
    mult_matrix(temp1,b11,p2);

    //case 3
    add_matrix(a10,a11,temp1);
    mult_matrix(temp1,b00,p3);

    //case 4
    sub_matrix(b10,b00,temp1);
    mult_matrix(a11,temp1,p4);

    //case 5
    add_matrix(a00,a11,temp1);
    add_matrix(b00,b11,temp2);
    mult_matrix(temp1,temp2,p5);

    //case 6
    sub_matrix(a01,a11,temp1);
    add_matrix(b10,b11,temp2);
    mult_matrix(temp1,temp2,p6);

    //case 7
    sub_matrix(a00,a10,temp1);
    add_matrix(b00,b01,temp2);
    mult_matrix(temp1,temp2,p7);

    int c00[2][2] = {0}, c01[2][2] = {0}, c10[2][2] = {0}, c11[2][2] = {0};

    //for c00
    add_matrix(p4,p5,temp1);
    sub_matrix(p6,p2,temp2);
    add_matrix(temp1,temp2,c00);

    //for c01
    add_matrix(p1,p2,c01);

    //for c10
    add_matrix(p3,p4,c10);

    //for c11
    sub_matrix(p1,p3,temp1);
    sub_matrix(p5,p7,temp2);
    add_matrix(temp1,temp2,c11);

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j] = c00[i][j];
            c[i][j+2] = c01[i][j];
            c[i+2][j] = c10[i][j];
            c[i+2][j+2] = c11[i][j];
        }
    }

}








