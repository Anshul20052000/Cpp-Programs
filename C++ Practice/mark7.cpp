#include<iostream>
#include<stdlib.h>
using namespace std;
class Student
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"The Value of A is "<<a<<" and B is "<<b<<endl;

    }
    Student add(Student s)
    {
        Student temp;
        temp.a=a+s.a;
        temp.b=b+s.b;
        return temp;
    }
    int retA()
    {
        return(a);
    }
    int retB()
    {
        return(b);
    }
};

int main()
{
    int a,b,c,d;
    Student s1,s2,s3;
    cout<<"Enter the First Complex Number "<<endl;
    cin>>a>>b;
    s1.set_data(a,b);
    s1.show_data();
    cout<<"Enter the Second Complex Number "<<endl;
    cin>>c>>d;
    s2.set_data(c,d);
    s2.show_data();
    s3=s1.add(s2);
    s3.show_data();
    s3.retA();
    s3.retB();


//    cout<<"\n\nThe Complex Number is  "<< s3.retA << "( + i" << s3.retB <<")"endl;
    return 0;
}
