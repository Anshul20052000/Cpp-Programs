#include<iostream>
using namespace std;

class Student
{
    string name;
    int age;
    bool is_male;
};

int main()
{
    Student s1;
    s1.name = "Anshul";
    s1.age = 123;
    s1.is_male = true;
    cout<<"The Name is "<<s1.name<<" and his age is "<<s1.age<<" is_male "<<s1.is_male<<endl;
    return 0;
}