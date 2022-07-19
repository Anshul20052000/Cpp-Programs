#include<iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout<<"String 1 : ";
    getline(cin, s1);
    cout<<"String 2 : ";
    getline(cin, s2);
    cout<<"String 1 : "<<s1<<endl;
    cout<<"String 2 : "<<s2<<endl;
    cout<<s1.compare(s2)<<endl;
    s1.clear();
    if(s1.empty())
        cout<<"String is Empty..."<<endl;
    if(!s2.empty())
        cout<<"String is not Empty..."<<endl;
    return 0;
}