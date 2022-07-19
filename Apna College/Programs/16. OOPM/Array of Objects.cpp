#include<iostream>
using namespace std;

class student 
{
    public :
        string name;
        int age;
        char gender;
};

int main()
{
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].name;
        cin>>s[i].age;
        cin>>s[i].gender;
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<endl;
        cout<<s[i].age<<endl;
        cout<<s[i].gender<<endl;
    }
    return 0;
}