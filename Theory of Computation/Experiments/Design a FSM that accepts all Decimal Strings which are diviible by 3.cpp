#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<<"Note : The Alphabets are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9"<<endl;
    cout<<"Enter the Decimal Number : ";
    cin>>str;
    int i = -1;

    q :
        i++;
        if(str[i]=='0' || str[i]=='3' || str[i]=='6' || str[i]=='9')
        {
            goto q0;
        }
        else if(str[i]=='1' || str[i]=='4' || str[i]=='7')
        {
            goto q1;
        }
        else if(str[i]=='2' || str[i]=='5' || str[i]=='8')
        {
            goto q2;
        }
        else if(str[i]=='\0')
        {
            goto invalid;
        }
        else
        {
            goto wrong;
        }


    q0 :
        i++;
        if(str[i]=='0' || str[i]=='3' || str[i]=='6' || str[i]=='9')
        {
            goto q0;
        }
        else if(str[i]=='1' || str[i]=='4' || str[i]=='7')
        {
            goto q1;
        }
        else if(str[i]=='2' || str[i]=='5' || str[i]=='8')
        {
            goto q2;
        }
        else if(str[i]=='\0')
        {
            goto valid;
        }
        else
        {
            goto wrong;
        }


    q1 :
        i++;
        if(str[i]=='0' || str[i]=='3' || str[i]=='6' || str[i]=='9')
        {
            goto q1;
        }
        else if(str[i]=='1' || str[i]=='4' || str[i]=='7')
        {
            goto q2;
        }
        else if(str[i]=='2' || str[i]=='5' || str[i]=='8')
        {
            goto q0;
        }
        else if(str[i]=='\0')
        {
            goto invalid;
        }
        else
        {
            goto wrong;
        }


    q2 :
        i++;
        if(str[i]=='0' || str[i]=='3' || str[i]=='6' || str[i]=='9')
        {
            goto q2;
        }
        else if(str[i]=='1' || str[i]=='4' || str[i]=='7')
        {
            goto q0;
        }
        else if(str[i]=='2' || str[i]=='5' || str[i]=='8')
        {
            goto q1;
        }
        else if(str[i]=='\0')
        {
            goto invalid;
        }
        else
        {
            goto wrong;
        }


    valid :
        cout<<"Output : Given Decimal Number is Divisible by 3"<<endl;
        goto exit;

    invalid :
        cout<<"Output : Given Decimal Number is not Divisible by 3"<<endl;
        goto exit;

    wrong :
        cout<<"Please Enter Decimal Number only"<<endl;
        goto exit;

    exit :
        return 0;

}
