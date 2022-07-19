#include<iostream>
using namespace std;
int main()
{
    char str1[50],str2[50];
    cout<<"Enter the String : ";
    gets(str1);
    int i,l,j;
    for(i=0;str1[i] != '\0';i++);
    l = i;
    cout<<"The Length of the String : "<<l<<endl;
    for(i = 0,j = l-1 ;str1[i] != '\0'; i++,j--)
    {
        str2[j] = str1[i];
    }
    str2[i] = '\0';
    cout<<"The String 1 is : "<<str1<<endl;
    cout<<"The String after Reversing : "<<str2<<endl;
    return 0;
}
