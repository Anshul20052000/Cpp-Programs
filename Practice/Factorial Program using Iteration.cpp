#include<iostream>
using namespace std;
unsigned long factorial(unsigned long n)
{
    unsigned long s = 1;
    for(int i=2;i<=n;i++)
    {
        s *= i;
    }
    return s;
}
int main()
{
    unsigned long result,n;
    cout<<"Enter the Number whose Factorial has to be Found out : ";
    cin>>n;
    result = factorial(n);
    cout<<"The Factorial of "<<n<<" is : "<<result<<endl;
    return 0;
}
