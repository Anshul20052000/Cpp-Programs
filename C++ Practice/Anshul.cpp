#include<iostream>
#include<stdlib.h>
using namespace std;
struct student
{
private:
    int a,b;
public:
    void set_data(int *x,int *y)
    {
        cout<<"The Set Data Function has Executed "<<endl;
        a=*x;
        b=*y;

    }
    void show_data()
    {
        cout<<"The Value of A is "<<a<<" and B is "<<b<<endl;

    }
};
int main()
{
    int x,y;
    student s1;
    cout<<"Enter the Two Numbers to be Displayed  "<<endl;
    cin>>x>>y;
    s1.set_data(&x,&y);
    s1.show_data();
    return 0;

}
