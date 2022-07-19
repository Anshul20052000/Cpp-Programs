#include<iostream>
using namespace std;
int main()
{
    string str[10];
    cout<<"Enter the 10 Words : "<<endl;
    for(int i=0;i<10;i++)
    {
        getline(cin,str[i]);
    }
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(str[i]>str[j])
               {
                    string temp;
                    temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
               }
        }
    }
    cout<<"After Sorting the Words we get : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}
