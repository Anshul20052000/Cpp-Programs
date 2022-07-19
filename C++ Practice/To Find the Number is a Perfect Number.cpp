#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Positive Number : ";
    cin>>num;
    int sum = 0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }
    if(sum==num)
    {
        cout<<"The Number is a Perfect Number..."<<endl;
    }
    else
    {
        cout<<"The Number is not a Perfect Number..."<<endl;
    }
    return 0;
}
