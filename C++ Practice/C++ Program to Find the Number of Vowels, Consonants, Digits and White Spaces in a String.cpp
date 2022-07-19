#include<iostream>
using namespace std;
int main()
{
    string ch;
    cout<<"Enter the String : "<<endl;
    getline(cin,ch);
    cout<<"The String you Entered is : "<<ch<<endl;
    cout<<"The Length of the String is : "<<ch.length()<<endl;
    int v=0,c=0,ws=0,d=0;
    for(int i=0;i<ch.length();i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            v++;
        }
        else if(ch[i]==' ')
        {
            ws++;
        }
     // else if(ch[i]=='0'||ch[i]=='1'||ch[i]=='2'||ch[i]=='3'||ch[i]=='4'||ch[i]=='5'||ch[i]=='6'||ch[i]=='7'||ch[i]=='8'||ch[i]=='9')
        else if(ch[i]>='0'&&ch[i]<='9')
        {
            d++;
        }
        else
        {
            c++;
        }
    }
    cout<<"The Number of Vowels are : "<<v<<endl;
    cout<<"The Number of Consonants are : "<<c<<endl;
    cout<<"The Number of Digits are : "<<d<<endl;
    cout<<"The Number of Whitespaces are : "<<ws<<endl;
    return 0;
}
