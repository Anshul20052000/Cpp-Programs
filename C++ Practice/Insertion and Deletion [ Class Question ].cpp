
#include<iostream>
using namespace std;
void Insertion(char ch[],int N,int pos,char Item)
{
    for(int i=N;i>=pos;i--)
    {
        ch[i]=ch[i-1];
    }
    ch[pos-1]=Item;
}
void Deletion(char ch[],int N,int pos)
{
    char temp;
    temp=ch[pos-1];
    for(int i=pos-1;i<N;i++)
    {
        ch[i]=ch[i+1];
    }
    cout<<temp<<" is Deleted!"<<endl;
}
int main()
{
    char ch[10]={'A','B','C'},item,flag;
    int n=3,k,choice;
    Y:
    cout<<"Enter your Choice : "<<endl;
    cout<<"   1. Insertion \n   2. Deletion"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1 :
            xyz:
            cout<<"The Array before Insertion of the Element : "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"   "<<ch[i]<<endl;
            }
            if(n==10)
            {
                cout<<"OVERFLOW!";
                exit(0);
            }
            cout<<"Enter the Element which you want to Insert in the Array : ";
            cin>>item;
            cout<<"Where do you want to Insert the Element : ";
            cin>>k;
            Insertion(ch,n,k,item);
            n++;
            cout<<"The Array After Insertion of the Element : "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"   "<<ch[i]<<endl;
            }
            cout<<"Want to Insert More Element[Y/N] : ";
            cin>>flag;
            if(flag=='y'||flag=='Y')
            {
                goto xyz;
            }
            break;

        case 2 :
            yz:
            cout<<"The Array before Deletion of the Element : "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"   "<<ch[i]<<endl;
            }
            if(n==0)
            {
                cout<<"UNDERFLOW!";
                exit(0);
            }
            cout<<"Which Element do you want to Delete : ";
            cin>>k;
            Deletion(ch,n,k);
            n--;
            cout<<"The Array After Deletion of the Element : "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"   "<<ch[i]<<endl;
            }
            cout<<"Want to Delete More Element[Y/N] : ";
            cin>>flag;
            if(flag=='y'||flag=='Y')
            {
                goto yz;
            }
            break;

        default: cout<<"The Choice you Entered is not Valid!!!"<<endl;
    }
    cout<<"Want to Insert/Delete More Elements[Y/N] : ";
    cin>>flag;
    if(flag=='Y'||flag=='y')
    {
        goto Y;
    }
    return 0;
}
