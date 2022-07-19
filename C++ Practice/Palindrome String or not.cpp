#include<iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter the string : ";
    gets(str);
    int i,l,j,flag = -1;
    for(i=0;str[i]!='\0';i++);
    l = i-1;
    cout<<"Length of the String : "<<l+1<<endl;
    for(i=0,j=l;i<=(l/2);i++,j--)
    {
        if(str[i] != str[j])
            flag = 0;
            break;
    }
    if(flag == 0)
        cout<<"String is not a Palindrome..."<<endl;
    else
        cout<<"String is a Palindrome..."<<endl;
    return 0;
}
