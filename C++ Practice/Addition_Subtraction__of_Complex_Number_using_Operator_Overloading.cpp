#include<iostream>
using namespace std;
class Complex
{
    int a,b;
public:
    Complex()
    {
        a=0;
        b=0;
    }
    void input()
    {
        cout<<"Enter the Complex Number "<<endl;
        cout<<"Real Part = ";
        cin>>a;
        cout<<"Imaginary Part = ";
        cin>>b;

    }
    void display()
    {
        cout<<"Complex Number  "<<a<<" + "<<b<<"i"<<endl;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return (temp);
    }
    Complex operator -(Complex c)
    {
        Complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return (temp);
    }

};
int main()
{
    Complex c1,c2,ans;
    cout<<"Enter the First Complex Number "<<endl;
    c1.input();
    cout<<"Enter the Second Complex Number "<<endl;
    c2.input();
    c1.display();
    c2.display();
    ans=c1+c2;
    cout<<endl;
    ans.display();
    ans=c1-c2;
    cout<<endl;
    ans.display();
    return 0;
}
