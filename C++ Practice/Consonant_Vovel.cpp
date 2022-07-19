#include<iostream>
using namespace std;
int main()
{
    char ch;
    x:
    cout<<"Enter the Alphabet "<<endl;
    cin>>ch;
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        cout<<"The Entered Alphabet is a Vowel  "<<endl;

    }
    else
    {
        cout<<"The Entered Alphabet is a Consonant "<<endl;

    }
    char c;
    cout<<"Do you want Another Chance!!!!(Y/N)"<<endl;
    cin>>c;
    if(c=='Y'||c=='y')
    {
        goto x;
    }
    return 0;
}
