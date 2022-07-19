#include<iostream>
#include<string.h>
using namespace std;
const int Max = 50;
int main()
{
    char str[Max];
    cout<<"Enter your Name (End String with \'$\') : ";
    cin.get(str,Max-1,'$');
    cout<<"Name : "<<str<<endl;
    int length;
    length = strlen(str);
    cout<<"The Length of the String is : "<<length<<endl;
    return 0;
}
