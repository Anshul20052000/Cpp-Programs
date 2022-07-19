#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the Two Numbers : ";//Taking the  Two Numbers from the User
    cin >> num1 >> num2;
    int sum;
    /*Finding the Sum of the Tow Number from Addition Operator
    And then Displaying it on the Screen
    with the help of the cout statement*/
    sum = num1 + num2;
    cout<<"The Sum of the Two Numbers is :\n";
    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
    return 0;
}

