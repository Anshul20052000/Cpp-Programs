#include<iostream>
typedef unsigned long long int ll;
using namespace std;
ll fact(int a);
int main()
{
    int a;
    ll f;
    cout<<"Enter the Number for which you want to Find out Factorial : ";
    cin>>a;
    f = fact(a);
    cout<<"The Factorial of "<<a<<" is : "<<f<<endl;
    return 0;
}
ll fact(int a)
{
    ll temp = 1;
    for(int i = a;i>=1;i--)
    {
        temp *= i;
    }
    return temp;
}
