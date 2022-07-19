#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double principal , rate , time , compoundInterest , totalAmount;
    cout<<"Enter the Principal : ";
    cin>>principal;
    cout<<"Enter the Rate : ";
    cin>>rate;
    cout<<"Enter the Time : ";
    cin>>time;
    totalAmount = principal * pow(( 1 + (rate/100) ),time);
    compoundInterest = totalAmount - principal;
    cout<<"The Total Amount is : "<<totalAmount<<endl;
    cout<<"The Compound Interest is : "<<compoundInterest<<endl;
    return 0;
}
