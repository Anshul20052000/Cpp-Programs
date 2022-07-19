#include<iostream>
using namespace std;
struct Node
{
    int info;
    Node *next;
}*newptr,*ptr,*start,*rear,*temp;
Node *CreateNewNode(int n)
{
    ptr=new Node;
    ptr->info=n;
    ptr->next=NULL;
    return (ptr);
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
void Traversal(Node *p)
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
    cout<<"Deleted Entire Linked List!..."<<endl;
}
int main()
{
    int item;
    char ch='y';
    start=rear=NULL;
    cout<<"Linked List!!!..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Information for New Node : ";
        cin>>item;
        cout<<"Creating New Node!..."<<endl;
        newptr=CreateNewNode(item);
        if(newptr!=NULL)
        {
            cout<<"New Node Created!..."<<endl;
        }
        else
        {
            cout<<"Cannot Create New Node!...Aborting..."<<endl;
            exit(0);
        }
        cout<<"Inserting New Node in the End of the List!..."<<endl;
        InsertEnd(newptr);
        cout<<"Node Inserted!"<<endl;
        cout<<"Now the Node is : "<<endl;
        Traversal(start);
        cout<<"Want to Insert More Node in the List!...[Y/N]..."<<endl;
        cin>>ch;
    }
    cout<<"Want to Delete the Linked List [Y/N] : ";
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        DeleteList(start);
    }
    return 0;
}
