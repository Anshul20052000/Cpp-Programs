#include<iostream>
using namespace std;

void subarrWithSum(int arr[], int len, int reqSum)
{
    int i=0, j=0, st=-1, ed=-1, sum=0;
    while(j<len && sum + arr[j]<=reqSum)
    {
        sum += arr[j];
        j++;
    }
    if(sum == reqSum)
    {
        cout<<i+1<<" "<<j<<endl;
        return;
    }
    while(j<len)
    {
        sum += arr[j];
        while(sum>reqSum)
        {
            sum -= arr[i];
            i++;
        }
        if(sum == reqSum)
        {
            st = i+1;
            ed = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<ed<<endl;
    return;
}

int main()
{
    int arr[100], len, reqSum = 0;
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    cout<<"Enter the Array : "<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Required Sum : ";
    cin>>reqSum;
    subarrWithSum(arr, len, reqSum);
    cout<<endl;
    return 0;
}
