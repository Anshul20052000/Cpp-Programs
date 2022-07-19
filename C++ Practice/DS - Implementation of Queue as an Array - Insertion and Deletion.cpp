#include<iostream>
using namespace std;
const int Size=50;
int Queue[Size],Rear=-1,Front=-1;
int Insert(int Queue[],int n)
{
    if(Rear==Size-1)
    {
        return (-1);
    }
    else if(Rear==-1)
    {
        Rear=Front=0;
        Queue[Rear]=n;
    }
    else
    {
        Rear++;
        Queue[Rear]=n;
    }
    return 0;
}
void Display(int Queue[],int f,int r)
{
    if(f==-1)
    {
        cout<<"Queue is Empty!..."<<endl;
    }
    else
    {
        for(int i=f;i<r;i++)
        {
            cout<<Queue[i]<<" <-- ";
        }
        cout<<Queue[r];
        cout<<endl;
    }
}
int Delete(int Queue[])
{
    int temp;
    if(Front==-1)
    {
        return (-1);
    }
    else
    {
        temp = Queue[Front];
        if(Front==Rear)
        {
            Front=Rear=-1;
        }
        else
        {
            Front++;
        }
        return (temp);
    }
}
int main()
{
    int item,res;
    char ch='Y';
    cout<<"Implementation of Queue as an Array!..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted : ";
        cin>>item;
        res=Insert(Queue,item);
        if(res==-1)
        {
            cout<<"Queue is Full!...OVERFLOW!...Aborting..."<<endl;
            exit(1);
        }
        cout<<"Element Inserted in the Queue Successfully!..."<<endl;
        cout<<"Now the Queue is : "<<endl;
        Display(Queue,Front,Rear);
        cout<<"Want to Insert more Elements in the Queue...[Y/N]..."<<endl;
        cin>>ch;
    }
    cout<<"Now the Deletion From the Queue Begins!..."<<endl;
    cout<<"The Queue is : "<<endl;
    Display(Queue,Front,Rear);
    cout<<"Want to Delete Element from the Queue...[Y/N]..."<<endl;
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Element on the Front will be Deleted!..."<<endl;
        res=Delete(Queue);
        if(res==-1)
        {
            cout<<"Queue is Empty...UNDERFLOW!...Aborting..."<<endl;
            exit(1);
        }
        else
        {
            cout<<res<<" Deleted!.. "<<endl;
        }
        cout<<"Now the Queue is : "<<endl;
        Display(Queue,Front,Rear);
        cout<<"Want to Delete More Elements from the Queue!...[Y/N]..."<<endl;
        cin>>ch;
    }
    return 0;
}
