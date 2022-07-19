#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    num += 5;
    cout<<" num += 5  : "<<num<<endl;
    num -= 5;
    cout<<" num -= 5  : "<<num<<endl;
    num *= 5;
    cout<<" num *= 5  : "<<num<<endl;
    num /= 5;
    cout<<" num /= 5  : "<<num<<endl;
    num %= 5;
    cout<<" num %= 5  : "<<num<<endl;
    return 0;
}
