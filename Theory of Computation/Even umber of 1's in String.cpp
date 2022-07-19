#include<iostream>
using namespace std;

int main()
{
    char String[100];
    cout<<"Enter a String to Validate (String should be of \'0\' and \'1\' only) : ";
    cin>>String;
    int i = -1;

    A :
        i++;
        if(String[i] == '0')
        {
            goto A;
        }
        else if(String[i] == '1')
        {
            goto B;
        }
        else if(String[i] == '\0')
        {
            goto valid;
        }
        else
        {
            goto wrong;
        }

    B :
        i++;
        if(String[i] == '0')
        {
            goto B;
        }
        else if(String[i] == '1')
        {
            goto A;
        }
        else if(String[i] == '\0')
        {
            goto invalid;
        }
        else
        {
            goto wrong;
        }

    valid :
        cout<<"Output is : Valid String"<<endl;
        goto exit;

    invalid :
        cout<<"Output is : Invalid String"<<endl;
        goto exit;

    wrong :
        cout<<"Please Enter Binary String..."<<endl;
        goto exit;

    exit :
        return 0;

}
