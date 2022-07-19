
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the String [ Note : The String should be a Binary String ] : ";
    cin>>str;
    int i = -1;
    A :
        i++;
        if(str[i]=='0')
            goto B;
        else if(str[i]=='\0')
            goto valid;
        else if(str[i]=='1')
            goto invalid;
        else
            goto wrong;

    B :
        i++;
        if(str[i]=='1')
            goto C;
        else if(str[i]=='0')
            goto invalid;
        else if(str[i]=='\0')
            goto valid;
        else
            goto wrong;

    C :
        i++;
        if(str[i]=='1')
            goto D;
        else if(str[i]=='0')
            goto invalid;
        else if(str[i]=='\0')
            goto valid;
        else
            goto wrong;

    D :
        i++;
        if(str[i]=='1')
            goto E;
        else if(str[i]=='0')
            goto invalid;
        else if(str[i]=='\0')
            goto valid;
        else
            goto wrong;

    E :
        i++;
        if((str[i]=='0')&&(str[i]=='1'))
            goto invalid;
        else if(str[i]=='\0')
            goto valid;
        else
            goto wrong;

    invalid :
        cout<<"The String is not a Valid String..."<<endl;
        goto exit;

    valid :
        cout<<"The String is a Valid String..."<<endl;
        goto exit;

    wrong :
        cout<<"The String is not a Binary String..."<<endl;
        goto exit;

    exit:
        return 0;

}
