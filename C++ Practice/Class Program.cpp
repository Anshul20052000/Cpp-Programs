#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setdata(int x,int y);
        void showdata()
        {
            cout<<"A = "<<a<<endl;
            cout<<"B = "<<b<<endl;
        }
};
void Complex::setdata(int x,int y)
        {
            a=x;
            b=y;
        }
int main()
{
    Complex c1;
    cout<<sizeof(c1)<<endl;
    int a,b;
    cout<<"Enter the Value of A and B : "<<endl;
    cin>>a>>b;
    c1.setdata(a,b);
    c1.showdata();
    return 0;
}
