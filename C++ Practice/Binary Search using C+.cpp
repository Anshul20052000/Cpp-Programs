#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Elements in the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the Array (Note : Elements Should be in Ascending Order Only) : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" Arr["<<i+1<<"] : ";
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter the Element to be Searched : ";
    cin>>ele;
    int lb = 0,ub = n,mid,flag = -1;
    while(lb<ub)
    {
        mid = (lb+ub)/2;
        if(arr[mid] == ele)
           {
               flag = mid + 1;
               break;
           }
        else if(arr[mid] > ele)
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    if(flag == -1)
        cout<<"Element not Found in the Array..."<<endl;
    else
        cout<<"Element Found in the Array and is Found at "<<flag<<endl;
    return 0;
}
