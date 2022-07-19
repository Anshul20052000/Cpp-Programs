#include<iostream>
using namespace std;
struct student
{
    string name;
    int rollno;
    float per;
};
int main()
{
    student s;
    cout<<"Enter the Information of the Student : "<<endl;
    cout<<"Enter the Name of the Student : "<<endl;
    getline(cin,s.name);
    cout<<"Enter the Roll Number of the Student : "<<endl;
    cin>>s.rollno;
    cout<<"Enter the Percentage of the Student : "<<endl;
    cin>>s.per;
    cout<<"Displaying the Information of the Student : "<<endl;
    cout<<"Name : "<<s.name<<endl;
    cout<<"Roll Number  : "<<s.rollno<<endl;
    cout<<"Percentage : "<<s.per<<endl;
    return 0;
}
