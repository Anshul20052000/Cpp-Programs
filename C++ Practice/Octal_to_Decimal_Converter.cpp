#include<iostream>
#include<cmath>
using namespace std;
int decimal(int);
int main()
{
    int n;
    cout<<"Enter a Octal Number "<<endl;
    cin>>n;
    cout<<"The Octal Number "<<n<<" is Converted to Decimal is "<<decimal(n)<<endl;
    return 0;

}
int decimal(int n)
{
    int reminder=0,i=0,Decimal=0;
    while(n!=0)
    {
        reminder=n%10;
        n/=10;
        Decimal+=reminder*pow(8,i);
        ++i;
    }
    return (Decimal);
}
