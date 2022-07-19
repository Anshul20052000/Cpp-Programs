#include<iostream>
using namespace std;
int main()
{
    int arr[100][100], row, col;
    cout<<"Enter the Rows and Columns of the Array : ";
    cin>>row>>col;
    cout<<"Enter the Array : "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ele;
    cout<<"Enter the Element to be Searched : ";
    cin>>ele;
    bool flag = false;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == ele)
            {
                flag = true;
                cout<<"Element Found at Array["<<i<<"]["<<j<<"]"<<endl;
            }
        }
    }
    if(!flag)
        cout<<"Element not Found..."<<endl;
    return 0;
}
