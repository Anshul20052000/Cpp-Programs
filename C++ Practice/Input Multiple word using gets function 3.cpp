#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[25];
    cout<<"Enter your Name : ";
    cin.getline(ch,25);
    cout<<"Your Name is : "<<ch<<endl;
    cout<<"The Length of the String is : "<<strlen(ch)<<endl;
    return 0;
}
