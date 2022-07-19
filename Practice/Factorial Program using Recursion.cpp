#include<iostream>
using namespace std;
unsigned long factorial(unsigned long n)
{
    if(n == 1)
    {
        return(1);
    }
    else
    {
        return(n*factorial(n-1));
    }
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
