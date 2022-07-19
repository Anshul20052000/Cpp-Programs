//Array should be in ascending Order in both row and Col wise

#include<iostream>
using namespace std;
int main()
{
    int arr[100][100], row, col;
    cout<<"Enter the Rows and Columns of the Matrix : ";
    cin>>row>>col;
    cout<<"Enter the Array (in ascending order) : ";
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
    bool found = false;
    int r = 0, c = col-1;
    while(r<row && c>=0)
    {
        if(arr[r][c] == ele)
        {
            cout<<"Element found at : Arr["<<r<<"]["<<c<<"]"<<endl;
            found = true;
            break;
        }
        else if(arr[r][c] > ele)
            c--;
        else
            r++;
    }
    if(!found)
        cout<<"Element not found..."<<endl;
    return 0;
}
