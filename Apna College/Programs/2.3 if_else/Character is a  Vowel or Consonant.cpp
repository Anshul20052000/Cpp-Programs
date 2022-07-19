#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    int isLower,isUpper;
    isLower = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    isUpper = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');

    if(isLower || isUpper)
    {
        cout<<"The Character is a Vowel"<<endl;
    }
    else
    {
        cout<<"The Character is a Consonant"<<endl;
    }
    return 0;
}
