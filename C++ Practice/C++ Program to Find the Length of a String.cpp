#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String : "<<endl;
    getline(cin,str);
    cout<<"The Length of the String is : "<<str.size()<<endl;
    cout<<"The Length of the String is : "<<str.length()<<endl;
    return 0;
}
