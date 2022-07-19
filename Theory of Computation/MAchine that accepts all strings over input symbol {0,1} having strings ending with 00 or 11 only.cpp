#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Note : Input Alphabets are 0 and 1 "<<endl;
    cout<<"Enter the Binary String : ";
    cin>>str;
    int i = -1;

    A :
        i++;
        if(str[i]=='0')
            goto B;
        else if(str[i]=='1')
            goto D;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    B :
        i++;
        if(str[i]=='0')
            goto C;
        else if(str[i]=='1')
            goto D;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    C :
        i++;
        if(str[i]=='0')
            goto C;
        else if(str[i]=='1')
            goto D;
        else if(str[i]=='\0')
            goto valid;
        else
            goto wrong;

    D :
        i++;
        if(str[i]=='0')
            goto B;
        else if(str[i]=='1')
            goto E;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    E :
        i++;
        if(str[i]=='0')
            goto B;
        else if(str[i]=='1')
            goto E;
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
        cout<<"Wrong Input..."<<endl;
        goto exit;

    exit :
        return 0;
}
