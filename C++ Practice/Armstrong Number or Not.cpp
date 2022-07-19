#include<iostream>
using namespace std;
int main()
{
    int n,flag;
    cout<<"Enter a Number : ";
    cin>>n;
    flag = n;
    int sum = 0,temp;
    while(n != 0)
    {
        temp = n%10;
        sum = sum + (temp*temp*temp);
        n/=10;
    }
    if(flag == sum)
    {
        cout<<"The Given Number is a Armstrong Number..."<<endl;
    }
    else
    {
        cout<<"The Given Number is not a Armstrong Number..."<<endl;
    }
    return 0;
}
