#include<iostream>
using namespace std;
int main()
{
    int arr[100][100], row, col;
    cout<<"Enter the Rows and Columns of the Matrix : ";
    cin>>row>>col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ele;
    int flag = false;
    cout<<"Enter the Element to be Searched : ";
    cin>>ele;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == ele)
            {
                cout<<"Element is Found at : "<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
    if(!flag)
        cout<<"Element not Found..."<<endl;
    return 0;
}
