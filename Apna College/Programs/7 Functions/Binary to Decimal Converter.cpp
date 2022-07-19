#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long int binNum=0, decNum=0;
    cin>>binNum;
    int rem, place=0;
    while(binNum>0)
    {
        rem = binNum%10;
        decNum += rem*pow(2,place);
        place++;
        binNum /= 10;
    }
    cout<<"The Decimal Output is : "<<decNum<<endl;
    return 0;
}
