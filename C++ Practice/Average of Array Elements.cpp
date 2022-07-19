#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Array Length : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Element ["<<i+1<<"] : ";
        cin>>arr[i];
    }
    int sum = 0,average = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    average = sum/n;
    cout<<"The Sum of the Array Elements is : "<<sum<<endl;
    cout<<"The Average of the Array Elements is : "<<average<<endl;
    return 0;
}
