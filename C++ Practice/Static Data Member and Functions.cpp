#include<iostream>
using namespace std;
class Count
{
    int code;
    static int Count_var;
public:
    Count()
    {
        code = ++Count_var;
    }
    void GetCode()
    {
        cout<<"The Object Code Number is : "<<code<<endl;
    }
    static void GetCountNumber()
    {
        cout<<"The Total Object are : "<<Count_var<<endl;
    }
};
int Count::Count_var;
int main()
{
    Count c1,c2;
    c1.GetCode();
    c1.GetCountNumber();
    c2.GetCode();
    c2.GetCountNumber();
    return 0;
}
