#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the Binary String : ";
    cin>>str;
    int i=-1,flag = 0;

    A :
        i++;
        if(str[i]=='0')
            goto A;
        else if(str[i]=='1')
            goto B;
        else if(str[i]=='\0')
            goto condition;
        else
            goto wrong;

    B :
        i++;
        if(str[i]=='0')
            goto A;
        else if(str[i]=='1')
            goto C;
        else if(str[i]=='\0')
            goto condition;
        else
            goto wrong;

    C :
        i++;
        if(str[i]=='0')
            goto A;
        else if(str[i]=='1')
            goto D;
        else if(str[i]=='\0')
            goto condition;
        else
            goto wrong;

    D :
        i++;
        flag++;
        if(str[i]=='0')
            goto A;
        else if(str[i]=='1')
            goto B;
        else if(str[i]=='\0')
            goto condition;
        else
            goto wrong;

    condition :
        if(flag==0)
            goto invalid;
        else
            goto valid;

    valid :
        cout<<"The String is Valid..."<<endl;
        cout<<"The Number of times \'111\' occurs in String : "<<flag<<endl;
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
