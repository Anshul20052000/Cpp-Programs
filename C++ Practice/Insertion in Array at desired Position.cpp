#include<iostream>
using namespace std;
int Insertion(int ar[],int N,int Item);
int main()
{
    int n,item,ar[50],index;
    cout<<"Enter the Length of the Array : ";
    cin>>n;
    cout<<"Enter the Elements in the Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>ar[i];
    }
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted : ";
        cin>>item;
        cout<<"At what Position do you want to Insert this Element : ";
        cin>>index;
        if(n==50)
        {
            cout<<"Array OVERFLOW !!!"<<endl;
            exit(0);
        }
        for(int i=n;i>index;i--)
        {
            ar[i]=ar[i-1];
        }
        ar[index]=item;
        n+=1;
        cout<<"Want to Insert more Elements [Y/N] : ";
        cin>>ch;
    }
    cout<<"The Elements in the Array after Insertion of the Elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
