
#include<iostream>
using namespace std;

int read_at_runtime();

int main()
{
    const int NUM = read_at_runtime();
    cout<<" Inside Main Function the Value of NUM : "<<NUM<<endl;
    return 0;
}

int read_at_runtime()
{
    int n = 0;
    cout<<"Enter the Value of Constant : ";
    cin>>n;
    return n;
}
