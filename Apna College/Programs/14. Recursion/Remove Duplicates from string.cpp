#include<iostream>
#include<string.h>
using namespace std;
string str;

void remove_duplicate(char ch[], int n, int i)
{
    if(i==n)
    {
        return ;
    }
    char c = ch[i];
    str = str + c;
    while(c == ch[i])
    {
        i = i+1;
    }
    remove_duplicate(ch, n, i);
    return ;
}

string remove_duplicate_1(string s)
{
    if(s.length() == 0)
    {
        return " ";
    }
    string temp = remove_duplicate_1(s.substr(1));
    if(temp[0] == s[0])
    {
        return temp;
    }
    return (s[0] + temp);
}

int main()
{
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    remove_duplicate(ch, n, 0);
    cout<<str<<endl;

    cout<<remove_duplicate_1("HellooWwwwoooorrlld");
    return 0;
}