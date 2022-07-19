#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a Character : ";
    cin>>ch;
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"The Character is a Vowel.."<<endl;
        break;

    default:
        cout<<"The Character is not a Vowel..."<<endl;
    }
}
