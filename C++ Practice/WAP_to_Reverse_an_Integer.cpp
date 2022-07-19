#include<iostream>
using namespace std;
int main()
{
    unsigned int n,reverse_num=0,reminder;
    cout<<"Enter the Integer "<<endl;
    cin>>n;
    cout<<"The Entered Integer is "<<n<<endl;
    while(n!=0)
    {
        reminder=n%10;
        reverse_num=(reverse_num*10)+reminder;
        n/=10;
    }
    cout<<"The Reversed Integer is "<<reverse_num;
    return 0;
}
