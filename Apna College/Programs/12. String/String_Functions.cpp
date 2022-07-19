#include<iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout<<"String 1 : ";
    getline(cin,s1);
    cout<<"String 2 : ";
    getline(cin,s2);
    cout<<"String 1 : "<<s1<<" String 2 : "<<s2<<endl;
    s1.append(s2);
    cout<<"String 1 : "<<s1<<" String 2 : "<<s2<<endl;
    cout<<s1+s2<<endl;
    return 0;
}