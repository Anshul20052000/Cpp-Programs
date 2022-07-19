#include<iostream>
using namespace std;
struct st
{
    int i;
    char ch;
};
struct st s,*ptr;
int main()
{
    s.i = 10;
    s.ch = 'a';
    ptr = &s;
    cout<<s.i<<endl;
    cout<<ptr->i<<endl;
    cout<<s.ch<<endl;
    cout<<ptr->ch<<endl;
    return 0;
}
