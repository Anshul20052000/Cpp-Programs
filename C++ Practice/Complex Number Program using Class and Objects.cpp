#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setdata()
    {
       cout<<"Enter the Value of A :"<<endl;
       cin>>a;
       cout<<"Enter the Value of B : "<<endl;
       cin>>b;
    }
    void display()
    {
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return (temp);
    }
};
int main()
{
    Complex c1,c2,c3;
    cout<<"Object 1 : "<<endl;
    c1.setdata();
    c1.display();
    cout<<"Object 2 : "<<endl;
    c2.setdata();
    c2.display();
    c3=c1.add(c2);
    cout<<"After Adding the Value of Object 1 and 2 : "<<endl;
    c3.display();
    return 0;
}
