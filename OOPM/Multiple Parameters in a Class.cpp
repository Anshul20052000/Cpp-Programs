#include<iostream>
using namespace std;
class sample
{
private:
    int a,b,c;
public:
    void init(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void show()
    {
        cout<<"The Value of A = "<<a<<endl;
        cout<<"The Value of B = "<<b<<endl;
        cout<<"The Value of C = "<<c<<endl;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter the Value of A : ";
    cin>>a;
    cout<<"Enter the Value of B : ";
    cin>>b;
    cout<<"Enter the Value of C : ";
    cin>>c;
    cout<<endl;
    sample s1;
    s1.init(a,b,c);
    s1.show();
    return 0;
}
