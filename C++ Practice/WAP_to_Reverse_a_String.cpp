#include<iostream>
using namespace std;
void reverse(const string& str);
int main()
{
    string str;
    cout<<"Enter a Sentence to be Reversed "<<endl;
    getline(cin,str);
    cout<<"The Reversed Sentence is "<<reverse(str)<<endl;
    return 0;
}
void reverse(const string& str)
{
    size_t s=str.size();
    if(s==1)
    {
        cout<<str<<endl;
    }
    else
    {
        cout<<str[s-1];
        reverse(str.substr(0,s-1));
    }
}
