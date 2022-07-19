#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*newptr,*start,*temp,*ptr;
node* Create_New_Node(int n)
{
    ptr=new node;
    ptr->info=n;
    ptr->next=NULL;
    return(ptr);
}
void Insert(node* np)
{
    if(start==NULL)
    {
        start=np;
        return;
    }
    if(np->info < start->info)
    {
        np->next=start;
        start=np;
        return;
    }
    temp=start;
    node *succ;
    succ=start->next;
    while((succ!=NULL) && (succ->info <= np->info))
    {
        temp=succ;
        succ=succ->next;
    }
    np->next=succ;
    temp->next=np;
    return;
}
void Traverse()
{
    if(start==NULL)
    {
        cout<<"UNDERFLOW"<<endl;
        return;
    }
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->info<<" <- ";
            temp=temp->next;
        }
        cout<<"!!!"<<endl;
    }
}
node *Searching(int n)
{
    if(start==NULL)
    {
        cout<<"The Linked List is Empty..."<<endl;
        exit(1);
    }
    else
    {
        temp=start;
        while((temp!=NULL) && (temp->info!=n))
        {
            temp=temp->next;
        }
        return (temp);
    }
}
int Delete(int n)
{
    temp=start;
    if(start==NULL)
    {
        cout<<"UNDERFLOW!...Aborting..."<<endl;
        exit(1);
    }
    if(start->info==n)
    {
        start=start->next;
        cout<<temp->info<<" Deleted from the Linked List!..."<<endl;
        delete temp;
    }
    else
    {
        node *pred;
        pred=NULL;
        while((temp!=NULL) && (temp->info!=n))
        {
            pred=temp;
            temp=temp->next;
        }
        if(temp==NULL)
        {
            return 1;
        }
        pred->next=temp->next;
        cout<<temp->info<<" Deleted from the Linked List"<<endl;
        delete temp;
    }
    return 0;
}
int main()
{
    int item;
    char ch='y';
    start=NULL;
    cout<<"Ordered Linked List..."<<endl;
    cout<<"\nInsertion in the Linked List..."<<endl;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Enter the Element to be Inserted in the Linked List : ";
        cin>>item;
        newptr=Create_New_Node(item);
        if(newptr==NULL)
        {
            cout<<"Cannot Create New Node...Aborting!..."<<endl;
            exit(1);
        }
        else
        {
            cout<<"New Node Created!..."<<endl;
        }
        Insert(newptr);
        cout<<"Now the Linked List is : "<<endl;
        Traverse();
        cout<<"Want to Insert more Elements in the Linked List...[Y/N]...";
        cin>>ch;
    }
    cout<<"\nSearching Starts..."<<endl;
    cout<<"Now the Linked List is : "<<endl;
    Traverse();
    ch='y';
    int ele;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Which Element do you want to Search in the Linked List : ";
        cin>>ele;
        ptr=Searching(ele);
        if(ptr==NULL)
        {
            cout<<"Element not Found in the Linked List..."<<endl;
            continue;
        }
        else
        {
            cout<<ptr->info<<" is Found in the Linked List..."<<endl;
        }
        cout<<"Do you want to Search more Elements in the Linked List...[Y/N]...";
        cin>>ch;
    }
    cout<<"\nNow, Deletion in the Linked List Starts..."<<endl;
    cout<<"Want to Delete Element from the Linked List...[Y/N]...";
    cin>>ch;
    int tmp,rt;
    while(ch=='y'||ch=='Y')
    {
        cout<<"Which Element do you want to Delete from the Linked List : ";
        cin>>tmp;
        rt=Delete(tmp);
        if(rt==1)
        {
            cout<<"Element not Found in the Linked List..."<<endl;
            continue;
        }
        cout<<"Now the Linked List is : "<<endl;
        Traverse();
        cout<<"Do you want to Delete more Elements from the Linked List...[Y/N]...";
        cin>>ch;
    }
}
