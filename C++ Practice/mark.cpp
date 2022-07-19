#include<iostream>
using namespace std;
int main()
{
    int ar[20],n;
    cout<<"Enter the Length of the Array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Value "<<i+1<<"  ";
        cin>>ar[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(ar[0]<ar[i])
        {
            ar[0]=ar[i];
        }
    }
    cout<<"The Largest Number in the Array is "<<ar[0]<<endl;
    return 0;
}
