#include<iostream>
using namespace std;
int main()
{
    string str="nincompoop";
    cout<<"String is : "<<str<<endl;
    str.erase(4,2);
    cout<<"String is : "<<str<<endl;
    cout<<str.find("poop")<<endl;
    cout<<str.insert(3,"lol")<<endl;
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str<<endl;
    for(int i=0;i<str.length();i++)
        cout<<str[i];
    cout<<endl;
    string substr = str.substr(3,6);
    cout<<substr<<endl;
    string inte = "123445";
    cout<<inte<<"  "<<sizeof(inte)<<endl;
    int a = stoi(inte);
    cout<<a<<"  "<<sizeof(a)<<endl;
    a += 1123;
    string str123 = to_string(a);
    cout<<str123<<"  "<<sizeof(str123)<<endl;
    return 0;
}