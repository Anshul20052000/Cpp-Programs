#include<iostream>
#include<cmath>
using namespace std;
int octal(long long);
int main()
{
    x:
    long long n;
    cout<<"Enter a Binary Number "<<endl;
    cin>>n;
    while(n%10>1)
    {
        cout<<"You Entered a wrong Number Retype it "<<endl;
        cout<<"Enter the Binary Number Again"<<endl;
        cin>>n;
    }
    cout<<endl<<"The Binary Number "<<n<<" = "<<octal(n)<<" in Octal "<<endl;
    cout<<"Do you want Another Chance!!!"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
int octal (long long n)
{
    int reminder=0,i=0,value=0;
    while(n!=0)
    {
     reminder=n%10;
     n/=10;
     value+=reminder*pow(2,i);
     ++i;
    }
    cout<<"The Number in Decimal is "<<value<<endl;
    reminder=0;
    int test=1,j=1,temp=0;
    while(value!=0)
    {
        reminder=value%8;
        value/=8;
        cout<<"Test "<<test<<" : "<<" Reminder : "<<reminder<<"  Quotient : "<<value<<endl;
        temp+=reminder*j;
        j*=10;
        ++test;
    }
    return (temp);
}
