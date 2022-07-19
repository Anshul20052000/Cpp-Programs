#include<iostream>
using namespace std;
long long fact(int a);
int main()
{
    int n;
    long long f;
    cout<<"Enter the Number to which the Factorial is to be found out : "<<endl;
    cin>>n;
    f = fact(n);
    cout<<"The Factorial of "<<n<<" is : "<<f<<endl;
    return 0;
}
long long fact(int a)
{
    long long temp;
    if(a==1)
    {
        return(a);
    }
    temp=a*fact(a-1);
    return(temp);
}
