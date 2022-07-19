#include<iostream>
using namespace std;
void cyclicSwapping(int *a,int *b,int *c)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=*c;
    *c=temp;
}
int main()
{
    int a,b,c;
    void cyclicSwapping(int *a,int *b,int *c);
    cout<<"Enter the Value of A , B and C : "<<endl;
    cin>>a>>b>>c;
    cout<<"The Values of A ,B and C Before Swapping is : "<<endl;
    cout<<"A = "<<a<<" \nB = "<<b<<" \nC = "<<c<<endl;
    cyclicSwapping(&a,&b,&c);
    cout<<"The Values of A ,B and C After Swapping is : "<<endl;
    cout<<"A = "<<a<<" \nB = "<<b<<" \nC = "<<c<<endl;
}
