#include<iostream>
using namespace std;
class account
{
    int bal;
    static float a;
public:
    void setdata(int b)
    {
        bal=b;
    }
    static void setstadata(float c)
    {
        a=c;
    }
    void display()
    {
        cout<<bal<<endl;
        cout<<a<<endl;
    }
};
float account :: a=3.5;
int main()
{
    account a1;
    a1.display();
    a1.setdata(4.5);
    account::setstadata(400.5);
    a1.display();

    return 0;
}
