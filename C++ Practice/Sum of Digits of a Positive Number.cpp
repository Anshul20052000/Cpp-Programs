#include<iostream>
using namespace std;
int main()
{
    long long int  num,temp;
    cout<<"Enter a Positive Number : ";
    cin>>num;
    while(num != 0)
    {
        temp += num%10;
        num = num/10;
    }
    cout<<"The Sum of Digits are : "<<temp<<endl;
    return 0;
}
