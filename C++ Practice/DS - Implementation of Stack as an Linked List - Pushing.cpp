#include<iostream>
using namespace std;
struct Node
{
    int info;
    Node *next;
}*newptr,*ptr,*top,*temp;
Node *CreateNode(int n)
{
    ptr=new Node;
    ptr->info=n;
    ptr->next=NULL;
    return (ptr);
}
void Push(Node *p)
{
    if(top==NULL)
    {
        top=newptr;
    }
    else
    {
        newptr->next=top;
        top=newptr;
    }
}
void Display(Node *Top)
{
    while(Top!=NULL)
    {
        cout<<Top->info<<" <-- ";
        Top=Top->next;
    }
    cout<<endl;
}
void Delete(Node *Top)
{
    while(Top!=NULL)
    {
        temp=Top;
        Top=Top->next;
        delete temp;
        cout<<"Node Deleted!..."<<endl;
    }
    cout<<"Entire Stack Deleted!..."<<endl;
}
int main()
{
    int item;
    char ch='y';
    top=NULL;
    cout<<"Implementation of Stack as an Array!..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Information to be Stored on the Top of the Stack : "<<endl;
        cin>>item;
        cout<<"Inserting Item in the Stack..."<<endl;
        newptr=CreateNode(item);
        if(newptr==NULL)
        {
            cout<<"Cannot Create New Node!...Aborting..."<<endl;
            exit(1);
        }
        cout<<"New Node Created!..."<<endl;
        cout<<"Pushing New Node in the Stack..."<<endl;
        Push(newptr);
        cout<<"Item Pushed!..."<<endl;
        cout<<"Now the Stack is :"<<endl;
        Display(top);
        cout<<"Want to Store More Items in the Stack...[Y/N]..."<<endl;
        cin>>ch;
    }
    Delete(top);
    return 0;
}
