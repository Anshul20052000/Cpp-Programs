#include<iostream>
using namespace std;
int main()
{
    string str,out;
    cout<<"Enter the String : "<<endl;
    getline(cin,str);
    cout<<"The String you Entered is : "<<str<<endl;
    for(int i=0;i<str.length();i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]==' '))
           {
               out+=str[i];
           }
    }
    cout<<"The String without Characters is  : "<<out<<endl;
    return 0;
}
