#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    if((ch >= 65)&&(ch<=90))
        cout<<"The Character \'"<<ch<<"\' is an Uppercase Alphabet"<<endl;
    else if((ch >= 97)&&(ch<=122))
        cout<<"The Character \'"<<ch<<"\' is a Lowercase Alphabet"<<endl;
    else if((ch >= 48)&&(ch<=57))
        cout<<"The Character \'"<<ch<<"\' is a Digit"<<endl;
    else
        cout<<"The Character \'"<<ch<<"\' is a Special Symbol"<<endl;

    return 0;
}
