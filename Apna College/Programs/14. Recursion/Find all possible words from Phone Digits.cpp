#include<iostream>
#include<string.h>
using namespace std;

string keypadArr[] = {" ", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int i = 1;

void generate_string(string s, string ans)
{
    if(s.length() == 0)
    {
        cout<<i++<<" - "<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    string letters = keypadArr[int(s[0] - '0')];
    for(int j=0; j<letters.length(); j++)
    {
        generate_string(ros, ans+letters[j]);
    }
}

int main()
{
    string type;
    getline(cin, type);
    generate_string(type, "");
    return 0;
}