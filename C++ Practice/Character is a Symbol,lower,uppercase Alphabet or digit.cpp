#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a Character : ";
    cin>>c;
    if((c>=65)&&(c<=90))
        cout<<"The Character "<<c<<" is a Uppercase Alphabet"<<endl;
    else if((c>=97)&&(c<=122))
        cout<<"The Character "<<c<<" is a Lowercase Alphabet"<<endl;
    else if((c>=48)&&(c<=57))
        cout<<"The Character "<<c<<" is a Digit"<<endl;
    else
        cout<<"The Character "<<c<<" is a Special Symbol"<<endl;
    return 0;
}
