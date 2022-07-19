#include<iostream>
using namespace std;
typedef unsigned long long int ll;
ll fib(long N);
int main()
{
    long n;
    cout<<"Enter the Number of Elements of Fibonacci Series : ";
    cin>>n;
    cout<<"The "<<n<<"th Fibonacci Number is : "<<fib(n)<<endl;
    return 0;
}
ll fib(long N)
{
    if(N == 0)
        return 0;
    else if(N == 1)
        return 1;
    else
        return (fib(N-1) + fib(N-2));
}
