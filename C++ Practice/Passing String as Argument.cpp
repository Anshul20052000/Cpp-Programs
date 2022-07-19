#include<iostream>
using namespace std;
int string_length(char ch[]);
int main()
{
    char str[100];
    cout<<"Enter the String : ";
    gets(str);
    cout<<"The Length of the String is : "<<string_length(str);
    return 0;
}
int string_length(char ch[])
{
    int i,l = 0;
    for(i=0;ch[i]!='\0';i++);
    l = i;
    return l;
}

