#include<iostream>
using namespace std;
struct Node
{
    int info;
    Node *next;
}*Front,*Rear,*ptr,*newptr,*temp;
Node *CreateNode(int n)
{
    ptr=new Node;
    ptr->info=n;
    ptr->next=NULL;
    return (ptr);
}
void InsertQueue(Node *p)
{
    if(Rear==NULL)
    {
        Front=Rear=p;
    }
    else
    {
        Rear->next=p;
        Rear=p;
    }
}
void Display(Node *p)
{
    while(p!=NULL)
    {
        cout<<p->info<<" --> ";
        p=p->next;
    }
    cout<<"!!!";
    cout<<endl;
}
void Remove(Node *p)
{
    if(p==NULL)
    {
        cout<<"Queue is Empty!...STACK UNDERFLOW!..."<<endl;
        exit(1);
    }
    else
    {
        ptr=Front;
        Front=Front->next;
        cout<<ptr->info<<" Deleted!..."<<endl;
        delete ptr;
    }
}
void Delete(Node *p)
{
    while(p!=NULL)
    {
        ptr=p;
        p=p->next;
        delete ptr;
        cout<<"Node Deleted!..."<<endl;
    }
    cout<<"Entire Queue Deleted!..."<<endl;
}
int main()
{
    int item;
    char ch='y';
    Front=Rear=NULL;
    cout<<"Implementation of Queue as a Linked List!..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Information of the Node to be Inserted in the Queue : "<<endl;
        cin>>item;
        newptr=CreateNode(item);
        if(newptr==NULL)
        {
            cout<<"Cannot Create New Node!...Aborting..."<<endl;
            exit(1);
        }
        cout<<"Inserting the New Node in the Queue!..."<<endl;
        InsertQueue(newptr);
        cout<<"Node Inserted in the Queue!..."<<endl;
        cout<<"Now the Queue is  : "<<endl;
        Display(Front);
        cout<<"Want to Insert More Elements in the Queue!...[Y/N]..."<<endl;
        cin>>ch;
    }
    cout<<"Now the Deletion in the Queue Begins!..."<<endl;
    cout<<"The Queue is  : "<<endl;
    Display(Front);
    cout<<"Want to Delete from the Queue!..."<<endl;
    cin>>ch;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Deleting the First Element from the Queue!..."<<endl;
        Remove(Front);
        cout<<"Now the Queue is : "<<endl;
        Display(Front);
        cout<<"Want to Delete More Elements from the Queue!...[Y/N]..."<<endl;
        cin>>ch;
    }
    Delete(Front);
    return 0;

}
