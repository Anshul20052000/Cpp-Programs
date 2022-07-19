#include<iostream>
using namespace std;
bool isprime(int n)
{
    int i;
    bool prime=true;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            prime=false;
            break;
        }
    }
    return (prime);

}
int main()
{
    int i,n,flag;
    cout<<"Enter a Number "<<endl;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(isprime(i))
        {
            if(isprime(n-i))
            {
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                flag=true;
            }
        }
    }
    if(!flag)
       {
           cout<<n<<"Can't be expressed as a sum of Two Prime Numbers"<<endl;
       }
        return 0;
}
