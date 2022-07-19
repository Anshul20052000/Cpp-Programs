#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a Character : ";
    cin>>c;
    if(isupper(c))
        cout<<"The Character "<<c<<" is a Uppercase Alphabet"<<endl;
    else if(islower(c))
        cout<<"The Character "<<c<<" is a Lowercase Alphabet"<<endl;
    else if(isdigit(c))
        cout<<"The Character "<<c<<" is a Digit"<<endl;
    else
        cout<<"The Character "<<c<<" is a Special Symbol"<<endl;
    return 0;
}
