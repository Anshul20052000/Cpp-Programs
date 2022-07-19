#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the Number of Rows and Columns : ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter the Matrix Elements : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" Arr["<<i+1<<"]["<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }
    cout<<"The Array Elements : "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<" Arr["<<i+1<<"]["<<j+1<<"] : "<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    int arr1[3][4] = { {1,2,3,4}, {1,2,3,4} , {4,3,2,1} };
    cout<<"The Array Elements : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<" Arr["<<i+1<<"]["<<j+1<<"] : "<<arr1[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
