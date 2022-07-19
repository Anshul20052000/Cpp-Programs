#include<iostream>
using namespace std;
typedef unsigned long long int ll;
ll power(ll X,ll N);
int main()
{
    ll x,n;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Enter the Power : ";
    cin>>n;
    cout<<"The "<<n<<" Power of "<<x<<" : "<<power(x,n)<<endl;
    return 0;
}
ll power(ll X,ll N)
{
    if(N == 0)
        return 1;
    else
        return X * power(X,N-1);
}

