#include<iostream>
using namespace std;
class student
{
private:
    string sname,fname,address;
    int marks[5];
    float total=0,avg;
public:
    void getdata();
    void calc();
    void display();
};
void student::getdata()
{
    cout<<"Enter the Name of the Student : ";
    getline(cin,sname);
    cout<<"Enter the Address of the Student : ";
    getline(cin,address);
    cout<<"Enter the Fathers Name : ";
    getline(cin,fname);
    cout<<"Enter the Marks of the Student in each Subject :- \n";
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Marks of Subject "<<i+1<<" : ";
        cin>>marks[i];
    }
}
void student::calc()
{
    for(int i=0;i<5;i++)
    {
        total+=marks[i];
    }
    avg=total/5;
}
void student::display()
{
    cout<<"Name of Student : "<<sname<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Fathers Name : "<<fname<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Marks in Subject "<<i+1<<" : "<<marks[i]<<endl;
    }
    cout<<"Total Marks : "<<total<<endl;
    cout<<"Average : "<<avg;
}
int main()
{
    student obj1;
    obj1.getdata();
    obj1.calc();
    obj1.display();
    return 0;
}
