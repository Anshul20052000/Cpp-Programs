#include<iostream>
using namespace std;
int main()
{
    char str1[50],str2[50];
    cout<<"Enter the String 1 : ";
    gets(str1);
    cout<<"Enter the String 2 : ";
    gets(str2);
    cout<<"The string 1 is : "<<str1<<endl;
    cout<<"The string 2 is : "<<str2<<endl;
    cout<<"Now Concatenation..."<<endl;
    int length,i;
    for(i=0;str1[i] != '\0';i++);
    length = i;
    for(int i=0;str2[i] != '\0';i++)
    {
        str1[length+i] = str2[i];
    }
    str1[length+i] = '\0';
    cout<<"The string 1 is : "<<str1<<endl;
    cout<<"The string 2 is : "<<str2<<endl;
    return 0;
}
