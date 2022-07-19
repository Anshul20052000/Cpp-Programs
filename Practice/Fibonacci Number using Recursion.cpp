#include<iostream>
using namespace std;
unsigned long long int fib(unsigned long long int n)
{
    if(n<=1)
    {
        return (n);
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}
int main()
{
    unsigned long long int n;
    cout<<"Enter the Term for Fibonacci Number : ";
    cin>>n;
    cout<<"The "<<n<<" Fibonacci Number is : "<<fib(n)<<endl;
    return 0;
}
