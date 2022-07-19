#include<iostream>
using namespace std;

int main()
{
    int num,rev=0;
    cout<<"Enter a Positive Number : ";
    cin>>num;
    while(num != 0)
    {
        rev = (rev*10) + (num%10);
        num /= 10;
    }
    cout<<"The Reverse Number is : "<<rev<<endl;
    return 0;
}
