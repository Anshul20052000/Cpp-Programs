#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String : ";
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<"The String is : "<<str<<endl;
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i] = 0;
    }
    for(int i=0;i<str.size();i++)
    {
        freq[str[i] - 'a']++;
    }
    int max_freq = 0;
    char max_freq_char;
    for(int i=0;i<26;i++)
    {
        if(freq[i] > max_freq)
        {
            max_freq = freq[i];
            max_freq_char = 'a' + i;
        }
    }
    cout<<"Character is : "<<max_freq_char<<" and its Frequency is : "<<max_freq<<endl;
    return 0;
}
