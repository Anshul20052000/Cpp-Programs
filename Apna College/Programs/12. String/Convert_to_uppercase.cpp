#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String : ";
    getline(cin, str);
    cout<<"The String is : "<<str<<endl;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i] -= 32;
        }
    }
    cout<<"The String in Uppercase is : "<<str<<endl;
    return 0;
}