#include<iostream>
using namespace std;
class Value
{
    int a,b;
public:
    void get()
    {
        cout<<"Enter the Value A : ";
        cin>>a;
        cout<<"Enter the Value B : ";
        cin>>b;
    }
    void Greater()
    {
        if(a>b)
            cout<<a<<" is Greater than "<<b<<endl;
        else
            cout<<b<<" is Greater than "<<a<<endl;
    }
};
int main()
{
    Value v1;
    v1.get();
    v1.Greater();
    return 0;
}
