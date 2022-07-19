#include<iostream>
#include<string>
using namespace std;

void addLeadingZeros(string& str, int diff)
{
    while(diff!=0)
    {
        str = '0' + str;
        diff--;
    }
}

int ctoi(char ch)
{
    return(ch - '0');
}

void checkNums(string& num1, string& num2)
{
    int los1 = num1.size();
    int los2 = num2.size();
    if(los1 > los2)
    {
        addLeadingZeros(num2,los1-los2);
    }
    else if(los1 < los2)
    {
        addLeadingZeros(num1,los2-los1);
    }
}

string addBinaryNums(string bnum1, string bnum2)
{
    int index = bnum1.size()-1;
    char carry = '0';
    string ans;
    char a,b;
    while(index >= 0)
    {
        a = bnum1[index];
        b = bnum2[index];
        if(a=='1' && b=='1' && carry=='0')
        {
            ans = '0' + ans;
            carry = '1';
        }
        else if(((a=='1' && b=='0') || (a=='0' && b=='1'))  && carry=='1')
        {
            ans = '0' + ans;
            carry = '1';
        }
        else if(a=='1' && b=='1' && carry=='1')
        {
            ans = '1' + ans;
            carry = '1';
        }
        else
        {
            ans = to_string(ctoi(a) + ctoi(b) + ctoi(carry)) + ans;
            if(carry == '1')
            {
                carry = '0';
            }
        }
        index--;
    }
    if(carry == '1')
        ans = '1' + ans;

    return ans;
}

int main()
{
    string bnum1, bnum2;
    cout<<"Enter the 1st Binary Number : ";
    cin>>bnum1;
    cout<<"Enter the 2st Binary Number : ";
    cin.ignore();
    cin>>bnum2;
    checkNums(bnum1, bnum2);
    cout<<"1st Number : "<<bnum1<<endl;
    cout<<"2nd Number : "<<bnum2<<endl;
    string sum = addBinaryNums(bnum1, bnum2);
    cout<<"The Binary Sum is : "<<sum<<endl;
    return 0;
}
