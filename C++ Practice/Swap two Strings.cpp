#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char str1[50],str2[50];
    cout<<"Enter the String 1 : ";
    gets(str1);
    cout<<"Enter the String 2 : ";
    gets(str2);
    char temp[50];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    cout<<"The String 1 is : "<<str1<<endl;
    cout<<"The String 2 is : "<<str2<<endl;
    return 0;
}
