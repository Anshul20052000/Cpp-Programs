#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cout<<"Enter the Two Numbers : "<<endl;
    cin>>A>>B;
    char ch;
    cout<<"Enter the Operation (+,-,*,/,%) : ";
    cin>>ch;
    switch(ch)
    {
    case '+' :
        cout<<"Addition Operation"<<endl;
        cout<<A<<" + "<<B<<" = "<<A+B<<endl;
        break;
    case '-' :
        cout<<"Subtraction Operation"<<endl;
        cout<<A<<" - "<<B<<" = "<<A-B<<endl;
        break;
    case '*' :
        cout<<"Multiplication Operation"<<endl;
        cout<<A<<" * "<<B<<" = "<<A*B<<endl;
        break;
    case '/' :
        cout<<"Division Operation"<<endl;
        cout<<A<<" / "<<B<<" = "<<A/B<<endl;
        break;
    case '%' :
        cout<<"Modulus Operation"<<endl;
        cout<<A<<" % "<<B<<" = "<<A%B<<endl;
        break;
    default:
        cout<<"Wrong Choice..."<<endl;
    }
    return 0;
}
