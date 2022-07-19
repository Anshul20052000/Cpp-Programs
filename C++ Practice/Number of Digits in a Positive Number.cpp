#include<iostream>
using namespace std;
int main()
{
    long long int num,temp=0;
    cout<<"Enter a Positive Number : ";
    cin>>num;
    while(num != 0)
    {
        num/=10;
        temp+=1;
    }
    cout<<"The Number of Digits in Number : "<<temp<<endl;
    return 0;
}
