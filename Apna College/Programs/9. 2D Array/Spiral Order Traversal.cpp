#include<iostream>
using namespace std;
int main()
{
    int arr[100][100], row, col;
    cout<<"Enter the Rows and Columns of the Matrix : ";
    cin>>row>>col;
    cout<<"Enter the Array : ";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The Matrix entered is : "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nThe Spiral Order Traversal : "<<endl;
    int row_st = 0, col_st = 0, row_end = row-1, col_end = col-1;
    while((row_st <= row_end) && (col_st <= col_end))
    {
        for(int i=col_st;i<=col_end;i++)
        {
            cout<<arr[row_st][i]<<" ";
        }
        row_st++;
        for(int i=row_st;i<=row_end;i++)
        {
            cout<<arr[i][col_end]<<" ";
        }
        col_end--;
        for(int i=col_end;i>=col_st;i--)
        {
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;
        for(int i=row_end;i>=row_st;i--)
        {
            cout<<arr[i][col_st]<<" ";
        }
        col_st++;
    }
    return 0;

}
