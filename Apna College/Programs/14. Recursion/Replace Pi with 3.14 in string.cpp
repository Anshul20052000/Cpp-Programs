#include<iostream>
#include<string.h>
using namespace std;

void replace_pi(char ch[], int n, int i)
{
    if(i == n)
    {
        return;
    }
    if((ch[i] == 'p') && (ch[i+1] == 'i'))
    {
        cout<<"3.14";
        return replace_pi(ch, n, i+2);
    }
    else
    {
        cout<<ch[i];
        return replace_pi(ch, n, i+1);
    }
}

void replace_pi_1(string s)
{
    if(s.length() == 0)
    {
        return;
    }
    if(s[0] == 'p' && s[1] == 'i')
    {
        cout<<"3.14";
        replace_pi_1(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replace_pi_1(s.substr(1));
    }
}

int main()
{
    int n;
    string str;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    getline(cin, str);
    replace_pi(ch, n, 0);
    cout<<endl;
    replace_pi_1(str);
    return 0;
}