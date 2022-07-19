#include<iostream>
using namespace std;

string Reverse(string str)
{
    int los = str.size();
    for(int i=0;i<=los/2 - 1;i++)
    {
        char temp = str[i];
        str[i] = str[los-i-1];
        str[los-i-1] = temp;
    }
    return str;
}

int main()
{
    long long int dec;
    cout<<"Enter the Decimal Number : ";
    cin>>dec;
    int rem=0;
    string octal;
    while(dec > 0)
    {
        rem = dec%8;
        octal += to_string(rem);
        dec /= 8;
    }
    //cout<<"The String is : "<<octal<<endl;
    cout<<"The Octal Number is : "<<Reverse(octal)<<endl;
    return 0;
}
