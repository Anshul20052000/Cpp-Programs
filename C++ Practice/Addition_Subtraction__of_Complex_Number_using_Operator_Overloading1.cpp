#include<iostream>
using namespace std;
class Complex
{
    int a,b;
public:
    Complex()
    {

    }
    void input()
    {
        cout<<"Enter the Complex Number "<<endl;
        cout<<"Real Part = "<<endl;
        cin>>a;
        cout<<"Imaginary Part = "<<endl;
        cin>>b;
    }
    void display()
    {
        cout<<endl;
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return (temp);
    }

    Complex operator *(Complex c)
    {
        Complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return (temp);
    }
    void output()
    {
        if(b<0)
        {
            cout<<a<<b<<"i"<<endl;
        }
        else
        {
            cout<<a<<"+"<<b<<"i"<<endl;
        }
    }
};
int main()
{
    Complex c1,c2,ans;
    cout<<"Enter the First Complex Number "<<endl;
    c1.input();
    cout<<"Enter the Second Complex Number "<<endl;
    c2.input();
    cout<<"The Complex Number you Entered is "<<endl;
    c1.display();
    c2.display();
    cout<<endl;
    ans=c1+c2;
    cout<<"Sum of the Complex Numbers is "<<endl;
    ans.display();
    cout<<endl;
    ans=c1*c2;
    cout<<"Subtraction of the Complex Numbers is "<<endl;
    ans.output();
    return 0;


}
