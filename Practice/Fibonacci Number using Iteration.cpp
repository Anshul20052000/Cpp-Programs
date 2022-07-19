 #include<iostream>
using namespace std;
unsigned long long int fib(unsigned long long int n)
{
    if(n<=1)
    {
        return(n);
    }
    else
    {
        unsigned long long int a,b,temp;
        a=0;
        b=1;
        for(int i=1;i<n;i++)
        {
            temp = b;
            b = a + b;
            a = temp;
        }
        return(b);
    }
}
int main()
{
    unsigned long long int n;
    cout<<"Enter the Term for Fibonacci Number : ";
    cin>>n;
    cout<<"The "<<n<<" Fibonacci Number is : "<<fib(n)<<endl;
    return 0;
}
