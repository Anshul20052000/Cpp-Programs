#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Set of Symbols : {a,b} "<<endl;
    cout<<"Enter the String : ";
    cin>>str;
    int i = -1;

    A :
        i++;
        if(str[i]=='a')
            goto B;
        else if(str[i]=='b')
            goto A;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    B :
        i++;
        if(str[i]=='a')
            goto B;
        else if(str[i]=='b')
            goto C;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    C :
        i++;
        if(str[i]=='a')
            goto B;
        else if(str[i]=='b')
            goto D;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    D :
        i++;
        if(str[i]=='a')
            goto B;
        else if(str[i]=='b')
            goto A;
        else if(str[i]=='\0')
            goto valid;
        else
            goto wrong;

    valid :
        cout<<"The String is Valid..."<<endl;
        goto exit;

    invalid :
        cout<<"The String is Invalid..."<<endl;
        goto exit;

    wrong :
        cout<<"The String is not Binary Type..."<<endl;
        goto exit;

    exit :
        return 0;
}
