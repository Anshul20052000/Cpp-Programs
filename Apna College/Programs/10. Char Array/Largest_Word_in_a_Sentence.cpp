#include<iostream>
using namespace std;
int main()
{
    int len;
    cout<<"Enter the Length of the String : ";
    cin>>len;
    char str[len+1];
    cin.ignore();
    cout<<"Enter the Sentence : ";
    cin.getline(str, len+1);
    int i = 0, maxLen = 0, currLen = 0, st_idx = 0, max_st_idx = 0;
    while(str[i] != '\0')
    {
        if(str[i]==' ')
        {
            if(currLen > maxLen)
            {
                maxLen = max(currLen, maxLen);
                currLen = 0;
                max_st_idx = st_idx;
            }
            st_idx = i+1;
        }
        else
        {
            currLen++;
        }
        i++;
    }
    cout<<"The Largest Word is : ";
    for(int i=0; i<maxLen; i++)
    {
        cout<<str[i+max_st_idx];
    }
    cout<<"..."<<endl;
    return 0;
}