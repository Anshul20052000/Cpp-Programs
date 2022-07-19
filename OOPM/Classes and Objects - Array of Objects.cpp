#include<iostream>
using namespace std;
class Number
{
    int a,b;
public:
    void input(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"Value of A is : "<<a<<endl;
        cout<<"Value of B is : "<<b<<endl;
    }
};
int main()
{
    int n;
    cout<<"How many Objects do you want to Create : ";
    cin>>n;
    Number ob[n];
    for(int i=0;i<n;i++)
    {
        int a,b;
        cout<<"Object "<<i+1<<endl;
        cout<<"Enter the Value of A : ";
        cin>>a;
        cout<<"Enter the Value of B : ";
        cin>>b;
        ob[i].input(a,b);
    }
    cout<<"\nDisplaying the Value of Objects..."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Object "<<i+1<<endl;
        ob[i].display();
    }
    return 0;
}
