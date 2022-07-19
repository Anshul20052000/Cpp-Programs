#include<iostream>
using namespace std;
struct student
{
    int rollno;
    char name[50];
    int marks[5];
};
int main()
{
    student s1;
    cout<<"Enter the Roll Number of the Student : ";
    cin>>s1.rollno;
    cout<<"Enter the Name of the Student : ";
    cin.ignore();
    gets(s1.name);
    cout<<"Enter the Marks of the Student : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<" Subject "<<i+1<<" : ";
        cin>>s1.marks[i];
    }
    cout<<"\nThe Roll Number of the Student : "<<s1.rollno<<endl;
    cout<<"The Name of the Student : "<<s1.name<<endl;
    cout<<"The Marks of the Student is : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<" Subject "<<i+1<<" : "<<s1.marks[i]<<endl;
    }
    return 0;
}
