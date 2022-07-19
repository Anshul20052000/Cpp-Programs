#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    const int Max = 80;
    char ch[] = "Anshul Verma Hello how are you";
    cout<<"You Entered : "<<ch<<endl;
    char str[Max];
    strcpy(str,ch);
    cout<<"The String is : "<<str<<endl;
    return 0;
}
