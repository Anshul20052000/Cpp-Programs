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
    if(a == 1)
        return 1;
    return a * fact(a-1);
}

