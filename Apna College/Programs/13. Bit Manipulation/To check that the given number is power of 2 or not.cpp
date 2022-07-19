#include<iostream>
using namespace std;

bool isPowerOf2(int n)
{
    return(!(n & (n-1)));
}

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    if(isPowerOf2(n))
            cout<<"Power of 2"<<endl;
    else
            cout<<"Not Power of 2"<<endl;
    return 0;
}
