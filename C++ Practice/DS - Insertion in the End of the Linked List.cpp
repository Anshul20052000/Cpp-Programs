#include<iostream>
using namespace std;
struct Node
{
    int info;
    Node *next;
}*newptr,*ptr,*start,*temp,*rear;
Node *CreateNewNode(int n)
{
    ptr=new Node;
    ptr->info=n;
    ptr->next=NULL;
    return(ptr);
}
void InsertEnd(Node *p)
{
    if(start==NULL)
    {
        start=rear=p;
    }
    else
    {
        rear->next=p;
        rear=p;
    }
}
void display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->info<<" -> ";
        p=p->next;
    }
    cout<<endl;
}
void DeleteList(Node *p)
{
    while(p!=NULL)
    {
        temp=p;
        p=p->next;
        cout<<"Node Deleted!"<<endl;
    }
    cout<<"Deleted the Whole Linked List..."<<endl;
}
int main()
{
    int item;
    char ch='y';
    start=rear=NULL;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Want to Create New Node in the Linked List!..."<<endl;
        cout<<"Enter the Information for New Node : "<<endl;
        cin>>item;
        cout<<"Creating New Node!..."<<endl;
        newptr=CreateNewNode(item);
        if(newptr!=NULL)
        {
            cout<<"New Node Created!!!...."<<endl;
        }
        else
        {
            cout<<"Cannot Create New Node!....Aborting..."<<endl;
        }
        cout<<"Inserting the New Node in the End of the List!..."<<endl;
        InsertEnd(newptr);
        cout<<"New Node Inserted!..."<<endl;
        cout<<"Now the List is : "<<endl;
        display(start);
        cout<<"Want to Insert More Node in the End!...[Y/N]..."<<endl;
        cin>>ch;
    }
    DeleteList(start);
    return 0;
}
