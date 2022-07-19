#include<iostream>
using namespace std;
int main()
{
    char str1[50],str2[50];
    cout<<"Enter the String : ";
    gets(str1);
    int i;
    for(i=0;str1[i] != '\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    cout<<"The String 1 is : "<<str1<<endl;
    cout<<"The String 2 is : "<<str2<<endl;
}
