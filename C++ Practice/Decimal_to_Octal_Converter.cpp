#include<iostream>
using namespace std;
int octal(int );
int main()
{
    int n;
    cout<<"Enter a Decimal Number "<<endl;
    cin>>n;
    cout<<"The Decimal Number is "<<n<<" is converted into Octal is "<<octal(n)<<endl;
    return 0;
}
int octal(int n)
{
    int test=1,Octal=0,i=1,reminder=0;
    while(n!=0)
    {
        reminder=n%8;
        n/=8;
        cout<<"Test "<<test<<" Reminder : "<<reminder<<" Quotient : "<<n<<endl;
        Octal+=reminder*i;
        i*=10;
        test++;

    }
    return (Octal);
}
