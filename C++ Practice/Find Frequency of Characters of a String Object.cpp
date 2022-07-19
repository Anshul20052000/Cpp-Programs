#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input;
    char ch;
    cout<<"Enter the String : "<<endl;
    getline(cin,input);
    cout<<"The String you Entered is : "<<input<<endl;
    cout<<"Of which Character do you want to find the Frequency in the String : "<<endl;
    cin>>ch;
    int Count=0;
    for(int i=0;i<input.length();i++)
    {
        if(ch==input[i])
        {
            Count++;
        }
    }
    cout<<"The Frequency of the Character "<<ch<<" is : "<<Count<<endl;
    return 0;
}
