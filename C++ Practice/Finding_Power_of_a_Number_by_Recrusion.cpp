#include<iostream>
using namespace std;
long long power(long long a,int b);
int main()
{
    long long a;
    int b;
    cout<<"Enter the Base Number "<<endl;
    cin>>a;
    cout<<"Enter the Power "<<endl;
    cin>>b;
    cout<<a<<"^"<<b<<" = "<<power(a,b)<<endl;
    return 0;
}
long long power(long long a,int b)
{
    if(b!=0)
    {
        return (a*power(a,b-1));
    }
    else
    {
        return (1);
    }
}
