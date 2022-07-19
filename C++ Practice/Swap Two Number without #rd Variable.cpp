#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the Two Numbers : ";
    cin>>a>>b;
    cout<<"Numbers before Swapping : "<<" A = "<<a<<" B = "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"Numbers after Swapping the Values : A = "<<a<<" B = "<<b<<endl;
    return 0;

}
