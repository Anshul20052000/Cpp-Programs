#include<iostream>
#include<cmath>
using namespace std;
long long binary (int);
int main()
{
    int n;
    cout<<"Enter the Octal Number "<<endl;
    cin>>n;
    cout<<"The Octal Number "<<n<<" = "<<binary(n)<<" in Binary "<<endl;
    return 0;

}
long long binary(int n)
{
    int reminder=0,value=0,i=0;
    while(n!=0)
    {
        reminder=n%10;
        n/=10;
        value+=reminder*pow(8,i);
        ++i;
    }
    reminder=0;
    cout<<"The Decimal Conversion is "<<value<<endl;
    long long test=1,j=1;
    long long temp=0;
    while (value!=0)
    {
        reminder=value%2;
        value/=2;
        cout<<"Test "<<test<<"  Reminder =  "<<reminder<<"  Quotient : "<<value<<endl;
        temp+=reminder*j;
        j*=10;
        ++test;
    }
    return (temp);
}
