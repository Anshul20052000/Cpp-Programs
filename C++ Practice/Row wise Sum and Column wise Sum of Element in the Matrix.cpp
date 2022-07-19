#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the Order of the Matrix : ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the Elements of the Array : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" Arr["<<i+1<<"]["<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }
    int row[m] = {0},col[n] = {0},sum = 0;
    cout<<"The Matrix is : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            row[i] += arr[i][j];
            col[i] += arr[j][i];
            sum += arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(4)<<arr[i][j];
        }
        cout<<" | "<<row[i]<<endl;
    }
    cout<<"---------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<setw(4)<<col[i];
    }
    cout<<" | "<<sum<<endl;
    return 0;
}
