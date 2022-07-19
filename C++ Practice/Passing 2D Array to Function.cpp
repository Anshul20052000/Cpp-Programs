#include<iostream>
using namespace std;
const int m = 3,n = 3;
void show(int arr[m][n]);
int main()
{
    int arr[m][n];
    cout<<"Enter the Elements of the Array : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" Enter ["<<i+1<<"]["<<j+1<<"] Element : ";
            cin>>arr[i][j];
        }
    }
    show( arr );
    return 0;
}
void show(int arr[m][n])
{
    cout<<"The Array Elements are : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Element ["<<i+1<<"]["<<j+1<<"] is : "<<arr[i][j]<<endl;
        }
    }
}
