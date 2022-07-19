#include<iostream>
#include<climits>
using namespace std;

int FirstRepeatingElement(int arr[], int len)
{
    int MinI = 99999;
    int minIdxs[MinI];
    for(int i=0;i<MinI;i++)
    {
        minIdxs[i] = -1;
    }
    //cout<<"hello"<<endl;
    for(int i=0;i<len;i++)
    {
        if(minIdxs[arr[i]] != -1)
        {
            MinI = min(MinI, minIdxs[arr[i]]);
        }
        else
        {
            minIdxs[arr[i]] = i;
        }
    }
    return MinI;
}

int main()
{
    int arr[100], len;
    //cout<<INT_MAX<<endl;
    cout<<"Enter the Length of the Array : ";
    cin>>len;
    cout<<"Enter the Array : ";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"The First Repeating Element is : ";
    int res = FirstRepeatingElement(arr, len);
    if(res == INT_MAX)
        cout<<"No Element Found..."<<endl;
    else
        cout<<res+1<<" : "<<arr[res]<<endl;
    return 0;
}
