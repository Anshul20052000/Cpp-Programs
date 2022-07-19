#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
    int empno;
    char name[26];
    float basic;
    int experience;
};
void display(employee *emp)
{
    cout<<"Employee Number : "<<emp->empno<<endl;
    cout<<"Name of Employee : ";
    cout.write(emp->name,strlen(emp->name));
    cout<<endl;
    cout<<"Basic of Employee : "<<emp->basic<<endl;
    cout<<"Experience : "<<emp->experience<<endl;
}
void increase(employee *emp)
{
    if(emp->experience>=12)
        emp->basic+=200000;
}
int main()
{
    employee e1,*e2;
    cout<<"Enter the Details of the Employee : "<<endl;
    cout<<"Enter the Employee Number : ";
    cin>>e1.empno;
    cout<<"Enter the Name of the Employee : ";
    cin.ignore();
    gets(e1.name);
    cout<<"Enter the Basic of the Employee : ";
    cin>>e1.basic;
    cout<<"Enter the Experience of the Employee : ";
    cin>>e1.experience;
    cout<<endl;
    display(&e1);
    cout<<endl;
    e2=&e1;
    cout<<"Employee Details before Increase : "<<endl<<endl;
    display(e2);
    increase(e2);
    cout<<"Employee Details after Increase : "<<endl<<endl;
    display(e2);
    return 0;

}
