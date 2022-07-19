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
    Complex(int A)
    {
        a=A;
    }
    Complex(int A,int B)
    {
        a=A;
        b=B;
    }
    Complex(Complex &C)
    {
        a=C.a;
        b=C.b;
    }
    void display()
    {

        cout<<a<<"  "<<b<<endl;
    }
};
int main()
{
    Complex c1,c2(23),c3(4,7);
    Complex c4(c3);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    return 0;
}
