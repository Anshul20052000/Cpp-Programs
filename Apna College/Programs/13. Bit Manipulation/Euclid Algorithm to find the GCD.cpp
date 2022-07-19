#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem = a%b;
        //cout<<rem<<endl;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a,b;
    cout<<"Enter the Two Numbers : ";
    cin>>a>>b;
    cout<<"The GCD is : "<<gcd(max(a,b), min(a,b))<<endl;
    return 0;
}
