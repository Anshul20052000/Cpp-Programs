#include<iostream>
#include<string.h>
using namespace std;
int i = 1;

void generate_substring(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<i++<<" - "<<ans<<endl;
        return;
    }
    string temp = s.substr(1);
    generate_substring(temp, ans);
    generate_substring(temp, ans+s[0]);
    generate_substring(temp, ans+to_string(int(s[0])));
}

int main()
{
    string str;
    getline(cin, str);
    generate_substring(str, "");
}