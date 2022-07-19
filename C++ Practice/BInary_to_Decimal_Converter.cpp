#include<iostream>
#include<cmath>
using namespace std;
int decimal(long long);
int  main()
{
    long long n;
    cout<<"Enter a Binary Number "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Binary Number "<<n<<" is Converted into Decimal is "<<decimal(n)<<endl;
    return 0;
}
int decimal(long long n)
{
    int decimal=0,i=0,reminder=0;
    while (n!=0)
    {
        reminder=n%10;
        n/=10;
        decimal+=reminder*pow(2,i);
        ++i;
    }
    return (decimal);
}
