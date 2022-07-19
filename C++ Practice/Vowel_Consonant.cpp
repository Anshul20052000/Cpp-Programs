#include<iostream>
using namespace std;
int main()
{
    char ch;
    int A,B;
    x:
    cout<<"Enter the Alphabet "<<endl;
    cin>>ch;
    A=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    B=(ch=='A'||ch=='e'||ch=='I'||ch=='O'||ch=='U');
    if(A||B)
    {
        cout<<"The Alphabet you Entered is a Vowel "<<endl;
    }
    else
    {
        cout<<"The Alphabet you Entered is a Consonant "<<endl;
    }
    cout<<"Do you want Another Chance!!!!"<<endl;
    char c1;
    cin>>c1;
    if(c1=='y'||c1=='Y')
    {
        goto x;

    }
    return 0;

}
