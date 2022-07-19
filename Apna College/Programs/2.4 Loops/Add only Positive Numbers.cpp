#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a Number : ";
    cin>>n;
    while(n>=0)
    {
        sum += n;
        cout<<"Enter a Number : ";
        cin>>n;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}
