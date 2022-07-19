#include<iostream>
using namespace std;
int Insertion(int Ar[],int n,int Item);
int main()
{
    int N,item,index,ar[50];
    cout<<"Enter the Length of the Array : ";
    cin>>N;
    cout<<"Enter the Elements in the Array in Ascending Order Only : "<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>ar[i];
    }
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted : ";
        cin>>item;
        if(N==50)
        {
            cout<<"Array OVERFLOW !!!"<<endl;
            exit(1);
        }
        index=Insertion(ar,N,item);
        for(int i=N;i>index;i--)
        {
            ar[i]=ar[i-1];
        }
        ar[index]=item;
        N+=1;
        cout<<"Want to Insert more Elements[Y/N] : ";
        cin>>ch;
    }
    cout<<"Now the Array After Inserting : "<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
int Insertion(int Ar[],int n,int Item)
{
    if(Item>Ar[n-1])
    {
        return(n);
    }
    else if(Item<Ar[0])
    {
        return(0);
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(Item>=Ar[i]&&Item<=Ar[i+1])
            {
                return(i+1);
            }
        }
    }
return(-1);
}
