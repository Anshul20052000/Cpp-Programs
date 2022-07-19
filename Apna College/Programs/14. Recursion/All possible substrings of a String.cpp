#include<iostream>
using namespace std;
int i=1;

void substring(string str, string ans)
{
    if(str.length() == 0)
    {
        cout<<i++<<" - "<<ans<<endl;
        return;
    }
    string temp = str.substr(1);
    substring(temp, ans);
    substring(temp, ans+str[0]);
}

int main()
{
    string str;
    getline(cin, str);
    substring(str, " ");
    return 0;
}