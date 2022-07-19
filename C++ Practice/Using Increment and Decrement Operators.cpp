#include<iostream>
using namespace std;

int read_at_runtime();

int main()
{
    int a,b,c;
    cout<<"Enter the Two Variables : ";
    cin>>a>>b;
    c = (a++) + (b++);
    cout<<"The Value of A : "<<a<<endl;
    cout<<"The Value of B : "<<b<<endl;
    cout<<"The Value of C : "<<c<<endl;
    int d;
    cout<<"Enter the Value of Variable D : ";
    cin>>d;
    cout<<" D++ : "<<d++<<endl;
    cout<<" D   : "<<d<<endl;
    cout<<" ++D : "<<++d<<endl;
    cout<<" D   : "<<d<<endl;
    cout<<" --D : "<<--d<<endl;
    cout<<" D   : "<<d<<endl;
    cout<<" D-- : "<<d--<<endl;
    cout<<" D   : "<<d<<endl;
    return 0;
}
