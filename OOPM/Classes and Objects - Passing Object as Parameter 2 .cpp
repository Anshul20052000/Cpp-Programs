
#include<iostream>
using namespace std;
class student
{
public:
    double marks;
    student(double m=0)
    {
        marks = m;
    }
    ~student()
    {
        cout<<"Destructor Called..."<<marks<<endl;
    }
    void calculateAverage(student s1,student s2)
    {
        double average = (s1.marks + s2.marks)/2;
        cout<<"Average Marks is : "<<average<<endl;
    }
};
int main()
{
    student s1(88.9),s2(45.9),s3;
    s3.calculateAverage(s1,s2);
    return 0;

}
