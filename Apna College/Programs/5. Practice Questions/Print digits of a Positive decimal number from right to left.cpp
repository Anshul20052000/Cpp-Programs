#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Decimal Number : ";
    cin>>num;
    int rem;
    while(num>0)
    {
        rem = num%10;
        cout<<rem<<endl;
        num = num/10;
    }
    return 0;
}
