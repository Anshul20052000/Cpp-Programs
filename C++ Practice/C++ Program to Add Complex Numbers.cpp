#include<iostream>
using namespace std;
struct Complex
{
    float real;
    float img;
};
Complex add(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int  main()
{
    Complex add(Complex c1,Complex c2);
    Complex c1,c2,result;
    cout<<"Enter the First Complex Number : "<<endl;
    cout<<"Enter the Real Part : "<<endl;
    cin>>c1.real;
    cout<<"Enter the Imaginary Part : "<<endl;
    cin>>c1.img;
    cout<<"Enter the Second Complex Number : "<<endl;
    cout<<"Enter the Real Part : "<<endl;
    cin>>c2.real;
    cout<<"Enter the Imaginary Part : "<<endl;
    cin>>c2.img;
    result=add(c1,c2);
    cout<<"Final Result is : "<<endl;
    cout<<"Real Part : "<<result.real<<endl;
    cout<<"Imaginary Part : "<<result.img<<endl;
    if(result.img<0)
    {
        cout<<"The Final Complex Number is : "<<result.real<<result.img<<" i"<<endl;
        return 0;
    }
    else
    {
        cout<<"The Final Complex Number is : "<<result.real<<" + "<<result.img<<" i"<<endl;
    }
}

