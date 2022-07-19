#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String : ";
    getline(cin, str);
    cout<<"S[1] : "<<str[1]<<endl;
    str.clear();
    cout<<str<<endl;
    return 0;
}