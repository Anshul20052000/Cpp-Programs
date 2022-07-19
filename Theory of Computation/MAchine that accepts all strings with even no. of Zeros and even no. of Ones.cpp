#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the Binary String : ";
    cin>>str;
    int i = -1;

    A :
        i++;
        if(str[i]=='0')
            goto B;
        else if(str[i]=='1')
            goto C;
        else if(str[i]=='\0')
            goto valid;
        else
            goto wrong;

    B :
        i++;
        if(str[i]=='0')
            goto A;
        else if(str[i]=='1')
            goto D;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    C :
        i++;
        if(str[i]=='0')
            goto D;
        else if(str[i]=='1')
            goto A;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    D :
        i++;
        if(str[i]=='0')
            goto C;
        else if(str[i]=='1')
            goto B;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    valid :
        cout<<"The String is Valid..."<<endl;
        goto exit;

    invalid :
        cout<<"The String is Invalid..."<<endl;
        goto exit;

    wrong :
        cout<<"String is not of Binary Type..."<<endl;
        goto exit;

    exit :
        return 0;
}
