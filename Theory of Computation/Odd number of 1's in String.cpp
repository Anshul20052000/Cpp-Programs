#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the String [ Note : Type only Binary Number ] : ";
    cin>>str;
    int i=-1;
    A :
        i++;
        if(str[i]=='0')
            goto A;
        else if(str[i]=='1')
            goto B;
        else if(str[i]=='\0')
            goto invalid;
        else
            goto wrong;

    B :
        i++;
        if(str[i]=='0')
            goto B;
        else if(str[i]=='1')
            goto A;
        else if(str[i]=='\0')
            goto valid;
        else
            goto wrong;

    valid :
        cout<<"The String is a Valid String"<<endl;
        goto exit;

    invalid :
        cout<<"The String is not a Valid String"<<endl;
        goto exit;

    wrong :
        cout<<"The Input is not a Binary String"<<endl;
        goto exit;

    exit :
        return 0;
}
