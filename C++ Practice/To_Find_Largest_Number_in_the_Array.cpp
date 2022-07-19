#include<iostream>
using namespace std;
int main()
{
    float temp=0,ar[20],n;
    cout<<"Enter the Length of the Array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Value "<<i+1<<"  ";
        cin>>ar[i];
    }
    temp=ar[0];
    for(int i=1;i<n;i++)
    {
        if(temp<ar[i])
        {
            temp=ar[i];
        }
    }
    cout<<"The Largest Number in the Array is "<<temp<<endl;
    return 0;
}
