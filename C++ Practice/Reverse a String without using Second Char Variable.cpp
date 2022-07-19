#include<iostream>
using namespace std;
int main()
{
    char str1[50];
    cout<<"Enter the String : ";
    gets(str1);
    int i,l,j;
    for(i=0;str1[i] !='\0';i++);
    l = i;
    char temp;
    cout<<"The Length of the String : "<<l<<endl;
    for(i=0,j=l-1;i<=(l-1)/2;i++,j--)
    {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }
    cout<<"The Reversed String is : "<<str1<<endl;
    return 0;
}
