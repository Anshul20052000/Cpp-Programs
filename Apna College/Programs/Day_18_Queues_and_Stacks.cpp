#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack<char> st;
    queue<char> qu;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(islower())
        st.push(str[i]);
        qu.push(str[i]);
    }
    bool flag = true;
    for(int i=0;i<str.length();i++)
    {
        int a = st.top();
        int b = qu.front();
        st.pop();
        qu.pop();
        if(a != b)
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout<<"The word, "<<str<<", is a palindrome."<<endl;
    }
    else
    {
        cout<<"The word, "<<str<<", is not a palindrome."<<endl;
    }
    return 0;
}
