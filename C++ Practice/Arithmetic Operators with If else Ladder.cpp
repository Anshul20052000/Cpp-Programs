#include<iostream>
using namespace std;

int main()
{
    int a,b,res;
    char op;
    cout<<"Enter the two Numbers : ";
    cin>>a>>b;
    cout<<"Enter which Operation you want to Perform(+,-,*,/,%) : ";
    cin>>op;
    if(op=='+')
        res = a+b;
    else if(op=='-')
        res = a-b;
    else if(op=='*')
        res = a*b;
    else if(op=='/')
        res = a/b;
    else if(op=='%')
        res = a%b;
    else
        cout<<"Wrong Choice Selected..."<<endl;

    cout<<res<<endl;
    return 0;
}
