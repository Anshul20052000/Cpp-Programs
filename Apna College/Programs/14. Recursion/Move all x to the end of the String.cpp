#include<iostream>
#include<string.h>
using namespace std;

string move_all_x(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    string temp = move_all_x(s.substr(1));
    if(s[0] == 'x')
    {
        return (temp + s[0]);
    }
    return (s[0] + temp);
}

int main()
{
    string str;
    getline(cin, str);
    cout<<move_all_x(str);
    return 0;
}