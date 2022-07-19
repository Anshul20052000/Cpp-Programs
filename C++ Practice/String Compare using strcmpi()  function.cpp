#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char spass[] = "anshulv20052000@gmail.com", upass[50];
    cout<<"Enter Password : ";
    gets(upass);
    int resp = 0;
    resp = strcmpi(upass,spass);
    if(resp == 0)
        cout<<"Correct Password Logged in"<<endl;
    else
        cout<<"Wrong Password..."<<endl;
}
