#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    string binNum = " ";
    cin>>binNum;
    int decNum, place=0;
    int los = binNum.length();
    cout<<los<<endl;
    for(int i=los-1;i>=0;i--)
    {
        decNum += (int(binNum[i])-int('0'))*pow(2, place);
        place++;
    }
    cout<<"The Decimal Number is : "<<decNum<<endl;
    return 0;
}
