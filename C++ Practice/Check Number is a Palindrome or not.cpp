#include<iostream>
using namespace std;
int main()
{
    int num,temp;
    cout<<"Enter a Positive Number : ";
    cin>>num;
    temp = num;
    int rev = 0;
    while(temp != 0)
    {
        rev = (rev*10) + temp%10;
        temp /= 10;
    }
    cout<<"The Reverse Number is : "<<rev<<endl;
    if(rev == num)
    {
        cout<<"The Number is Palindrome Number..."<<endl;
    }
    else
    {
        cout<<"The Number is not a Palindrome Number..."<<endl;
    }
    return 0;
}
