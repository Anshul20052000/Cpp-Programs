#include<iostream>
using namespace std;
int Sum(int* , int*);
int main()
{
    int a,b;
    cout<<"Enter the Value of A and B  "<<endl;
    cin>>a>>b;
    int S=Sum(&a,&b);
    cout<<"Sum is "<<S;
    return 0;
}
int Sum(int *x,int *y)
{
    return (*x+*y);
}
