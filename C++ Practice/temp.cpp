#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Elements in the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements [Note : Enter the Array Elements in Ascending Order Only] : ";
    for(int i=0;i<n;i++)
    {
        cout<<" Arr["<<i+1<<"] : ";
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter the Element to be Searched : ";
    cin>>ele;
    int flag = -1,lb = 0,ub = n,mid;
    while(lb<ub)
    {
        mid = (lb+ub)/2;
        if(arr[mid] == ele)
        {
            flag = mid + 1;
            break;
        }
        else if(arr[mid] < ele)
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    if(flag == -1)
    {
        cout<<"The Element not Found in the Array..."<<endl;
    }
    else
    {
         cout<<"The Element found in the Array at Position "<<flag<<endl;
    }
    return 0;

}
