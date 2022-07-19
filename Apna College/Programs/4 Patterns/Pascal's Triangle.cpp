/*

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/
unsigned long long int factorial(int n)
{
    if(n==1 || n==0)
        return 1;
    return(n*factorial(n-1));
}
unsigned long long int nCr(int n, int r)
{
    unsigned long long int factN = factorial(n);
    unsigned long long int factR = factorial(r);
    unsigned long long int factNmR = factorial(n-r);
    return(factN/(factR*factNmR));
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
