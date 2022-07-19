#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int ar[20]={0},lenB[20]={0},length=0,large=0,Zeros[20]={0},Ones[20]={0},Count=0,Temp=0;
unsigned long long int BinNo[20]={0};
string bin[20]={""},Final={""};
unsigned long long int DeciToBin(int n)
{
    unsigned long long int Binary=0,temp=0;
    int flag=0,reminder;
    while(n!=0)
    {
        reminder=n%2;
        temp=pow(10,flag);
        Binary=Binary+(reminder*temp);
        n/=2;
        flag++;
    }
    lenB[length++]=flag;
    return (Binary);
}
int main()
{
    int nodeci;
    //cout<<"Enter the Number of Decimal Numbers : ";
    cin>>nodeci;
    //cout<<"Enter the Decimal Numbers : "<<endl;
    for(int i=0;i<nodeci;i++)
    {
        cin>>ar[i];
    }
    //cout<<"Conversion of Decimal Number to Binary Number!..."<<endl;
    for(int i=0;i<nodeci;i++)
    {
        BinNo[i]=DeciToBin(ar[i]);
    }
    //cout<<"Binary Number : "<<endl;
    for(int i=0;i<nodeci;i++)
    {
        //cout<<BinNo[i]<<"   ";
    }
    //cout<<endl;
    //cout<<"Length of Each Binary Number : "<<endl;
    for(int i=0;i<nodeci;i++)
    {
        //cout<<lenB[i]<<"  ";
    }
    //cout<<endl;
    //cout<<"Largest Length of Binary Number is : ";
    for(int i=0;i<nodeci;i++)
    {
        if(large<lenB[i])
        {
            large=lenB[i];
        }
    }
    //cout<<large<<endl;
    for(int i=0;i<nodeci;i++)
    {
        int temp=0;
        string str;
        temp=large-lenB[i];
        for(int j=0;j<temp;j++)
        {
            str=str+'0';
        }
        bin[i]=str+to_string(BinNo[i]);
    }
    //cout<<"Binary Number : "<<endl;
    for(int i=0;i<nodeci;i++)
    {
        //cout<<bin[i]<<"   ";
    }
    //cout<<endl;
    //cout<<"Calculation of Zeros and Ones : "<<endl;
    for(int i=0;i<nodeci;i++)
    {
        int zero=0,one=0;
        //cout<<bin[i]<<endl;
        for(int j=0;j<large;j++)
        {
            if(bin[i][j]=='0')
            {
                zero++;
            }
            else if(bin[i][j]=='1')
            {
                one++;
            }
        }
        Zeros[i]=zero;
        Ones[i]=one;
        //cout<<"zeros : "<<zero<<endl;
        //cout<<"Ones : "<<one<<endl;
    }
    //cout<<"Comparing : "<<endl;
    for(int i=0;i<nodeci;i++)
    {
        if(Zeros[i]==Ones[i])
        {
            Count++;
        }
    }
    for(int i=0;i<(nodeci-1);i++)
    {
        for(int j=i;j<nodeci;j++)
        {
            if((Zeros[i]+Zeros[j])==(Ones[i]+Ones[j]))
            {
                Count++;
            }
        }
    }
    int z=0,o=0;
    for(int i=0;i<nodeci;i++)
    {
        z+=Zeros[i];
        o+=Ones[i];
    }
    if(z==o)
        Count++;
    //cout<<Count<<endl;
    Final=to_string(DeciToBin(Count));
    Temp=large-Final.length();
    string str="";
    for(int j=0;j<Temp;j++)
    {
        str=str+'0';
    }
    Final=str+Final;
    cout<<Final;
    return 0;

}
