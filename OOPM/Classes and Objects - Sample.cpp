#include<iostream>
using namespace std;
class sample
{
private:
    int a,b,c;
public:
    void getdata();
    void display();
};
void sample::getdata()
{
    cout<<"Enter the Value of A and B : "<<endl;
    cin>>a>>b;
    c=a+b;
}
void sample::display()
{
    cout<<"Addition is : "<<c<<endl;
}
int main()
{
    sample obj;
    obj.getdata();
    obj.display();
    return 0;
}
