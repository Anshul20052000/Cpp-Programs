#include<iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter the String : ";
    gets(str);
    cout<<"The String is : "<<str<<endl;
    int i,c=0,v=0;
    for(i=0;str[i]!='\0';i++)
    {
        switch(str[i])
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
            v++;
            break;
        default :
            c++;
            break;
        }
    }
    cout<<"The Number of Consonants are : "<<c<<endl;
    cout<<"The Number of Vowels are : "<<v<<endl;
    return 0;
}
