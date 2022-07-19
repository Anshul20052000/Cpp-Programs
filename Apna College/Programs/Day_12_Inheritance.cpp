#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string firstName, lastName;
    string idNumber;
    int N;
    vector<int> scores;
    
    void get_scores()
    {
        for(int i=0;i<N;i++)
        {
            int temp;
            cin>>temp;
            if(temp>=0 && temp<=100)
                scores.push_back(temp);
            else {
                exit(1);
            }
        }
    }
    
    char calculate()
    {
        int sum = 0;
        for(auto s:scores)
        {
            sum += s;
        }
        int avg = sum/N;
        char grade;
        if(avg>=90 && avg<=100)
            grade = 'O';
        else if(avg>=80 && avg<90)
            grade = 'E';
        else if(avg>=70 && avg<80)
            grade = 'E';
        else if(avg>=55 && avg<70)
            grade = 'E';
        else if(avg>=40 && avg<55)
            grade = 'E';
        else
            grade = 'E';
        return grade;
    }
};

class Student:public Person
{
    public:
    Student(string fn, string ln, string id, int n)
    {
        firstName = fn;
        lastName = ln;
        idNumber = id;
        N = n;
    }
};

int main()
{
    string fname, lname, id;
    cin>>fname;
    cin>>lname;
    cin>>id;
    if((fname.length()>=1 && fname.length()<=10) && (lname.length()>=1 && lname.length()<=10) && (id.length() == 7))
    {
        int n;
        cin>>n;
        Student s1(fname, lname, id, n);
        s1.get_scores();
        cout<<"Name: "<<s1.lastName<<", "<<s1.firstName<<endl;
        cout<<"ID: "<<s1.idNumber<<endl;
        cout<<"Grade: "<<s1.calculate()<<endl;
    }
    return 0;
}