#include<iostream>
using namespace std;
struct time
{
    int h,m,s;
};
int main()
{
    void timedifference(time t1,time t2,time *diff);
    time t1,t2,diff;
    cout<<"Enter the Initial Time - "<<endl;
    cout<<"Enter Hours : "<<endl;
    cin>>t1.h;
    cout<<"Enter Minutes : "<<endl;
    cin>>t1.m;
    cout<<"Enter Seconds : "<<endl;
    cin>>t1.s;
    cout<<"Enter the Final Time - "<<endl;
    cout<<"Enter Hours : "<<endl;
    cin>>t2.h;
    cout<<"Enter Minutes : "<<endl;
    cin>>t2.m;
    cout<<"Enter Seconds : "<<endl;
    cin>>t2.s;
    timedifference(t1,t2,&diff);
    cout<<"Time After difference is : "<<endl;
    cout<<"Hours : "<<diff.h<<endl;
    cout<<"Minutes : "<<diff.m<<endl;
    cout<<"Seconds : "<<diff.s<<endl;
    return 0;

}
void timedifference(time t1,time t2,time *diff)
{
    if(t1.s<t2.s)
    {
        t1.m--;
        t1.s+=60;
    }
    diff->s=t1.s-t2.s;
    if(t1.m<t2.m)
    {
        t1.h--;
        t1.m+=60;
    }
    diff->m=t1.m-t2.m;
    diff->h=t1.h-t2.h;
}
