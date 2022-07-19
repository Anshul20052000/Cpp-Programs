#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String : ";
    cin.ignore();
    cin>>str;
    cout<<"The String is : "<<str<<endl;
    string str2;
    cout<<"Enter the String : ";
    getline(cin,str2);
    cout<<"The String is : "<<str2<<endl;
    return 0;
}