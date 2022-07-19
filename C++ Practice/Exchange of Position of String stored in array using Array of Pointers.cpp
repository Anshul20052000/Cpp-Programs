#include<iostream>
#include<string.h>
using namespace std;
 int main()
 {
     char *name[]={"Sachin","Kapil","Ajay","Sunil","Anil"};
     int len=0,a=10;
     len=strlen(name[1]);
     cout<<"Length : "<<len<<endl;
     cout<<"The Original String 2 is : "<<name[1]<<endl;
     cout<<"and String 4 is : "<<name[3]<<endl;
     char *temp;
     int *ptr;
     ptr=&a;
     cout<<"Integer Pointer : "<<ptr<<endl;
     temp=name[1];
     name[1]=name[3];
     name[3]=temp;
     cout<<temp<<endl;
     cout<<"The Reversed String 2 is : "<<name[1]<<endl;
     cout<<"and String 4 is : "<<name[3]<<endl;
     return 0;
 }
