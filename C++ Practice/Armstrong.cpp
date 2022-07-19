#include<iostream>
using namespace std;
int main()

{
    int n,num,result=0,rem;
    cout<<"Enter the Number "<<endl;
    cin>>n;
    num=n;
    while(num!=0)
    {
        rem=num%10;
        result+=(rem*rem*rem);
        num=num/10;
    }
    if(result==n)
    {
        cout<<"The Entered Number is an Armstrong Number "<<endl;
    }
    else
    {
        cout<<"The Entered Number is not an Armstrong Number "<<endl;
    }
    return 0;
}
