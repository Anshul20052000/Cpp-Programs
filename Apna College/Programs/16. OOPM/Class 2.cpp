#include<iostream>
using namespace std;

class student
{
    public : 
        string name;
        int age;
        bool is_male;
};

int main()
{
    student s1;
    s1.name = "Anshul";
    s1.age = 23;
    s1.is_male = true;
    cout<<"The Name is "<<s1.name<<" and his age is "<<s1.age<<" is_male "<<s1.is_male<<endl;
    return 0;
}   