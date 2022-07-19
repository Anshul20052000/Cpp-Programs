#include<iostream>
using namespace std;
int main()
{
    char ch[25];
    cout<<"Enter your Name : ";
    gets(ch);
    cout<<" Name : "<<ch<<endl;
    cout<<" Name : ";
    puts(ch);
    int i,len;
    for(i=0;ch[i] != '\0';i++);
    len = i;
    cout<<"The Length of the String : "<<len<<endl;
    return 0;
}
