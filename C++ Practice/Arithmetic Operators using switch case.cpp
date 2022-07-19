#include<iostream>
using namespace std;

int main()
{
    int a,b,res;
    char op;
    cout<<"Enter the Two Numbers : ";
    cin>>a>>b;
    cout<<"Enter the Operation which has to be Performed(+,-,*,/,%) : ";
    cin>>op;
    switch(op)
    {
    case '+' :
        res = a + b ;
        break;

    case '-' :
        res = a - b ;
        break;

    case '*' :
        res = a * b ;
        break;

    case '/' :
        res = a / b ;
        break;

    case '%' :
        res = a % b ;
        break;

    default:
        cout<<"Wrong Choice..."<<endl;
    }
    cout<<"Result : "<<res<<endl;
    return 0;
}
