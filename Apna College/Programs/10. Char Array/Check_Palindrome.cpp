#include<iostream>
using namespace std;
int main()
{
    int len;
    cout<<"Enter the Length of the String : ";
    cin>>len;
    char str[len+1];
    cout<<"Enter the String : ";
    cin.ignore();
    cin.getline(str, len+1);
    bool check = true;
    int i=0;
    while(i <= (len/2))
    {
        //cout<<str[i]<<" <=> "<<str[len-i-1]<<endl;
        if(str[i] != str[len-i-1])
        {
            check = false;
        }
        i++;
    }
    if(check)
        cout<<"The String is a Palindrome";
    else   
        cout<<"The String is not a Palindrome";
    return 0;
}