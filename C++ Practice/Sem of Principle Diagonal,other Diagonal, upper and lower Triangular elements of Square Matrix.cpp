#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Order of the Square Matrix : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the Elements of the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" Arr["<<i+1<<"]["<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }
    cout<<"The Matrix is : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" "<<arr[i][j];
        }
        cout<<endl;
    }
    int pd = 0,sd = 0,ut = 0,lt = 0,al = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                pd += arr[i][j];
            if(i+j == n-1)
                sd += arr[i][j];
            if(i <= j)
                ut += arr[i][j];
            if(i >= j)
                lt += arr[i][j];
            al += arr[i][j];
        }
    }
    cout<<"Sum of All the Elements : "<<al<<endl;
    cout<<"Sum of Elements of Principle Diagonal : "<<pd<<endl;
    cout<<"Sum of Elements of Other Diagonal : "<<sd<<endl;
    cout<<"Sum of Elements of Upper Triangular Matrix : "<<ut<<endl;
    cout<<"Sum of Elements of Lower Triangular Matrix : "<<lt<<endl;
    return 0;
}
