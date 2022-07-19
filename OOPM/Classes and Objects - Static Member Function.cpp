#include<iostream>
using namespace std;
class Example
{
    int n;
    static int number;
public:
    void setdata()
    {
        n = ++number;
    }
    void show()
    {
        cout<<"Value of N is : "<<n<<endl;
    }
    static void show_number()
    {
        cout<<"Value of Number is : "<<number<<endl;
    }
};
int Example :: number;
int main()
{
    Example::show_number();
    Example s1,s2;
    s1.setdata();
    Example::show_number();
    s2.setdata();
    s1.show();
    s2.show();
    s1.show_number();
    s2.show_number();
//    Example::number=10;
    Example::show_number();
    return 0;
}
