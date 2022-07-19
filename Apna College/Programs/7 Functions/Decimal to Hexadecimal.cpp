#include<iostream>
using namespace std;

string Reverse(string str)
{
    char temp;
    int los = str.size();
    for(int i=0;i<=los/2 - 1;i++)
    {
        temp = str[i];
        str[i] = str[los-i-1];
        str[los-i-1] =temp;
    }
    return str;
}

int main()
{
    int dec;
    cout<<"Enter the Decimal Number : ";
    cin>>dec;
    int rem;
    string hexa;
    while(dec > 0)
    {
        rem = dec%16;
        if(rem > 9)
            hexa += char('A'+rem-10);
        else
            hexa += to_string(rem);
        dec /= 16;
    }
    //cout<<"The String is : "<<hexa<<endl;
    cout<<"The Hexadecimal Number is : "<<Reverse(hexa)<<endl;
    return 0;
}
