#include<iostream>
using namespace std;
class Student
{
private:
    int a,b;
public:
    void set_data(int x,int y);
    void show_data();

};
 void Student::show_data()
 {
        cout<<"The Value of A is "<<a<<" and B is "<<b<<endl;

    }
void Student::set_data(int x,int y)
{
        a=x;
        b=y;
    }
int main()
{
    int a,b;
    cout<<"Enter the Value of A and B is "<<endl;
    cin>>a>>b;
    Student s1;
    s1.set_data(a,b);
    s1.show_data();
    return 0;

}
