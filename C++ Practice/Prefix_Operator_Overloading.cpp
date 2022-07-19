#include<iostream>
using namespace std;
class student
{
    int i;
public:
    student()
    {
        cout<<"Enter the Value of i "<<endl;
        cin>>i;
    }
    void operator ++()
    {
        ++i;
    }
    void display()
    {
        cout<<" i = "<<i<<endl;
    }
};
int main()
{
    student obj;
    obj.display();
    ++obj;
    obj.display();
    return 0;

}
