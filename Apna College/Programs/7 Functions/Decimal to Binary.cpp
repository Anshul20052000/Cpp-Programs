#include<iostream>
using namespace std;
string Reverse(string str)
{
    char temp;
    int len = str.size();
    for(int i=0;i<=len/2-1;i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    return(str);
}
int main()
{
    int dec;
    cout<<"Enter the Decimal Number : ";
    cin>>dec;
    int rem = 0;
    string bin;
    while(dec > 0)
    {
        rem = dec%2;
        bin = bin + to_string(rem);
        dec /= 2;
    }
    cout<<"Initial String : "<<bin<<endl;
    string finalStr = Reverse(bin);
    cout<<"The Equivalent Binary Number is : "<<finalStr<<endl;
    return 0;
}
