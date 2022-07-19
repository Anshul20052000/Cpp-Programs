#include<iostream>
using namespace std;
void Delete(char ch[],int N,int Pos,char Item)
{
    Item=ch[Pos-1];
    for(int i=Pos-1;i<(N-1);i++)
    {
        ch[i]=ch[i+1];
    }
    cout<<Item<<" is Deleted "<<endl;
}
int main()
{
    char ch[4]={'A','B','C','D'};
    char item;
    int pos,n=4;
    cout<<"Array Before Deletion : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ch[i]<<endl;
    }
    cout<<"Where do you want to Delete the Item : ";
    cin>>pos;
    Delete(ch,n,pos,item);
    n--;
    cout<<endl;
    cout<<"Array After Deletion : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ch[i]<<endl;
    }
    return 0;
}
