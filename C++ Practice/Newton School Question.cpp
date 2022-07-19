#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long int N,K,X,multi=1,temp,aka;
    int flag=0;
    //cout<<"Enter the Value of N and K : "<<endl;
    cin>>N>>K;
    if(N<1 || K<1)
    {
        cout<<"Wrong Input...Aborting"<<endl;
        exit(1);
    }
    aka=pow(2,K);
    multi*=N;
    if(multi%aka==0)
    {
        cout<<flag;
        exit(1);
    }
    for(int i=1;i<25;i++)
    {
        X=pow(2,(4*i));
        flag++;
        multi*=X;
        temp=multi%aka;
        if(temp==0)
        {
            cout<<flag;
            exit(1);
        }
    }
    return 0;

}
