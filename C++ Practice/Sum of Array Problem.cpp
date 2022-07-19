#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the Array Elements : ";
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Ar["<<i+1<<"] : ";
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum += arr[i];
    }
    cout<<"The Sum of the Array Elements : "<<sum;
    cout<<endl;
    return 0;
}
