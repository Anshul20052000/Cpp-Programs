#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String : ";
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<"The String in Upper Case is : "<<str<<endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<"The String in Lower Case is : "<<str<<endl;
    return 0;
}