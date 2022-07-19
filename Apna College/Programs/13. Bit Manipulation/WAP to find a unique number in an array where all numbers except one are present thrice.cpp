#include<iostream>
using namespace std;

bool getbit(int num, int pos)
{
    return((num & (1<<pos)) != 0);
}

int setbit(int n, int pos)
{
    return (n | (1<<pos));
}

int main()
{
    int n;
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result = 0;
    for(int i=0;i<64;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if(getbit(arr[j], i))
            {
                sum++;
            }
        }
        if(sum%3 != 0)
        {
            result = setbit(result, i);
        }
    }
    cout<<"The unique element is : "<<result<<endl;
    return 0;
}
