#include<iostream>
using namespace std;
struct Node
{
    int info;
    Node *next;
}*start,*newptr,*ptr,*save,*temp;
Node *CreateNewNode(int n)
{
    ptr=new Node;
    ptr->info=n;
    ptr->next=NULL;
    return (ptr);
}
void InsertBeg(Node *p)
{
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        save=start;
        start=p;
        p->next=save;
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
        delete temp;
        cout<<"Node Deleted!"<<endl;
    }
    cout<<"Successfully Deleted the Whole Linked List!..."<<endl;
}
int main()
{
    int item;
    char ch='y';
    start=NULL;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Want to Insert a Node in the Linked List..."<<endl;
        cout<<"Enter the Information for the New Node : ";
        cin>>item;
        cout<<"Creating New Node... "<<endl;
        newptr=CreateNewNode(item);
        if(newptr!=NULL)
        {
            cout<<"New Node Created!...."<<endl;
        }
        else
        {
            cout<<"Cannot Create New Node!...Aborting..."<<endl;
            exit(0);
        }
        cout<<"Inserting New Node in the Beginning of the List..."<<endl;
        InsertBeg(newptr);
        cout<<"The New Node Inserted in the List!..."<<endl;
        cout<<"Now the List is : "<<endl;
        display(start);
        cout<<"Want to Insert more Node in the List....[Y/N]..."<<endl;
        cin>>ch;
    }
    DeleteList(start);
    cout<<"Thank You!..."<<endl;
    return 0;
}
