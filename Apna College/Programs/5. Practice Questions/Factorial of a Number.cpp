#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    unsigned long long int fact = 1;
    for(int i=1;i<=num;i++)
    {
        fact *= i;
    }
    cout<<"The Factorial of "<<num<<" is : "<<fact<<endl;
    return 0;
}
