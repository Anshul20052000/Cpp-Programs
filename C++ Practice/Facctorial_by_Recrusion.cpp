#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    x:
    int n;
    cout<<"Enter a Number "<<endl;
    cin>>n;
    cout<<"The Factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"Do you want Another Chance "<<endl;
    char ch;
    if(ch=='y'||ch=='Y')
    {
        goto x;
    }
    return 0;
}
int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);

    }
    else
    {
        return 1;
    }
}
