#include<iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=1,next=0;
    cout<<"To what number you have to Find the Fibonacci Series "<<endl;
    cin>>n;
    cout<<"the Fibonacci Series is "<<endl;
    for(int i=1;i<=n;++i)
    {
        if(i==1)
    {
        cout<<" "<<t1<<" ";
        continue;
    }
    if(i==2)
    {
        cout<<t2<<" ";
        continue;
    }
    next=t1+t2;
    t1=tī2;
    t2=next;
    cout<<next<<" ";

}
return 0;
}
