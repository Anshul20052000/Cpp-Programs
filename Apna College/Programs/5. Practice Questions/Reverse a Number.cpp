#include<iostream>
using namespace std;
int main()
{
    int num,tempNum;
    cout<<"Enter a Number : ";
    cin>>num;
    tempNum = num;
    int newNum = 0,rem;
    while(tempNum>0)
    {
        rem = tempNum%10;
        newNum = newNum*10 + rem;
        tempNum /= 10;
    }
    cout<<"The Reverse of "<<num<<" is "<<newNum<<endl;
    return 0;
}
