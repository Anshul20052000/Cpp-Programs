#include<iostream>
using namespace std;
class myclass
{
    int a,b,c;
public:
    void show();

};
void myclass::show()
{
    cout<<"The Value of A : "<<a<<endl;
    cout<<"The Value of B : "<<b<<endl;
    cout<<"The Value of C : "<<c<<endl;
}
int main()
{
    myclass s1;
    s1.init(10,20,30);
    s1.show();
    return 0;
}
