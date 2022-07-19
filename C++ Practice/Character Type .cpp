#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    if((ch>='A')&&(ch<='Z'))
        cout<<"The Character \'"<<ch<<"\' is an Uppercase Alphabet"<<endl;
    else if((ch>='a')&&(ch<='z'))
        cout<<"The Character \'"<<ch<<"\' is a Lowercase Alphabet"<<endl;
    else if((ch>='0')&&(ch<='9'))
        cout<<"The Character \'"<<ch<<"\' is a Digit"<<endl;
    else
        cout<<"The Character \'"<<ch<<"\' is a Special Symbol"<<endl;

    return 0;
}
