#include<iostream>
using namespace std;
int main()
{
    int n,strong = 0;
    cout<<"Enter a Number : ";
    cin>>n;
    int temp,flag;
    flag = n;
    while(n != 0)
    {
        int fact = 1;
        temp = n%10;
        for(int i=temp;i>=1;i--)
        {
            fact *= i;
        }
        strong += fact;
        n /= 10;
    }
    if(flag == strong)
    {
        cout<<"The Given Number is a Strong Number..."<<endl;
    }
    else
    {
        cout<<"The Given Number is not a Strong Number..."<<endl;
    }
    return 0;
}
