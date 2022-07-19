#include<iostream>
using namespace std;
int main()
{
    string str1,str2,str3;
    cout<<"Enter the String 1 : "<<endl;
    getline(cin,str1);
    cout<<"Enter the String 2 : "<<endl;
    getline(cin,str2);
    str3=str1+" "+str2;
    cout<<"After Adding the two Strings we get : \n"<<str3;
    return 0;
}
