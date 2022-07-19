#include<iostream>
#include<math.h>
using namespace std;
bool checkOctal(int num)
{
    int rem;
    while(num>0)
    {
        rem = num%10;
        if(rem>7)
            return false;
        num /= 10;
    }
    return true;
}
int main()
{
    int octNum, decNum=0;
    cin>>octNum;
    if(!checkOctal(octNum))
        cout<<"Not an Octal Number"<<endl;
    else
    {
        int rem, place=0;
        while(octNum>0)
        {
            rem = octNum%10;
            decNum += rem*pow(8,place);
            place++;
            octNum /= 10;
        }
        cout<<"The Decimal Number is : "<<decNum<<endl;
    }
    return 0;
}
