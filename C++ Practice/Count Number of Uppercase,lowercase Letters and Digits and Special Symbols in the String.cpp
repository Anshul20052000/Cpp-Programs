#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the string : ";
    gets(str);
    cout<<"The String You Entered is : "<<str<<endl;
    int u = 0,l = 0,d = 0,s = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>=65)&&(str[i]<=90))
            u++;
        else if((str[i]>=97)&&(str[i]<=122))
            l++;
        else if((str[i]>=48)&&(str[i]<=57))
            d++;
        else
            s++;
    }
    cout<<"The Number of Uppercase Alphabets are : "<<u<<endl;
    cout<<"The Number of Lowercase Alphabets are : "<<l<<endl;
    cout<<"The Number of Digits are : "<<d<<endl;
    cout<<"The Number of Special Symbols are : "<<s<<endl;
    return 0;
}
