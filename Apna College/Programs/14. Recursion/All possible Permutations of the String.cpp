#include<iostream>
#include<string.h>
using namespace std;
int i = 1;

void permutations(string str, string ans)
{
    if(str.length() == 0)
    {
        cout<<i++<<" - "<<ans<<endl;
        return ;
    }
    for(int j=0;j<str.length();j++)
    {
        string ros = str.substr(0, j) + str.substr(j+1);
        permutations(ros, ans + str[j]);
    }
}

int main()
{
    string str;
    getline(cin, str);
    permutations(str, " ");
    return 0;    
}