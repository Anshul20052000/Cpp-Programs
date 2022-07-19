#include<iostream>
#include<math.h>
#include<cctype>
using namespace std;
int main()
{
    string hexa;
    cin>>hexa;
    int dec = 0, place = 0;
    int los = hexa.size();
    //cout<<los<<endl;
    //cout<<sizeof(hexa)<<endl;
    for(int i=los-1; i>=0; i--)
    {
        if(hexa[i]>='0' && hexa[i]<='9')
            dec += (hexa[i] - '0')*pow(16,place++);
        else if((hexa[i]>='A' && hexa[i]<='F') || (hexa[i]>='a' && hexa[i]<='f'))
            dec += ((toupper(hexa[i]) - 'A') + 10)*pow(16,place++);
    }
    cout<<"The Result is : "<<dec<<endl;
    return 0;
}
