#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[50];
    int length;
    cout<<"Enter the Name(Max 49 Characters) : ";
    cin.getline(ch,49);
    length = strlen(ch);
    cout<<"The Length of the String : "<<length<<endl;
    cout<<endl;
    return 0;
}
