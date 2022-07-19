#include<iostream>
using namespace std;
void TOH(int n,char beg,char aux,char End)
{
    if(n>=1)
    {
        TOH(n-1,beg,End,aux);
        cout<<beg<<" to "<<End<<"  ";
        TOH(n-1,aux,beg,End);
    }
}
void TOH(int n,char beg,char aux,char End);
int main()
{
    int N;
    cout<<"Enter the Number : "<<endl;
    cin>>N;
    TOH(N,'A','B','C');
    return 0;
}
