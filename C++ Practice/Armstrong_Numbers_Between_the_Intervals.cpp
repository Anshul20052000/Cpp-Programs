#include<iostream>
using namespace std;
int main()

{
    int low,high,num,result,rem;
    cout<<"Enter the Interval "<<endl;
    cin>>low>>high;
    for(int i=low;i<=high;++i)
    {
        result=0;
        num=i;
    while(num!=0)
    {
        rem=num%10;
        result+=(rem*rem*rem);
        num=num/10;
    }
    if(result==i)
    {
        cout<<result<<" is an Armstrong Number "<<endl;
    }}
    return 0;
}
