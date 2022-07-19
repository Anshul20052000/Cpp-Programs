#include<iostream>
using namespace std;
int main()
{
    unsigned long long rev=0,n,digit;
    cout<<"Enter the Number "<<endl;
    cin>>n;
    do
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    while(n!=0);
    cout<<rev<<endl;
    if(n=rev)
    {
        cout<<"The Entered Number is a Palindrome "<<endl;
    }
    else
    {
        cout<<"The Entered Number is not a Palindrome"<<endl;
    }
    return 0;
}

