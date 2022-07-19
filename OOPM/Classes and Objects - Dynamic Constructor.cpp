#include<iostream>
using namespace std;
int main()
{
    int n;
    char *str;
    cout<<"For how many Characters you want to get the String : ";
    cin>>n;
    str = new char[n+1];
    cout<<"Enter the String : ";
    cin>>str;
    cout<<"The String is : "<<str<<endl;
    delete str;
    return 0;
}
