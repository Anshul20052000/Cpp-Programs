#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the Value of the variable A and B : ";
    cin>>a>>b;

    cout<<"\n The Operator && "<<endl;
    cout<<" ( "<<a<<" > "<<b<<" )&&( "<<a<<" > "<<b<<" )  : "<<(( a > b )&&( a > b ))<<endl;
    cout<<" ( "<<a<<" > "<<b<<" )&&( "<<a<<" < "<<b<<" )  : "<<(( a > b )&&( a < b ))<<endl;
    cout<<" ( "<<a<<" < "<<b<<" )&&( "<<a<<" > "<<b<<" )  : "<<(( a < b )&&( a > b ))<<endl;
    cout<<" ( "<<a<<" < "<<b<<" )&&( "<<a<<" < "<<b<<" )  : "<<(( a < b )&&( a < b ))<<endl;

    cout<<"\n The Operator || "<<endl;
    cout<<" ( "<<a<<" > "<<b<<" )||( "<<a<<" > "<<b<<" )  : "<<(( a > b )||( a > b ))<<endl;
    cout<<" ( "<<a<<" > "<<b<<" )||( "<<a<<" < "<<b<<" )  : "<<(( a > b )||( a < b ))<<endl;
    cout<<" ( "<<a<<" < "<<b<<" )||( "<<a<<" > "<<b<<" )  : "<<(( a < b )||( a > b ))<<endl;
    cout<<" ( "<<a<<" < "<<b<<" )||( "<<a<<" < "<<b<<" )  : "<<(( a < b )||( a < b ))<<endl;

    cout<<"\n The Operator ! "<<endl;
    cout<<" !( "<<a<<" > "<<b<<" )  : "<<!( a > b )<<endl;
    cout<<" !( "<<a<<" < "<<b<<" )  : "<<!( a < b )<<endl;
    return 0;
}
