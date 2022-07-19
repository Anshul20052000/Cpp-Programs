#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"The Value of A : ";
    cin>>a;
    cout<<"The Value of B : ";
    cin>>b;
    int num1,num2;
    c = (num1 = a , num2 = b , num1 + num2);
    cout<<"The Value of C : "<<c<<endl;

    cout<<"Enter a Value : ";
    cin>>c;
    int sq,cube;
    sq = (c * c) , cube = ( c * c * c );
    cout<<"The Square of Number is : "<<sq<<endl;
    cout<<"The Cube of Number is : "<<cube<<endl;
    return 0;
}
