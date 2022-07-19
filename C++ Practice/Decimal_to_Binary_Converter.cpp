#include<iostream>
using namespace std;
long long binary(int);
int main()
{
    x:
    int n;
    cout<<"Enter the Decimal Number "<<endl;
    cin>>n;
    cout<<"The Decimal Number "<<n<<" is Converted into Binary "<<binary(n)<<endl;
    cout<<"Do you want Another Chance!!!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
long long binary(int n)
{
    long long Binary=0,test=1,reminder=0,i=1;
    while(n!=0)
    {
        reminder=n%2;
        n/=2;
        cout<<"Test "<<test<<" Reminder : "<<reminder<<" Quotient : "<<n<<endl;
        Binary+=reminder*i;
        i*=10;
        test++;
    }
    return (Binary);
}
