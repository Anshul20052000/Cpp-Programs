#include<iostream>
using namespace std;
struct student
{
    int rollno;
    char name[50];
    float percentage;
};
int main()
{
    int n;
    student s[10];
    cout<<"Enter the Number of Students(1-10) : "<<endl;
    cin>>n;
    cout<<"Enter the Information of the Students - "<<endl;
    for(int i=0;i<n;i++)
    {
        s[i].rollno=i+1;
        cout<<"Enter the Details of Roll Number "<<s[i].rollno<<" - "<<endl;
        cout<<"\tEnter Name : ";
        cin>>s[i].name;
        cout<<"\tEnter Percentage : ";
        cin>>s[i].percentage;
        cout<<endl;
    }
    cout<<"Displaying the Information of Students : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Details of Roll Number "<<s[i].rollno<<endl;
        cout<<"\tName of the Student : "<<s[i].name<<endl;
        cout<<"\tPercentage of the Student : "<<s[i].percentage<<endl;
        cout<<endl;
    }
    return 0;
}
