#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    int arms=0, digit, tempNum = num;
    while(tempNum>0)
    {
        digit = tempNum%10;
        arms += pow(digit, 3);
        tempNum /= 10;
    }
    if(arms == num)
        cout<<num<<" is an Armstrong Number..."<<endl;
    else
        cout<<num<<" is not a Armstrong Number..."<<endl;
    return 0;
}
