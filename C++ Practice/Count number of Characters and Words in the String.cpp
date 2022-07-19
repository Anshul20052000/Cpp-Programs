#include<iostream>
using namespace std;
int main()
{
    char str[50];
    cout<<"Enter the String : ";
    gets(str);
    int i,l;
    for(i=0;str[i]!='\0';i++);
    l = i;
    cout<<"The String is : "<<str<<endl;
    cout<<"The Length of the String : "<<l<<endl;
    int w = 1,c = 0;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]==' ')&&(str[i-1]!=' '))
            w++;
        if(str[i]!='.')
            c++;
    }
    cout<<"The Number of Characters in the Sentence : "<<c<<endl;
    cout<<"The Number of Words in the Sentence : "<<w<<endl;
    return 0;
}
