#include<iostream>
using namespace std;
void Insert(char ch[],int N,int Pos,int Item)
{
    for(int i=N-1;i>=(Pos-1);i--)
    {
        ch[i+1]=ch[i];
    }
    ch[Pos-1]=Item;
}
int main()
{
    char ch[4]={'A','B','C'};
    char item;
    int pos,n=3;
    cout<<"Array Before Insertion : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ch[i]<<endl;
    }
    cout<<"Which Element do you want to Insert : ";
    cin>>item;
    cout<<"Where do you want to Insert the Item : ";
    cin>>pos;
    Insert(ch,n,pos,item);
    n++;
    cout<<endl;
    cout<<"Array After Insertion : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ch[i]<<endl;
    }
    return 0;
}
